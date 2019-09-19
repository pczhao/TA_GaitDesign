clear all,close all,clc
% Our walking controller behaves sensitive around the boundary of
% \mathcal{P} X \mathcal{Y}_1, thus we need to shrink the space a little
% bit.

%% wrap data
load results_aux.mat
temp = result_aux;

data = []; % index,0,dth-,P+,dth+
for i = 1:length(temp)
    pt = temp(i);
    
    data = [data;i,0,pt.dth_minus,pt.k_plus];
    
end

%% set scaling & mss_states
load my_bnd
rescale = @(q)bsxfun(@times,bsxfun(@minus,q,[dth_mid,p_mid]),[dth_scale,p_scale].^(-1)*2); 
data(:,3:5) = rescale(data(:,3:5));


figure,
plot3(data(:,4),data(:,5),data(:,3),'k*'),hold on

degree_exclude_aux = 20;
[exclude_aux,xexclude_aux,~] = generate_indicator_fun_v2(data(:,3:5),1,ones(3,1),-ones(3,1),degree_exclude_aux,1,-1);
exclude_aux_states_info = 'y1(i), P(i)';

% check result
z = linspace(-1,1,31);
[x,y,z] = ndgrid(z,z,z);
pt = [x(:),y(:),z(:)];
val = double(msubs(exclude_aux,xexclude_aux,pt'));
plot3(pt(val>=1,2),pt(val>=1,3),pt(val>=1,1),'r.')

save exclude_aux exclude_aux xexclude_aux degree_exclude_aux exclude_aux_states_info



