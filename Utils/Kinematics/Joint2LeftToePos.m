function [ p_foot2 ] = Joint2LeftToePos( q, params )

L_fem = params.L_fem;
L_tib = params.L_tib;

q_torso = q(1);
q_fem1  = q(2) + q(1);
q_tib1  = q(3) + q(2) + q(1);
q_fem2  = q(4) + q(1);
q_tib2  = q(5) + q(4) + q(1);

p_knee1 = L_tib * [ -sin( q_tib1 ); -cos( q_tib1 ) ];
p_hip   = p_knee1 + L_fem * [ -sin( q_fem1 ); -cos( q_fem1 ) ];
p_knee2 = p_hip + L_fem * [ sin( q_fem2 ); cos( q_fem2 ) ];
p_foot2 = p_knee2 + L_tib * [ sin( q_tib2 ); cos( q_tib2 ) ];