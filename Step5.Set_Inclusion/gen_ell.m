% In this script we generate the ell function which corresponds to the
% constraint: \mathcal{W}_N(y_1(i), P(i)) \subseteq [0, +\infty)

clear, close all, clc;
load FRS_result_T3deg8.mat 
load ind_Pspace.mat        
load my_bnd.mat

P = msspoly('p',2);
y1 = msspoly('dth',2); % y1(i), y1(i+1 : i+N)
x = [y1(1);P;y1(2)];  %  y1(i), P, y1(i+1 : i+N)
x_ell = [y1(1);P]; %  y1(i),P

% change indeterminates of given msspolys into x and x_ell
w = subs(w,states,x); 
g_Pspace = subs(g_Pspace,x_Pspace,P); 

zero_y1 = (0-dth_mid)/dth_scale*2; % normalize number 0 into the scale of y1

% Domain of y1(i) and y1(i+1 : i+N): \mathcal{Y}_1 = [-0.8,0.8](normalized).
% Since y1(0) is assumed to be nonnegative, and our online MPC always 
% enforce y1(i)>=0 for all i>=1. Therefore we reset the domain of y1(i) to
% be [zero_y1, 0.8].
hy1 = [(y1(1)-zero_y1)*(0.8-y1(1));  
       (y1(2)+0.8)*(0.8-y1(2))]; % but allow y1(i+1 : i+N) to go negative

% Successful walking condition: 
%             0 <= y1(i+1 : i+N) = \mathcal{W}_N(y_1(i), P(i)).
% Here we add one more condition, which is 
%             P in \mathcal{P} \subseteq {P | g_Pspace>=1},
% because we always want our P to stay inside {P | g_Pspace>=1}.
% This additional condition is also equivalent as setting the domain of P.
f = [(y1(2) - zero_y1) * (0.8-y1(2)) ; 
     g_Pspace-1];      


% Key idea of set inclusion: f>=0 if w-1>=0, ell(P(i),y1(i))>=0, hy1>=0
% The SOS program we are going to solve:
% max       \int_{\mathcal{P}\times\mathcal{Y}_1} ell(P(i),y1(i))
% s.t.      f>=0 if w-1>=0, ell(P(i),y1(i))>=0, hy1>=0
%           1-ell(P(i),y1(i))>=0
% The second constraint is to make the whole program bounded.
% Notice, a polynomial being SOS is a sufficient condition for a polynomial 
% being nonnegative. 

% now ready for our sos program
d = 14; % degree of the polynomial
prog = spotsosprog;
prog = prog.withIndeterminate(x);
[prog,ell] = prog.newFreePoly(monomials(x_ell,0:d));
prog = prog.withSOS(1-ell);

% define aux s
[prog,s1_1] = prog.newFreePoly(monomials(x,0:d));
prog = prog.withSOS(s1_1);
[prog,s1_2] = prog.newFreePoly(monomials(x,0:d+2-10),2);
prog = prog.withSOS(s1_2(1));
prog = prog.withSOS(s1_2(2));
s1 = [s1_1;s1_2];
[prog,s2] = prog.newFreePoly(monomials(x,0:d+2-8),length(f));
for i = 1:length(f)
    prog = prog.withSOS(s2(i));
end
[prog,shy1] = prog.newFreePoly(monomials(x,0:d),2*length(f));
for i = 1:length(f)*2
    prog = prog.withSOS(shy1(i));
end
shy1 = reshape(shy1,length(f),2);

% impose set inclusion constraint
for i = 1:length(f)
    prog = prog.withSOS(s1(i)*f(i) - ell - s2(i)*(w-1) - shy1(i,:)*hy1);
end

% cost function
dl = @(p)moments(p,x_ell);
obj = -dl(ell);
spot_options = spot_sdp_default_options();
spot_options.verbose = 1;
sol = prog.minimize(obj, @spot_mosek_sos, spot_options);
ell = sol.eval(ell);
sol_state = sol.info.solverInfo.itr.solsta;
ell_state_info = 'y1(i), P(i)';

filename = strcat('ell_fun_deg',num2str(d),'.mat');
save(filename,'ell','x_ell','ell_state_info')

% check ell
temp = linspace(-1,1,31);
[xx,yy,zz] = ndgrid(temp,temp,linspace(-0.6143,0.6143,31));
xyz = [zz(:),xx(:),yy(:)]; % y1(i),p1(i),p2(i)
Pspaceval = double(msubs(g_Pspace,P,xyz(:,2:3)'));
xyz(Pspaceval<1,:) = [];
ell_val = double(msubs(ell,x_ell,xyz'));
figure,plot3(xyz(ell_val>=0,2),xyz(ell_val>=0,3),xyz(ell_val>=0,1),'r*'),hold on,grid on
xlabel('p1(i)'),ylabel('p2(i)'),zlabel('y1(i)')

    
%% moment function: integral a polynomial p(P(i),y1(i)) w.r.t. Lebesgue measure over \mathcal{P} \times \mathcal{Y}_1
function l = moments(p,x)
% p: polynomial
% x: y1(i), p1, p2
    pt =  [-0.8775   -0.7039; % \mathcal{P} is described by the convex hull of pt = [pt(1);pt(2);pt(3);pt(4);pt(5);pt(6)] 
     0.8881    0.7498;
   -0.8775   -0.6538;
   -0.1223    0.7498;
   -0.7346   -0.7039;
    0.8881    0.2986];


    % square
    l = subs(integral(p,x(2)),x(2),pt(2,1)) - subs(integral(p,x(2)),x(2),pt(1,1));
    l = subs(integral(l,x(3)),x(3),pt(2,2)) - subs(integral(l,x(3)),x(3),pt(1,2));
    
    % triagular 1
    s1 = (pt(4,2)-pt(3,2))/(pt(4,1)-pt(3,1)); % p2 = s1*(p1-pt(3,1))+pt(3,2)
    t1 = subs(integral(p,x(2)), x(2), (x(3)-pt(3,2))/s1+pt(3,1) ) - subs(integral(p,x(2)), x(2), pt(1,1));
    t1 = subs(integral(t1,x(3)),x(3),pt(4,2)) - subs(integral(t1,x(3)),x(3),pt(3,2));
    
    % triagular 2
    s2 = (pt(6,2)-pt(5,2))/(pt(6,1)-pt(5,1)); % p2 = s2*(p1-pt(5,1))+pt(5,2)
    t2 = subs(integral(p,x(2)),x(2),pt(2,1)) - subs(integral(p,x(2)),x(2),(x(3)-pt(5,2))/s2+pt(5,1));
    t2 = subs(integral(t2,x(3)),x(3),pt(6,2)) - subs(integral(t2,x(3)),x(3),pt(5,2));
    
    l = l - t1 - t2;
    
    % integral over y1(i)
    l = subs(integral(l,x(1)),x(1),1) - subs(integral(l,x(1)),x(1),-1);

end

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
