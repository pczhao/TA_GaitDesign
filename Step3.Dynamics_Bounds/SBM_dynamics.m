clear, close all, clc;

% define states & constant
syms p2 y1 real   
g = 9.8;
l = 0.8;
beta = acos((2*l^2 - p2^2) / (2*l^2));
cos_half_beta = sqrt((4*l^2-p2^2) / (4*l^2));

temp = 0.5*(l * y1)^2 + g*(l - l*cos_half_beta);
v1 = sqrt(2 * temp);
v1_p = v1 * cos(beta);
flag = 0.5*v1_p^2 - g*l*(1-cos_half_beta);

%% case 1 (flag>0): SBM can reach the next mids-tance and thus y1_plus > 0
temp = 0.5*v1_p^2 - g*(l - l * cos_half_beta);
v2 = sqrt(temp * 2);
y1_plus_pos = v2/l;
y2_pos = pi - beta/2;
y3_pos = pi - beta/2;
y4_pos = pi + beta/2;


%% case 2 (flag<=0): SBM cannot reach the next mid-stance and thus y1_plus < 0
temp = 0.5*v1_p^2/g/l + cos_half_beta;
y1_plus_neg = -sqrt(2*g*l*(1 - temp)) / l;
y2_neg = pi - beta/2;
y3_neg = -inf; 
y4_neg = inf;




%% visualize the dynamics 
p = linspace(0,0.8,101);
th = linspace(0,3.7,101);
[xx,yy] = ndgrid(p,th);
xx = xx(:);
yy = yy(:);
xxyy = [xx,yy];
ind_pos = find(double(subs(flag,{p2,y1},{xx,yy})) > 0);
ind_neg = find(double(subs(flag,{p2,y1},{xx,yy})) <= 0);

% y1
y1_plus_val = [double(subs(y1_plus_pos,{p2,y1},{xx(ind_pos),yy(ind_pos)}));
               double(subs(y1_plus_neg,{p2,y1},{xx(ind_neg),yy(ind_neg)}))];
figure(1),
plot3(xx(ind_pos),yy(ind_pos),y1_plus_val(1:length(ind_pos)), 'b*'),hold on;
plot3(xx(ind_neg),yy(ind_neg),y1_plus_val(1+length(ind_pos):end), 'r*')
xlabel('P_2'),ylabel('y_1(i)'),zlabel('y_1(i+1)')

% y2
 
y2_val = [double(subs(y2_pos,{p2,y1},{xx(ind_pos),yy(ind_pos)}));
          double(subs(y2_neg,{p2,y1},{xx(ind_neg),yy(ind_neg)}))];
figure(2),
plot3(xx(ind_pos),yy(ind_pos),y2_val(1:length(ind_pos)), 'b*'),hold on;
plot3(xx(ind_neg),yy(ind_neg),y2_val(1+length(ind_pos):end), 'r*')
xlabel('P_2'),ylabel('y_1(i)'),zlabel('y_2(i)')

% y3

y3_val = [double(subs(y3_pos,{p2,y1},{xx(ind_pos),yy(ind_pos)}));
          double(subs(y3_neg,{p2,y1},{xx(ind_neg),yy(ind_neg)}))];
figure(3),
plot3(xx(ind_pos),yy(ind_pos),y3_val(1:length(ind_pos)), 'b*'),hold on;
% plot3(xx(ind_neg),yy(ind_neg),y3_val(1+length(ind_pos):end), 'r*') % -inf
xlabel('P_2'),ylabel('y_1(i)'),zlabel('y_3(i)')


% y4
y4_val = [double(subs(y4_pos,{p2,y1},{xx(ind_pos),yy(ind_pos)}));
          double(subs(y4_neg,{p2,y1},{xx(ind_neg),yy(ind_neg)}))];
figure(4),
plot3(xx(ind_pos),yy(ind_pos),y4_val(1:length(ind_pos)), 'b*'),hold on;
% plot3(xx(ind_neg),yy(ind_neg),y4_val(1+length(ind_pos):end), 'r*') % inf
xlabel('P_2'),ylabel('y_1(i)'),zlabel('y_4(i)')

%% approximate the dynamics
% Since we are applying polynomial optimization in this work, we then unify
% the two cases of the dynamics of y1 using polynomial approximation. We
% only unify the dynamics of y1 because only y1 has dynamics in SBM, and
% y2~y4 can all be seen as functions of y1 and P. Furthermore, later in the
% online MPC optimization, our first priority is always to ensure y1 being
% nonnegative, therefore we only need to consider case 1 for y2~y4.

y1_mss = msspoly('y',1);
P_mss = msspoly('p',2);

% y1
mydata = [yy(ind_pos),xx(ind_pos),y1_plus_val(1:length(ind_pos));
          yy(ind_neg),xx(ind_neg),y1_plus_val(1+length(ind_pos):end)]; % y1(i), P2(i), y1(i+1)
f_y1hat = polyfitn(mydata(:,1:2),mydata(:,3),4);
f_y1hat = recomp([y1_mss; P_mss(2)], f_y1hat.ModelTerms, f_y1hat.Coefficients);
% f_y1hat_val = double(msubs(f_y1hat,[y1_mss; P_mss(2)],mydata(:,1:2)'));
% figure(1), hold on, plot3(mydata(:,2),mydata(:,1),f_y1hat_val,'k*');

% y2 ~ y4
dbeta = diff(beta,p2);
d2beta = diff(dbeta,p2);
beta_mss = double(subs(beta,p2,0.4)) + double(subs(dbeta,p2,0.4))*(P_mss(2)-0.4) + ...
           double(0.5*subs(d2beta,p2,0.4))*(P_mss(2)-0.4)^2;
f_y2hat = pi - beta_mss/2;
f_y3hat = pi - beta_mss/2;
f_y4hat = pi + beta_mss/2;

f_yihat = [f_y1hat; f_y2hat; f_y3hat; f_y4hat];
xf_yihat = [y1_mss; P_mss];
info_f_yihat = 'y1(i), P2. [Unscaled]';

save SBM_model_unscaled f_y1hat f_y2hat f_y3hat f_y4hat f_yihat xf_yihat info_f_yihat











