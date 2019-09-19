function td_xfoot(nlp)
    
    domain = nlp.Plant;
    x = domain.States.x;
    
    delta_q = x(6) - x(4);
    
    delta_q_fun = SymFunction(['delta_q_',domain.Name], delta_q, {x} );
    addNodeConstraint(nlp, delta_q_fun, {'x'}, 'last', 0, inf,'Linear');

end