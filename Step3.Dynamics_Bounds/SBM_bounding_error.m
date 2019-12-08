clear, close all, clc;
load my_bnd.mat

%% scale the dynamics first

load SBM_model_unscaled.mat
xf_yihat_scaled = xf_yihat/2.*[dth_scale; p_scale'] + [dth_mid; p_mid'];
f_y1hat = subs(f_y1hat, xf_yihat, xf_yihat_scaled);
f_y1hat = (f_y1hat - dth_mid)*2/dth_scale;
f_y2hat = subs(f_y2hat, xf_yihat, xf_yihat_scaled);
f_y2hat = (f_y2hat - th_mid)*2/th_scale;
f_y3hat = subs(f_y3hat, xf_yihat, xf_yihat_scaled);
f_y3hat = (f_y3hat - th_mid)*2/th_scale;
f_y4hat = subs(f_y4hat, xf_yihat, xf_yihat_scaled);
f_y4hat = (f_y4hat - th_mid)*2/th_scale;
f_yihat = [f_y1hat; f_y2hat; f_y3hat; f_y4hat];
info_f_yihat = 'y1(i), P(i). [Scaled]';
save SBM_model_scaled f_y1hat f_y2hat f_y3hat f_y4hat f_yihat xf_yihat info_f_yihat


%% load data, scaling parameters, SBM model
load Sim_results.mat
temp = result;

load Sim_results_supp.mat
load my_bnd.mat
load SBM_model_scaled.mat


%% bounding error dynamics of y1
mydata = []; % index,err,y1(i),P(i),y1(i+1)
for i = 1:length(temp)
    pt = temp(i);
    if isempty(pt.dth_plus)
        continue
    end
    mydata = [mydata;i,pt.err,pt.dth_minus,pt.k_plus,pt.dth_plus];
end
rescale = @(q)bsxfun(@times,bsxfun(@minus,q,[dth_mid,p_mid,dth_mid]),[dth_scale,p_scale,dth_scale].^(-1)*2); 
mydata(:,3:6) = rescale(mydata(:,3:6));
num_data = size(mydata,1);
y1p_SBM_val = double(msubs(f_y1hat, xf_yihat, mydata(:,3:5)'));

val = [mydata(:,3:6), y1p_SBM_val(:), mydata(:,6)-y1p_SBM_val(:)]; % dth(i), P(i), dth_real(i+1), dth_SBM(i+1),diff
val = sortrows(val,4);
% figure
% subplot(2,1,1)
% plot(1:num_data,val(:,4)),hold on,grid on;
% plot(1:num_data,val(:,5)),xlabel('index'),ylabel('y1(i+1)'),legend('real','SBM');
% subplot(2,1,2)
% plot(1:num_data,val(:,6)),grid on,xlabel('index'),ylabel('diff')

degree_B1_upplow = 8;
temp_val = max(abs(val(:,6)));
[B1_upp,xB1_upp,~] = generate_indicator_fun_v2(val(:,1:3),val(:,6)/temp_val,ones(3,1),-ones(3,1),degree_B1_upplow,1,-0.3);
[B1_low,xB1_low,~] = generate_indicator_fun_v2(val(:,1:3),val(:,6)/temp_val,ones(3,1),-ones(3,1),degree_B1_upplow,0,0.6);
B1_upp = B1_upp * temp_val;
B1_low = B1_low * temp_val;
% val = [val, double(msubs(B1_upp,xB1_upp,val(:,1:3)'))' + val(:,5),double(msubs(B1_low,xB1_low,val(:,1:3)'))' + val(:,5)];
% figure, plot(1:num_data,val(:,4)), hold on
% plot(1:num_data,val(:,7)),plot(1:num_data,val(:,8)),legend('real','upp','low'),grid on
B1_state_info = 'y1(i), P(i)';


%% bounding error dynamics of y2
mydata = []; % index,err,P(i-1),y1(i),P(i),y2(i)
for i = 1:length(temp)
    pt = temp(i);
    if isempty(pt.phi)
        continue
    end
    mydata = [mydata; i,pt.err,pt.k_minus,pt.dth_minus,pt.k_plus,pt.phi];
end
for i = 1:length(res_supp)
    pt = res_supp(i);
    mydata = [mydata; i+8000,pt.err,pt.k_minus,pt.dth_minus,pt.k_plus,pt.y2];
end
rescale = @(q)bsxfun(@times,bsxfun(@minus,q,[p_mid,dth_mid,p_mid,th_mid]),[p_scale,dth_scale,p_scale,th_scale].^(-1)*2); 
mydata(:,3:8) = rescale(mydata(:,3:8));
num_data = size(mydata,1);
y2_SBM_val = double(msubs(f_y2hat, xf_yihat, mydata(:,5:7)'));

val = [mydata(:,3:8), y2_SBM_val(:), mydata(:,8) - y2_SBM_val(:)]; % P(i-1),y1(i),P(i),y2(i)_real,y2(i)_SBM,diff 
val = sortrows(val,6);
% figure,
% subplot(2,1,1)
% plot(1:num_data,val(:,6)),hold on,grid on;
% plot(1:num_data,val(:,7)),xlabel('index'),ylabel('y2'),legend('real','SBM');
% subplot(2,1,2)
% plot(1:num_data,val(:,8)),grid on,xlabel('index'),ylabel('diff')

degree_B2_upp = 8;
temp_val = max(abs(val(:,8)));
[B2_upp,xB2_upp,~] = generate_indicator_fun_v2(val(:,[2,3,5]),val(:,8)/temp_val,ones(3,1),-ones(3,1),degree_B2_upp,1,-0.3);
B2_upp = B2_upp*temp_val;
% val = [val, double(msubs(B2_upp,xB2_upp,val(:,[2,3,5])'))' + val(:,7)];
% figure, plot(1:num_data,val(:,6)), hold on
% plot(1:num_data,val(:,9)), grid on, legend('real','upp')
B2_state_info = 'P2(i-1),y1(i),P2(i)';


%% bounding error dynamics of y3 & y4
mydata = []; % index,err,y1(i),P(i),y3(i),y4(i)
for i = 1:length(temp)
    pt = temp(i);
    if isempty(pt.y3) || isnan(pt.y3)
        continue
    end
    mydata = [mydata; i,pt.err,pt.dth_minus,pt.k_plus,pt.y3,pt.y4];
end
rescale = @(q)bsxfun(@times,bsxfun(@minus,q,[dth_mid,p_mid,th_mid,th_mid]),[dth_scale,p_scale,th_scale,th_scale].^(-1)*2); 
mydata(:,3:7) = rescale(mydata(:,3:7));
num_data = size(mydata,1);
y3_SBM_val = double(msubs(f_y3hat, xf_yihat, mydata(:,3:5)'));
y4_SBM_val = double(msubs(f_y4hat, xf_yihat, mydata(:,3:5)'));

% y3
val = [mydata(:,3:6), y3_SBM_val(:), mydata(:,6)-y3_SBM_val(:)]; % dth(i), P(i), y3(i)_real, y3(i)_SBM, diff3
val = sortrows(val,4);
% figure,
% subplot(2,1,1)
% plot(1:num_data,val(:,4)),hold on,grid on;
% plot(1:num_data,val(:,5)),xlabel('index'),ylabel('y3'),legend('real','SBM');
% subplot(2,1,2)
% plot(1:num_data,val(:,6)),grid on,xlabel('index'),ylabel('diff')

degree_B3_low = 8;
temp_val = max(abs(val(:,6)));
[B3_low,xB3_low,~] = generate_indicator_fun_v2(val(:,1:3),val(:,6)/temp_val,ones(3,1),-ones(3,1),degree_B3_low,0,0.1);
B3_low = B3_low*temp_val;
% val = [val, double(msubs(B3_low,xB3_low,val(:,1:3)'))' + val(:,5)];
% figure, plot(1:num_data,val(:,4)), hold on
% plot(1:num_data,val(:,7)), grid on, legend('real','low')
B3_state_info = 'y1(i),P(i)';

% y4
val = [mydata(:,[3:5,7]), y4_SBM_val(:), mydata(:,7)-y4_SBM_val(:)]; % dth(i), P(i), y4(i)_real, y4(i)_SBM, diff4
val = sortrows(val,4);
% figure,
% subplot(2,1,1)
% plot(1:num_data,val(:,4)),hold on,grid on;
% plot(1:num_data,val(:,5)),xlabel('index'),ylabel('y4'),legend('real','SBM');
% subplot(2,1,2)
% plot(1:num_data,val(:,6)),grid on,xlabel('index'),ylabel('diff')

degree_B4_upp = 8;
temp_val = max(abs(val(:,6)));
[B4_upp,xB4_upp,~] = generate_indicator_fun_v2(val(:,1:3),val(:,6)/temp_val,ones(3,1),-ones(3,1),degree_B4_upp,1,0);
B4_upp = B4_upp*temp_val;
% val = [val, double(msubs(B4_upp,xB4_upp,val(:,1:3)'))' + val(:,5)];
% figure, plot(1:num_data,val(:,4)), hold on
% plot(1:num_data,val(:,7)), grid on, legend('real','low')
B4_state_info = 'y1(i),P(i)';

save dynamics_error_bound B1_low B1_upp xB1_low xB1_upp degree_B1_upplow B1_state_info...
     B2_upp xB2_upp degree_B2_upp B2_state_info...
     B3_low xB3_low degree_B3_low B3_state_info...
     B4_upp xB4_upp degree_B4_upp B4_state_info








