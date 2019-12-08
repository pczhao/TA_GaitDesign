% Track a given speed sequence: proposed method

clear;
params = GenParams_RABBIT;

t_hist = 0;
y_hist = [];
P_hist = [];
dth0_hist = [];
info_hist = [];
speed_hist = [];

info_all = [];

q0 = [0,0.693374218246076,0.323279209010822,2.36287849262207,1.03743346468823,2.79486680505606,1.07713719714608].';
dq0 = [1.43439702458653,0.114754525860054,-0.0994226913800137,2.66689445269301,-1.03494098801163,-4.03811062635543,3.03124194921512].';
P0_high = [ 1.5, 0.4 ];   % initial guess for fmincon, high speed
speed_high = 1.65;

speed_low = 0.3;
P0_low = [ 0.3, 0.1 ];

ref_speed = [ repmat(speed_high, 5, 1); repmat( speed_low, 30, 1 )];
P0 = [ repmat( P0_high, 5, 1 ); repmat( P0_low, 15, 1 ) ];

% Simulate forward
P = [1.5150    0.4365];
for nsteps = 1 : 15
    preP = P;
    
    dth0 = dq0(3) + dq0(4) + dq0(5)/2;
    tic
    [Pout,warn] = online_opt_speedtracker(dth0,ref_speed(nsteps:nsteps+2),100,preP,P0(nsteps,:));
    toc
    if (isempty(Pout))
        Animate(t_hist, y_hist, []);
        
        figure;
        plot(1:nsteps-1, dth0_hist);
        
    end
    
    P = Pout(1:2);
    
    if isempty( P )
        err = -2;
        break;
    else
        [dummy] = FindBezTraj( P(1), P(2) );
        if isempty( dummy )
            err = -1;
            error(['err = ', num2str(err)]);
        end
        
        [~, ~, info, err] = Sim_RABBIT_walking( q0, dq0, P(1), P(2), 0 );
        if length(info) == 1
            t_hist_tmp = [ info(1).time ];
            y_hist_tmp = [ info(1).state ];
            error('length(info) = 1');
        else
            t_hist_tmp = [ info(1).time; info(2).time ];
            y_hist_tmp = [ info(1).state; info(2).state ];
            q0 = y_hist_tmp(end,1:7).';
            dq0 = y_hist_tmp(end,8:end).';
        end
    end
    
    
    t_hist = [ t_hist; t_hist_tmp + t_hist(end) ];
    y_hist = [ y_hist; y_hist_tmp ];
    P_hist = [ P_hist; Pout ];
    dth0_hist = [ dth0_hist; dth0 ];
    info_all = [ info_all; info(1:2) ];
    speed_hist = [speed_hist; ( info(2).state(end,1) - info(1).state(1,1) ) / info(2).time(end) ];
    
    if(err ~= 0) && (err ~= 2)
        break;
    end
end

t_hist(1) = [];
Animate(t_hist, y_hist);

%%
function Animate(t_hist, y_hist)
    anim = MyAnimator.MyFiveLinkAnimator( [], ...
        't', t_hist, ...
        'q', y_hist(:,1:7).', ...
        'text_flag', true );
    anim.pov = MyAnimator.AnimatorPointOfView.West;
    anim.Animate(true);
    anim.isLooping = false;
    anim.updateWorldPosition = true;
    anim.endTime = t_hist(end);
    conGUI = MyAnimator.AnimatorControls();
    conGUI.anim = anim;
end