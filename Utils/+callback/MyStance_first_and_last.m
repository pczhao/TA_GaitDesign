function MyStance_first_and_last(nlp, bounds, varargin)

    domain = nlp.Plant;

%     p = inputParser;
%     addParameter(p, 'LoadPath', '');
%     parse(p, varargin{:});
%     load_path = p.Results.LoadPath;
    load_path = '';
    % relative degree 2 outputs
%     domain.VirtualConstraints.time.imposeNLPConstraint(nlp, [bounds.time.kp, bounds.time.kd], [1,1], load_path);
    
%     % tau boundary [0,1]
%     T_name = nlp.OptVarTable.T(1).Name;
%     T  = SymVariable(lower(T_name),[nlp.OptVarTable.T(1).Dimension,1]);
%     p_name = nlp.OptVarTable.ptime(1).Name;
%     p  = SymVariable(lower(p_name),[nlp.OptVarTable.ptime(1).Dimension,1]);
%     tau_0 = SymFunction(['tau_0_',domain.Name], T(1) - p(2), {T,p});
%     tau_F = SymFunction(['tau_F_',domain.Name], T(2) - p(1), {T,p});
%     addNodeConstraint(nlp, tau_0, {T_name,p_name}, 'first', 0, 0, 'Linear');
%     addNodeConstraint(nlp, tau_F, {T_name,p_name}, 'last', 0, 0, 'Linear');
%     
%     % output boundary 
%     y_pos = domain.VirtualConstraints.time;
%     y_bound_idx = str_indices({'q1_right','q2_right','q1_left',...
%         'q2_left'},y_pos.OutputLabel);
%     
%     y_bound = y_pos.ActualOutput(y_bound_idx);
%     lb = [-2*pi,-2*pi,-2*pi,-2*pi]';
%     ub = [2*pi,2*pi,2*pi,2*pi]';
%     y_bound_fun = SymFunction(['output_boundary_',domain.Name], y_bound, {domain.States.x});
%     addNodeConstraint(nlp, y_bound_fun, {'x'}, 'all', lb, ub,'Linear');
    
    % Swing foot clearance
%     nlp = MyConstraints.swingfoot_clearance(nlp, bounds);
%     X  = SymVariable('x',[DOF,1]);
%     swingFootHeight = SymFunction('swing_foot_height', nlp.Plant.EventFuncs.leftFootHeight.ConstrExpr, {X});
%     addNodeConstraint(nlp, swingFootHeight, {'x'}, floor(nlp.NumNode/2), 0.1, Inf,'Linear');
    
    % Initial condition
    MyConstraints.init_cond(nlp, bounds);
    
    % swing foot should be in front of stance foot
%     MyConstraints.td_xfoot(nlp);
    MyConstraints.left_foot_pos(nlp);
    
    % Terminal condition
    MyConstraints.final_cond(nlp, bounds);
    
    % stance leg angle must be in [2pi/3, 4pi/3]
    MyConstraints.stance_leg_angle(nlp);
end