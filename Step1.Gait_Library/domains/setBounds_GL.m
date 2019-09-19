%% Set bounds for optimization problem

% Set Bounds
model_bounds = rabbit.getLimits();
model_bounds.states.x.lb = [-10, 0.6, -pi/6, 2, 0.5, 2, 0.5];
model_bounds.states.x.ub = [10, 0.8, pi/6, 5, 2, 5, 2];
model_bounds.states.dx.lb = -20*ones(1,7);
model_bounds.states.dx.ub = 20*ones(1,7);
model_bounds.states.ddx.lb = -100*ones(1,7);
model_bounds.states.ddx.ub = 100*ones(1,7);

mybounds = struct();

% Right Stance Vertices
for vtx = 1 : 1
    cur_bounds = model_bounds;
    
    if vtx == 1
        cur_bounds.time.t0.lb = 0;
        cur_bounds.time.t0.ub = 0;
        cur_bounds.time.t0.x0 = 0;
    else
        cur_bounds.time.t0.lb = 0.25 * (vtx-1);
        cur_bounds.time.t0.ub = 0.75 * (vtx-1);
        cur_bounds.time.t0.x0 = 0.5 * (vtx-1);
    end

    cur_bounds.time.tf.lb = 0.25 * vtx;
    cur_bounds.time.tf.ub = 0.75 * vtx;
    cur_bounds.time.tf.x0 = 0.5 * vtx;

    cur_bounds.time.duration.lb = 0.25;
    cur_bounds.time.duration.ub = 0.75;
    cur_bounds.time.duration.x0 = 0.75;
    
    cur_bounds.inputs.ConstraintWrench.fRightToe.lb = -1000;
    cur_bounds.inputs.ConstraintWrench.fRightToe.ub = 1000;
    cur_bounds.inputs.ConstraintWrench.fRightToe.x0 = 100;

    cur_bounds.inputs.Control.u.lb = -100*ones(4,1);
    cur_bounds.inputs.Control.u.ub = 100*ones(4,1);
    cur_bounds.inputs.Control.u.x0 = zeros(4,1);

    cur_bounds.params.pRightToe.lb = [0, 0, 0];
    cur_bounds.params.pRightToe.ub = [10, 0, 0];
    cur_bounds.params.pRightToe.x0 = zeros(3,1);

    cur_bounds.params.atime.lb = -10*ones(6*4,1);
    cur_bounds.params.atime.ub = 10*ones(6*4,1);
    cur_bounds.params.atime.x0 = zeros(6*4,1);

    cur_bounds.params.ptime.lb = [cur_bounds.time.tf.lb, cur_bounds.time.t0.lb];
    cur_bounds.params.ptime.ub = [cur_bounds.time.tf.ub, cur_bounds.time.t0.ub];
    cur_bounds.params.ptime.x0 = [cur_bounds.time.t0.x0, cur_bounds.time.tf.x0];

    cur_bounds.time.kp = 100;
    cur_bounds.time.kd = 20;
    
    mybounds.(['Stance_Vtx',num2str(vtx)]) = cur_bounds;
end

% Right Impact
mybounds.RightImpact = model_bounds;
