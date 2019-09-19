function stance_leg_angle(nlp)
    
    domain = nlp.Plant;
    x = domain.States.x;
    
    stance_leg_angle = x(3) + x(4) + x(5)/2;
    
    stance_leg_angle_fun = SymFunction( ['sla_', domain.Name], stance_leg_angle, {x} );
    addNodeConstraint( nlp, stance_leg_angle_fun, {'x'}, 'all', 3*pi/4, 5*pi/4, 'Linear' );
    
    stance_leg_angle_fun2 = SymFunction( ['sla2_', domain.Name], stance_leg_angle, {x} );
%     addNodeConstraint( nlp, stance_leg_angle_fun, {'x'}, 'first', 3*pi/4, pi - 0.1, 'Linear' );
    addNodeConstraint( nlp, stance_leg_angle_fun2, {'x'}, 'last', pi + 0.1, 5*pi/4, 'Linear' );

end