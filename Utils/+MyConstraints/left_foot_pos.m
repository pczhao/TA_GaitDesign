function left_foot_pos(nlp)
    
    domain = nlp.Plant;
    x = domain.States.x;
    
%     p_nsf = getCartesianPosition(domain, domain.ContactPoints.LeftToe);
%     p_sf = getCartesianPosition(domain, domain.ContactPoints.RightToe);
    
%     delta_x = p_sf\p_nsf;
%     tmpfunc = delta_x(1) - 0.1;
    x_sf = x(1) + 0.4 * sin(x(3) + x(4)) + 0.4 * sin(x(3) + x(4) + x(5));
    x_nsf = x(1) + 0.4 * sin(x(3) + x(6)) + 0.4 * sin(x(3) + x(6) + x(7));
    delta_x = x_nsf - x_sf;

%     delta_x = p_nsf(1) - p_sf(1) - 0.1;
    
    delta_x_fun = SymFunction(['delta_x_',domain.Name], delta_x, {x} );
    addNodeConstraint(nlp, delta_x_fun, {'x'}, 'last', 0.2, 1.4,'Nonlinear');

end