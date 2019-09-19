% generate parameters for online MPC optimization

clear,close all,clc;

% cost function of MPC
load speed_fun.mat
f = speed;
f2 = speed^2;
X = x;
[x,p,M] = decomp(f);
[x2,p2,M2] = decomp(f2);
df = diff(f,X)';
df2 = diff(f2,X)';
[dx,dp,dM] = decomp(df);
[dx2,dp2,dM2] = decomp(df2);
para.speed.f.p = match_x(x,X,p);
para.speed.f.M = M;
para.speed.df.p = match_x(dx,X,dp);
para.speed.df.M = dM;
para.speed.f2.p = match_x(x2,X,p2);
para.speed.f2.M = M2;
para.speed.df2.p = match_x(dx2,X,dp2);
para.speed.df2.M = dM2;
para.speed.x = X;
para.speed.state_info = 'p1,p2';

% SBM dynamics
load SBM_model_scaled.mat
X = xf_yihat;
for i = 1:4
    f = f_yihat(i);
    [x,p,M] = decomp(f);
    df = diff(f,X(2:3))';
    [dx,dp,dM] = decomp(df);
    para.f_yihat(i).f.p = match_x(x,X,p);
    para.f_yihat(i).f.M = M;
    para.f_yihat(i).df.p = match_x(dx,X,dp);
    para.f_yihat(i).df.M = dM;
    para.f_yihat(i).x = X;
    para.f_yihat(i).state_info = info_f_yihat;
end

% dynamics bounding error
load dynamics_error_bound.mat
f = B2_upp;
X = xB2_upp;
[x,p,M] = decomp(f);
df = diff(f,X([1,3]))';
[dx,dp,dM] = decomp(df);
para.B2_upp.f.p = match_x(x,X,p);
para.B2_upp.f.M = M;
para.B2_upp.df.p = match_x(dx,X,dp);
para.B2_upp.df.M = dM;
para.B2_upp.x = X;
para.B2_upp.state_info = B2_state_info;

f = B3_low;
X = xB3_low;
[x,p,M] = decomp(f);
df = diff(f,X([2,3]))';
[dx,dp,dM] = decomp(df);
para.B3_low.f.p = match_x(x,X,p);
para.B3_low.f.M = M;
para.B3_low.df.p = match_x(dx,X,dp);
para.B3_low.df.M = dM;
para.B3_low.x = X;
para.B3_low.state_info = B3_state_info;

f = B4_upp;
X = xB4_upp;
[x,p,M] = decomp(f);
df = diff(f,X([2,3]))';
[dx,dp,dM] = decomp(df);
para.B4_upp.f.p = match_x(x,X,p);
para.B4_upp.f.M = M;
para.B4_upp.df.p = match_x(dx,X,dp);
para.B4_upp.df.M = dM;
para.B4_upp.x = X;
para.B4_upp.state_info = B4_state_info;


% ell function
load ell_fun_deg14.mat
f = ell;
X = x_ell;
[x,p,M] = decomp(f);
df = diff(f,X([2,3]))';
[dx,dp,dM] = decomp(df);
para.ell.f.p = match_x(x,X,p);
para.ell.f.M = M;
para.ell.df.p = match_x(dx,X,dp);
para.ell.df.M = dM;
para.ell.x = X;
para.ell.state_info = ell_state_info;

load ell_y2_fun_deg12.mat
f = ell_y2;
X = x_ell_y2;
[x,p,M] = decomp(f);
df = diff(f,X)';
[dx,dp,dM] = decomp(df);
para.ell_y2.f.p = match_x(x,X,p);
para.ell_y2.f.M = M;
para.ell_y2.df.p = match_x(dx,X,dp);
para.ell_y2.df.M = dM;
para.ell_y2.x = X;
para.ell_y2.state_info = ell_y2_state_info;

load ell_y3y4_fun_deg12.mat
f = ell_y3;
X = x_ell_y3;
[x,p,M] = decomp(f);
df = diff(f,X)';
[dx,dp,dM] = decomp(df);
para.ell_y3.f.p = match_x(x,X,p);
para.ell_y3.f.M = M;
para.ell_y3.df.p = match_x(dx,X,dp);
para.ell_y3.df.M = dM;
para.ell_y3.x = X;
para.ell_y3.state_info = ell_y3y4_state_info;
f = ell_y4;
X = x_ell_y4;
[x,p,M] = decomp(f);
df = diff(f,X)';
[dx,dp,dM] = decomp(df);
para.ell_y4.f.p = match_x(x,X,p);
para.ell_y4.f.M = M;
para.ell_y4.df.p = match_x(dx,X,dp);
para.ell_y4.df.M = dM;
para.ell_y4.x = X;
para.ell_y4.state_info = ell_y3y4_state_info;

% aux: shrink \mathcal{Y}_1 \times \mathcal{P}
load exclude_aux.mat
f = exclude_aux;
X = xexclude_aux;
[x,p,M] = decomp(f);
df = diff(f,X(2:3))';
[dx,dp,dM] = decomp(df);
para.exclude.f.p = match_x(x,X,p);
para.exclude.f.M = M;
para.exclude.df.p = match_x(dx,X,dp);
para.exclude.df.M = dM;
para.exclude.x = X;
para.exclude.state_info = exclude_aux_states_info;

% P' 
P = msspoly('p',2);
f = 0.1^2 - (P(1)-0.6)^2 - (P(2)-0.3)^2;
X = P;
[x,p,M] = decomp(f);
df = diff(f,X)';
[dx,dp,dM] = decomp(df);
para.Pprime.f.p = match_x(x,X,p);
para.Pprime.f.M = M;
para.Pprime.df.p = match_x(dx,X,dp);
para.Pprime.df.M = dM;
para.Pprime.x = X;
para.Pprime.state_info = 'p1,p2';


save online_para para









