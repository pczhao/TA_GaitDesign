function [nlp] = swingfoot_clearance(nlp, bounds)
    % constraints for initial states
    DOF = 7;
    X  = SymVariable('x',[DOF,1]);
    swingFootHeight = SymFunction('swing_foot_height', nlp.Plant.EventFuncs.leftFootHeight.ConstrExpr, {X});
    addNodeConstraint(nlp, swingFootHeight, {'x'}, floor(nlp.NumNode/2), 0.1, Inf,'Linear');
end