% In this script we generate ell^y3_\zeta and ell^y4_\zeta, which
% correspond to the constraints: y3 > pi/2 and y4 < 3pi/2.
% In our paper we said we compute ell^{y3}_\zeta and ell^{y4}_\zeta for all 
% \zeta = 1,2,...,N-1, so that later in the MPC part the readers know which 
% step (\zeta) the constraints are added on. 
% However, it's not hard to see all the ell^{y2}_\zeta can be the same for
% all \zeta = 1,2,...,N-1 as long as inequality (30)~(31) holds.

clear,close all,clc;
load SBM_model_scaled.mat
load dynamics_error_bound.mat
load my_bnd.mat
load ind_Pspace.mat

P = msspoly('p',2);    % P
y1 = msspoly('dth',1); % y1
x = [y1; P];
x_ell_y3 = P;
x_ell_y4 = P;

% change indeterminates of given msspolys into x and x_ell
f_y3hat = subs(f_y3hat,xf_yihat,x);
B3_low = subs(B3_low,xB3_low,x);
f_y4hat = subs(f_y4hat,xf_yihat,x);
B4_upp = subs(B4_upp,xB4_upp,x);
g_Pspace = subs(g_Pspace,x_Pspace,P); 

% set constant number
zero_y1 = (0-dth_mid)/dth_scale*2;
halfpi_y3y4 = (pi/2-th_mid)/th_scale*2; % normalize number pi/2 into the scale of y3 and y4
half3pi_y3y4 = (3*pi/2-th_mid)/th_scale*2; % normalize number 3pi/2 into the scale of y3 and y4
epsilon = 0.001;

% Domain of y1(i): \mathcal{Y}_1 = [-0.8,0.8] (normalized).
% Since y1(0) is assumed to be nonnegative, and our online MPC always 
% enforce y1(i)>=0 for all i>=1. Therefore we reset the domain of y1(i) to
% be [zero_y1, 0.8].
hy1 = (y1-zero_y1)*(0.8-y1);

% Successful walking conditions: 
%       f_{\hat y_3}(y1,P) + \underline{B}_3(y1,P) > pi/2 + epsilon, \forall y1>=0
%       f_{\hat y_4}(y1,P) + \overline{B}_4(y1,P) < 3pi/2 - epsilon, \forall y1>=0
% Here we add one more condition, which is 
%             P in \mathcal{P} \subseteq {P | g_Pspace>=1},
% because we always want our P to stay inside {P | g_Pspace>=1}.
% This additional condition is also equivalent as setting the domain of P.
f_y3 = [f_y3hat+B3_low-halfpi_y3y4-epsilon;
        g_Pspace-1];
f_y4 = [half3pi_y3y4-epsilon-f_y3hat-B4_upp;
        g_Pspace-1];

% Key idea of set inclusion: f_y3/y4>=0 if y1>=zero_y1, ell_y3/y4(P)>=0, hy1>=0
% The SOS program we are going to solve:
% max       \int_{\mathcal P} ell_y3/y4(P)
% s.t.      f_y3/y4>=0 if y1>=zero_y1, ell_y3/y4(P)>=0, hy1>=0
%           1-ell_y3/y4(P)>=0
% The second constraint is to make the whole program bounded.
% Notice, a polynomial being SOS is a sufficient condition for a polynomial 
% being nonnegative. 


%% compute ell_y3
d = 12;
prog_y3 = spotsosprog;
prog_y3 = prog_y3.withIndeterminate(x);
[prog_y3,ell_y3] = prog_y3.newFreePoly(monomials(x_ell_y3,0:d));
prog_y3 = prog_y3.withSOS(1-ell_y3);

% define aux s
[prog_y3,s1_y3] = prog_y3.newFreePoly(monomials(x,0:d-10),length(f_y3));
[prog_y3,s2_y3] = prog_y3.newFreePoly(monomials(x,0:d),length(f_y3));
[prog_y3,shy1_y3] = prog_y3.newFreePoly(monomials(x,0:d-2),length(f_y3));
for i = 1:length(f_y3)
    prog_y3 = prog_y3.withSOS(s1_y3(i));
    prog_y3 = prog_y3.withSOS(s2_y3(i));
    prog_y3 = prog_y3.withSOS(shy1_y3(i));
end


% impose set inclusion constraint
for i = 1:length(f_y3)
    prog_y3 = prog_y3.withSOS(s1_y3(i)*f_y3(i) - s2_y3(i)*(y1-zero_y1) - ell_y3 - shy1_y3(i)*hy1);
end

% cost function
dl = @(p)moments(p,x_ell_y3);
obj_y3 = -dl(ell_y3);   
spot_options = spot_sdp_default_options();
spot_options.verbose = 1;
sol = prog_y3.minimize(obj_y3, @spot_mosek_sos, spot_options);
ell_y3 = sol.eval(ell_y3);
sol_y3_state = sol.info.solverInfo.itr.solsta;
ell_y3_state_info = 'P';

% check ell_y3
temp = linspace(-1,1,31);
[xx,yy] = ndgrid(temp,temp);
xy = [xx(:),yy(:)];
Pspace_val = double(msubs(g_Pspace,P,xy'));
ell_y3_val = double(msubs(ell_y3,P,xy'));
% figure,
% plot(xy(Pspace_val>=1,1),xy(Pspace_val>=1,2),'b*'),hold on
% plot(xy(ell_y3_val>=0,1),xy(ell_y3_val>=0,2),'ro')


%% compute ell_y4
d = 12;
prog_y4 = spotsosprog;
prog_y4 = prog_y4.withIndeterminate(x);
[prog_y4,ell_y4] = prog_y4.newFreePoly(monomials(x_ell_y4,0:d));
prog_y4 = prog_y4.withSOS(1-ell_y4);

% define aux s
[prog_y4,s1_y4] = prog_y4.newFreePoly(monomials(x,0:d-10),length(f_y4));
[prog_y4,s2_y4] = prog_y4.newFreePoly(monomials(x,0:d),length(f_y4));
[prog_y4,shy1_y4] = prog_y4.newFreePoly(monomials(x,0:d-2),length(f_y4));
for i = 1:length(f_y4)
    prog_y4 = prog_y4.withSOS(s1_y4(i));
    prog_y4 = prog_y4.withSOS(s2_y4(i));
    prog_y4 = prog_y4.withSOS(shy1_y4(i));
end


% impose set inclusion constraint
for i = 1:length(f_y4)
    prog_y4 = prog_y4.withSOS(s1_y4(i)*f_y4(i) - s2_y4(i)*(y1-zero_y1) - ell_y4 - shy1_y4(i)*hy1);
end

% cost function
dl = @(p)moments(p,x_ell_y4);
obj_y4 = -dl(ell_y4);   
spot_options = spot_sdp_default_options();
spot_options.verbose = 1;
sol = prog_y4.minimize(obj_y4, @spot_mosek_sos, spot_options);
ell_y4 = sol.eval(ell_y4);
sol_y4_state = sol.info.solverInfo.itr.solsta;
ell_y4_state_info = 'P';

% check ell_y3
temp = linspace(-1,1,31);
[xx,yy] = ndgrid(temp,temp);
xy = [xx(:),yy(:)];
Pspace_val = double(msubs(g_Pspace,P,xy'));
ell_y4_val = double(msubs(ell_y4,P,xy'));
% figure,
% plot(xy(Pspace_val>=1,1),xy(Pspace_val>=1,2),'b*'),hold on
% plot(xy(ell_y4_val>=0,1),xy(ell_y4_val>=0,2),'ro')

ell_y3y4_state_info = 'P';

%% save file
filename = strcat('ell_y3y4_fun_deg',num2str(d),'.mat');
save(filename, 'ell_y3','ell_y4','x_ell_y3','x_ell_y4','ell_y3y4_state_info')


%% moment function: integral a polynomial p(P(i)) w.r.t. Lebesgue measure over \mathcal{P}
function l = moments(p,x)
% p: polynomial
% x: p1, p2
    pt =  [-0.8775   -0.7039; % \mathcal{P} is described by the convex hull of pt = [pt(1);pt(2);pt(3);pt(4);pt(5);pt(6)] 
     0.8881    0.7498;
   -0.8775   -0.6538;
   -0.1223    0.7498;
   -0.7346   -0.7039;
    0.8881    0.2986];


    % square
    l = subs(integral(p,x(1)),x(1),pt(2,1)) - subs(integral(p,x(1)),x(1),pt(1,1));
    l = subs(integral(l,x(2)),x(2),pt(2,2)) - subs(integral(l,x(2)),x(2),pt(1,2));
    
    % triagular 1
    s1 = (pt(4,2)-pt(3,2))/(pt(4,1)-pt(3,1)); % p2 = s1*(p1-pt(3,1))+pt(3,2)
    t1 = subs(integral(p,x(1)), x(1), (x(2)-pt(3,2))/s1+pt(3,1) ) - subs(integral(p,x(1)), x(1), pt(1,1));
    t1 = subs(integral(t1,x(2)),x(2),pt(4,2)) - subs(integral(t1,x(2)),x(2),pt(3,2));
    
    % triagular 2
    s2 = (pt(6,2)-pt(5,2))/(pt(6,1)-pt(5,1)); % p2 = s2*(p1-pt(5,1))+pt(5,2)
    t2 = subs(integral(p,x(1)),x(1),pt(2,1)) - subs(integral(p,x(1)),x(1),(x(2)-pt(5,2))/s2+pt(5,1));
    t2 = subs(integral(t2,x(2)),x(2),pt(6,2)) - subs(integral(t2,x(2)),x(2),pt(5,2));
    
    l = l - t1 - t2;
    
end

