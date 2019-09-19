function swing_leg_angle(nlp)
    
    domain = nlp.Plant;
    x = domain.States.x;
    
    stance_leg_angle = x(3) + x(6) + x(7)/2;
    
    stance_leg_angle_fun = SymFunction( ['sla_', domain.Name], stance_leg_angle, {x} );
    addNodeConstraint( nlp, stance_leg_angle_fun, {'x'}, 'all', 4*pi/5, 6*pi/5, 'Linear' );

end