function [nlp] = final_cond(nlp, bounds)
    % constraints for initial states
    
    domain = nlp.Plant;
    x = domain.States.x;
    
    swingFootHeight = SymFunction('swing_foot_height', nlp.Plant.EventFuncs.leftFootHeight.ConstrExpr, {x});
    addNodeConstraint(nlp, swingFootHeight, {'x'}, 'last', 0, 0,'Linear');
    
end