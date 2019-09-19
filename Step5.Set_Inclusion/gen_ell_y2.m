% In this script we generate the ell^{y2}_\zeta function which corresponds to the
% constraint: f_{\hat y2}(P') + \overline{B}_2(P,y1,P') <= pi
% In our paper we said we compute ell^{y2}_\zeta for all \zeta = 1,2,...,N-1,
% so that later in the MPC part the readers know which step (\zeta) the
% constraints are added on. 
% However, it's not hard to see all the ell^{y2}_\zeta can be the same for
% all \zeta = 1,2,...,N-1 as long as inequality (29) holds.

clear,close all,clc;
load SBM_model_scaled.mat
load dynamics_error_bound.mat
load my_bnd.mat

P2 = msspoly('p',2);   % P2,P2'
y1 = msspoly('dth',1); % y1
P2_minus = P2(1);
P2_plus = P2(2);
x = [P2_minus; y1; P2_plus];
x_ell_y2 = [P2_minus; P2_plus];

% change indeterminates of given msspolys into x and x_ell
f_y2hat = subs(f_y2hat,xf_yihat(3),P2_plus);
B2_upp = subs(B2_upp,xB2_upp,x);

zero_y1 = (0-dth_mid)/dth_scale*2; % normalize number 0 into the scale of y1
pi_y2 = (pi-th_mid)/th_scale*2; % normalize number pi into the scale of y2

% Domain of y1(i): \mathcal{Y}_1 = [-0.8,0.8] (normalized).
% Since y1(0) is assumed to be nonnegative, and our online MPC always 
% enforce y1(i)>=0 for all i>=1. Therefore we reset the domain of y1(i) to
% be [zero_y1, 0.8].
hy1 = (y1-zero_y1)*(0.8-y1);

% Successful walking condition: 
%       f_{\hat y_2}(P2') + \overline{B}_2(P2,y1,P2') <= pi, \forall y1>=0 
% Notice that both f_{\hat y_2} and \overline{B}_2 are functions of gait
% length (P2, P2'), thus in this implementation we don't involve gait speed
% (P1). Therefore ell_y2 is a function of (P2, P2') rather than (P,P'). 
% And we we add two more conditions, which are 
%             both P2 and P2' in [-0.7039, 0.7498] (normalized),
% because we always want our P2 to stay inside the projection of 
% {P = (p1,p2) | g_Pspace>=1} on p2.
% The additional conditions are also equivalent as setting the domain of 
% P2 and P2'.
f = [pi_y2 - f_y2hat - B2_upp; 
     (P2_minus + 0.7039)*(0.7498 - P2_minus);
     (P2_plus + 0.7039)*(0.7498 - P2_plus)];      

% Key idea of set inclusion: f>=0 if y1>=zero_y1, ell_y2(P2,P2')>=0, hy1>=0
% The SOS program we are going to solve:
% max       \int_{[-0.7039, 0.7498]^2} ell_y2(P2,P2')
% s.t.      f>=0 if y1>=zero_y1, ell_y2(P2,P2')>=0, hy1>=0
%           1-ell_y2(P2,P2')>=0
% The second constraint is to make the whole program bounded.
% Notice, a polynomial being SOS is a sufficient condition for a polynomial 
% being nonnegative. 

d = 12;
prog = spotsosprog;
prog = prog.withIndeterminate(x);
[prog,ell_y2] = prog.newFreePoly(monomials(x_ell_y2,0:d));
prog = prog.withSOS(1-ell_y2);

% define aux s
[prog,s1] = prog.newFreePoly(monomials(x,0:d-10),length(f));
[prog,s2] = prog.newFreePoly(monomials(x,0:d),length(f));
[prog,shy1] = prog.newFreePoly(monomials(x,0:d-2),length(f));
for i = 1:length(f)
    prog = prog.withSOS(s1(i));
    prog = prog.withSOS(s2(i));
    prog = prog.withSOS(shy1(i));
end


% impose set inclusion constraint
for i = 1:length(f)
    prog = prog.withSOS(s1(i)*f(i) - s2(i)*(y1-zero_y1) - ell_y2 - shy1(i)*hy1);
end

% cost function
dl = boxMoments(x_ell_y2,-0.7039*[1;1],0.7498*[1;1]);
obj = -dl(ell_y2);
spot_options = spot_sdp_default_options();
spot_options.verbose = 1;
sol = prog.minimize(obj, @spot_mosek_sos, spot_options);
ell_y2 = sol.eval(ell_y2);
sol_y2_state = sol.info.solverInfo.itr.solsta;
ell_y2_state_info = 'P2-, P2+';

filename = strcat('ell_y2_fun_deg',num2str(d),'.mat');
save(filename,'ell_y2','x_ell_y2','ell_y2_state_info')

% check ell_y2
temp = linspace(-0.7039,0.7498,151);
[xx,yy] = ndgrid(temp,temp);
xy = [xx(:),yy(:)];
ell_y2_val = double(msubs(ell_y2,x_ell_y2,xy'));
figure, plot(xy(ell_y2_val>=0,1),xy(ell_y2_val>=0,2),'r*')
xlabel('p2-'),ylabel('p2+')



