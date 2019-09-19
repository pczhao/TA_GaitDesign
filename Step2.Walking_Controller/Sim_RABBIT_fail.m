function [tout, yout, ie] = Sim_RABBIT_fail( q0, dq0, p1, p2 )


%% Initialization
params = GenParams_RABBIT;
rabbit = RABBIT(which('five_link_walker.urdf'));
rabbit.configureDynamics('DelayCoriolisSet',false);

%% Current desired trajectory
th0 = th0_fit( [p1; p2] );
th_len = th_len_fit( [p1; p2] );
[q_traj_des, ptime] = FindBezTraj( p1, p2 );

%% Setup simulation
y0 = [ q0; dq0 ];

MaxTime = 5;
Dyn = @( t, y ) SecondOrderODE( y, PD_controller( t, y ) );

options = odeset('Events', @EvtFunc, 'RelTol', 1e-5, 'AbsTol', 1e-5 );
[tout,yout,te,ye,ie] = ode45(Dyn,[0,5],y0,options);

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
        value = [ ...
            q(3) + q(4) + q(5)/2 - pi/2             % backward
            q(3) + q(4) + q(5)/2 - 3*pi/2 ];        % forward
        
        if (t < 1e-3)
            value = nan(2,1);
        end
        isterminal = ones( 2, 1 );
        direction = [ -1; 1 ];
    end

    function s0 = Find_s0( y )
        th = y(3) + y(4) + y(5) / 2;
        s0  = (th - th0) / th_len * 1.05;
    end

    function [ q_des, dq_des ] = FindRefTraj( y )

        % desired q and dq
        [ q_des, ~ ] = EvalBezier( q_traj_des, 0 );
        dq_des = zeros(5,1);
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
        
    end

end