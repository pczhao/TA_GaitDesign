function [nlp] = init_cond(nlp, bounds)
    % constraints for initial states
    
    domain = nlp.Plant;
    x = domain.States.x;
    dx = domain.States.dx;
    
    states = [x; dx];
    
    IC_fun = SymFunction(['IC_',domain.Name], states, {x, dx} );
    addNodeConstraint(nlp, IC_fun, {'x', 'dx'}, 'first', ...
        bounds.constrBounds.init_cond_lb, ...
        bounds.constrBounds.init_cond_ub, 'Linear');
    
end