function params = GenParams_RABBIT()

params = struct();

% gravity
params.g        = 9.8;

% link lengths
params.L_torso  = 0.63;
params.L_fem    = 0.4;
params.L_tib    = 0.4;

% link masses
params.M_torso  = 12;
params.M_fem    = 6.8;
params.M_tib    = 3.2;

% center of mass offsets
params.pZ_torso = 0.24;
params.pZ_fem   = 0.11;
params.pZ_tib   = 0.24;

% linear inertias (i.e., M*d)
params.MY_torso = 0;
params.MZ_torso = 12 * 0.24;
params.MZ_fem   = 6.8 * 0.11;
params.MZ_tib   = 3.2 * 0.24;

% CG moment of inertias (i.e. I)
params.I_torso  = 1.33;
params.I_fem    = 0.47;
params.I_tib    = 0.20;

% shifted moment of inertias (i.e. I + M * d^2)
params.XX_torso = 1.33 + 12 * 0.24^2;
params.XX_fem   = 0.47 + 6.8 * 0.11^2;
params.XX_tib   = 0.20 + 3.2 * 0.24^2;
