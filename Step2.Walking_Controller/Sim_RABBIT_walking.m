function [t_hist, y_hist, info, err] = Sim_RABBIT_walking( q0, dq0, p1, p2, plot_flag )

% ============================================
% walking controller
% 
% Error code (err):
% 0 - success
% 1 - step length @ TD is too large compared to p2
% 2 - step length @ TD is too small compared to p2 (not including 3)
% 3 - theta > pi @ TD
% 4 - fall backward (dth = 0)
% 5 - fall forward (possibly with event function failure)
% 6 - unable to complete next half step - multiple mid-stance detected => maybe t(end) too small
% 7 - unable to complete next half step - fall forward
% 8 - others
% ============================================

%% Initialization
params = GenParams_RABBIT;
rabbit = RABBIT(which('five_link_walker.urdf'));
rabbit.configureDynamics('DelayCoriolisSet',false);

%% If no IC is specified, pick one
if nargin == 0
    
    p1 = 0.55;
    p2 = 0.35;
    
    
    [ Bez_pts, ptime ] = FindBezTraj( p1, p2 );
    [ q0, dq0 ] = EvalBezier( Bez_pts, 0.5 );
    dq0 = dq0 / ptime;
    
    [p_hip, v_hip] = Joint2Hip( q0, dq0, params );
    q0 = [ p_hip; q0 ];
    dq0 = [ v_hip; dq0 ];
end

if nargin < 5
    plot_flag = 1;
end

%% Current desired trajectory
th0 = th0_fit( [p1; p2] );
th_len = th_len_fit( [p1; p2] );
[q_traj_des, ptime] = FindBezTraj( p1, p2 );

%% best guess for previous trajectory
[q_traj_des_m, km] = Midstance_y2traj( [q0(3:7);dq0(3:7)] );
th0_m = th0_fit( km(:) );
th_len_m = th_len_fit( km(:) );

%% Setup simulation
y0 = [ q0; dq0 ];

MaxTime = 5;
Dyn = @( t, y ) SecondOrderODE( y, PD_controller( t, y ) );

% Integrate ODE forward
current_time = 0;
t_rel_hist = [];
t_hist = [];
y_hist = [];
trans_hist = 0;
flag_smoothPD = 1;

s0 = Find_s0( y0 );

Ntrans = 0;     % number of transitions
err = 0;

while current_time < MaxTime - 1e-3
    
    options = odeset('Events', @EvtFunc, 'RelTol', 1e-7, 'AbsTol', 1e-7 );
    [tout,yout,te,ye,ie] = ode45(Dyn,[0,5],y0,options);
    
    Ntrans = Ntrans + 1;
    info(Ntrans).time = tout + current_time;
    info(Ntrans).state = yout;
    info(Ntrans).ie = ie;
    info(Ntrans).k = [p1, p2];
    
    t_hist = [t_hist; info(Ntrans).time];
    y_hist = [y_hist; info(Ntrans).state];
    current_time = tout(end)+current_time;
    
    if isempty(ie)
        err = 8;
        break;
    end
    
    switch Ntrans
        case 1      % either 1-TD, 2-MSFW, 3-MSBW, or others
            switch ie
                case 1
                    flag_smoothPD = 0;
                    
                    [ p_foot2 ] = Joint2LeftToePos( yout(end,3:7).', params );
                    if (p_foot2(1) < 0)
                        err = 4;
                        break;
                    end
                    y0 = ResetMap( yout(end,:).' );
                    
                    if (y0(3)+y0(4)+y0(5)/2 > pi)
                        err = 3;
                        [tout, yout, ie] = Sim_RABBIT_route4_PD_v2_untilfail( y0(1:7), y0(8:14), p1, p2 );
                        Ntrans = Ntrans + 1;
                        info(Ntrans).time = tout + current_time;
                        info(Ntrans).state = yout;
                        info(Ntrans).ie = ie;
                        info(Ntrans).k = [p1, p2];
                        t_hist = [t_hist; info(Ntrans).time];
                        y_hist = [y_hist; info(Ntrans).state];
                        break;
                    end
                    if (p_foot2(1) > p2 + 0.05)
                        err = 1;
                    elseif (p_foot2(1) < p2 - 0.05)
                        err = 2;
                    end
                case 2
                    t_hist = [];
                    y_hist = [];
                    Ntrans = 0;
                    current_time = 0;
                    y0 = yout(end,:).';
                    s0 = Find_s0( y0 );
                case 3
                    err = 6;
                    break;
                otherwise
                    err = 8;
                    break;
            end
        case 2      % either 2-MSFW, 4-BW, 5-FW, or others
            switch ie
                case 2
                    y0 = yout(end,:).';
                case 4
                    err = 4;
                    
                    break;
                case 5
                    err = 5;
                    break;
                otherwise
                    err = 8;
                    break;
            end
        case 3      % either 1-TD, or others
            switch ie
                case 1
                    break;
                otherwise
                    err = 8;
                    break;
            end
    end
end


%% Plot trajectories & animation

% PlotTraj();

if plot_flag == 1
    Animate();
%     PlotTraj;
    disp(length(t_hist));
end


%% ======================  Functions  =======================
    
    function [dydt] = SecondOrderODE( y, tau )
        q   = y(1:7);
        dq  = y(8:14);

        M   = rabbit.calcMassMatrix( q );
        F   = rabbit.calcDriftVector( q, dq );
        B   = [zeros(3,4); 50 * eye(4)];
        J   = Jh_RightToe_RightStance( q );
        dJ  = dJh_RightToe_RightStance( q, dq );

        J(2,:)  = [];
        dJ(2,:) = [];

        Mat = [ M, -J.';
                J, zeros(2) ];
        vec = [ F + B*tau
                -dJ * dq ];

        sol = Mat \ vec;
        ddq = sol(1:7);
        dydt = [ dq; ddq ];
    end

    function [value, isterminal, direction] = EvtFunc( t, y )
        q = y(1:7);
        dq = y(8:end);
        value = [ ...
            u_leftFootHeight_RightStance( q )       % touch-down
            q(3) + q(4) + q(5)/2 - pi               % mid-stance, forward
            q(3) + q(4) + q(5)/2 - pi               % mid-stance, backward
            dq(3) + dq(4) + dq(5)/2                 % dth = 0
            q(3) + q(4) + q(5)/2 - 3*pi/2 ];        % forward
        
        if (t < 1e-3)
            value = nan(5,1);
        end
        if (t < 1e-2)
            value(4) = nan;
        end
        if (q(3) + q(4) + q(5)/2 < pi)
            value(4) = nan;
        end
        isterminal = ones( 5, 1 );
        direction = [ -1; 1; -1; -1; 1 ];
    end

    function s0 = Find_s0( y )
        th = y(3) + y(4) + y(5) / 2;
        s0  = (th - th0) / th_len * 1.05;
    end

    function [ q_des, dq_des, beta ] = FindRefTraj( y )
        beta = nan;
        % find phase variable
        th = y(3) + y(4) + y(5) / 2;
        s = (th - th0) / th_len;
        s = s * 1.1;
        % sanity check
        if (s < 0)
            s = 0; 
        end
        if (s > 1)
            s = 1; 
        end
        % desired q and dq
        [ q_des, dq_des ] = EvalBezier( q_traj_des, s );
        dq_des = dq_des / ptime;
        if (s == 1) || (s == 0)
            dq_des = dq_des * 0;
        end
        
        if (flag_smoothPD) && (th >= pi)          % before touch-down, "smooth" PD
%         if false
            s_m = (th - th0_m) / th_len_m;
            s_m = s_m * 1.1;
            % sanity check
            if (s_m < 0)
                s_m = 0; 
            end
            if (s_m > 1)
                s_m = 1; 
            end
            
            [ q_des_m, ~ ] = EvalBezier( q_traj_des_m, s_m );
            if th_len > th_len_m
                beta = 2 * (s_m - 0.5);
            else
                beta = (s - s0) / (1 - s0);
            end
            if beta < 0, beta = 0; end
            if beta > 1, beta = 1; end
            q_des = q_des * beta + (1-beta) * q_des_m;
        end
    end
    
    function [u] = PD_controller( ~, y )
        [ q_des, dq_des ] = FindRefTraj( y );
        
        % PD
        q = y(1:7);
        dq = y(8:14);
        
        Kp = 500 *[ 10; 1; 10; 1 ];
        Kd = 0.5 * [ 100; 10; 100; 10 ];
        u_pd = -Kp .* (q(4:end)-q_des(2:end)) - Kd .* (dq(4:end) - dq_des(2:end));
        
        % controller offset
        F   = rabbit.calcDriftVector( q, dq );
        B   = 100 * eye(4);
        u_offset = B \ F(4:end);
        
        % put everything together
        u = u_pd + u_offset;
        
        u(u>30) = 30;
        u(u<-30) = -30;
        
%         disp(u);
    end

    function [y_plus] = ResetMap( y_minus )
        q = y_minus( 1 : 7 );
        dq = y_minus( 8 : 14 );
        T = ...
            [ 0 0 1 0;
              0 0 0 1;
              1 0 0 0;
              0 1 0 0 ];
        T = blkdiag(eye(3), T);
        q_minus = T * q;
        dq_minus = T * dq;
        
        M = rabbit.calcMassMatrix( q_minus );
        J = Jh_RightToe_RightStance( q_minus );
        J(2,:)  = [];
        
        Mat = [ M, -J.';
        J, zeros(2)];
        vec = [ M * dq_minus; zeros(2,1) ];
        
        res = Mat \ vec;
        dq_plus = res(1:7);
        q_plus = q_minus;
        
        y_plus = [ q_plus; dq_plus ];
    end

    function PlotTraj()
        q_hist = y_hist( :, 3:7 );
        dq_hist = y_hist( :, 10:14 );
        q_hist_ref = zeros( size( q_hist ) );
        dq_hist_ref = zeros( size( dq_hist ) );
        
        beta_hist = [];
        u_hist = [];
        
        for i = 1 : size( q_hist, 1 )
            y = y_hist(i,:).';
            if t_hist(i) < info(1).time(end)
                flag_smoothPD = 1;
            else
                flag_smoothPD = 0;
            end
            
            [ q_des, dq_des, beta ] = FindRefTraj( y );
            beta_hist = [ beta_hist; beta ];
            u_hist = [ u_hist; PD_controller( 0, y ).' ];

            q_hist_ref( i, : ) = q_des;
            dq_hist_ref( i, : ) = dq_des;
        end
        dth_hist = dq_hist(:,1) + dq_hist(:,2) + dq_hist(:,3)/2;
        
        figure;
        hold on;
        plot( t_hist, q_hist(:,2:end) );
        plot( t_hist, q_hist_ref(:,2:end), '--' );
        plot( t_hist, beta_hist, 'LineWidth', 3 );
        legend('q2', 'q3', 'q4', 'q5', 'q2ref', 'q3ref', 'q4ref', 'q5ref', 'beta');
        
    end

    function Animate()
        anim = MyAnimator.MyFiveLinkAnimator( [], ...
            't', t_hist, ...
            'q', y_hist(:,1:7).', ...
            'text_flag', true );
        anim.pov = MyAnimator.AnimatorPointOfView.West;
        anim.Animate(true);
        anim.isLooping = false;
        anim.updateWorldPosition = true;
        anim.endTime = t_hist(end);
        conGUI = Animator.AnimatorControls();
        conGUI.anim = anim;
    end
end