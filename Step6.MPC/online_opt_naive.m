function P = online_opt_naive(y1,desire_speed,n,P0)
% This function tries tosolve  the online MPC optimization using the naive
% method in a speed tracking scenario. The optimization we are solving is:
%     min     n*(speed(i)-desire_speed(i))^2 + (speed(i+1)-desire_speed(i+1))^2 + (speed(2)-desire_speed(i+2))^2
%     s.t.    P(i), P(i+1), P(i+2) \in \mathcal{P}
%
% Input: y1           -- scalar. y1(i)
%        desire_speed -- N-by-1 vector, where N is the number of steps we
%                        predict in FRS. desired speed sequence in the next
%                        N steps.
%        n            -- scalar. weight parameter
%        P0           -- 2-by-1 vector. initial guess of P(i)
%Output: P            -- 2N-by-1 vector. [P(i);P(i+1);...;P(i+N-1)]

    load online_para
    load my_bnd.mat
    if nargin<4
        P0 = [-0.2,-0.2,0,0,0,0];
    else
        P0 = [(P0(1)-p_mid(1))*2/p_scale(1),(P0(2)-p_mid(2))*2/p_scale(2),0,0,0,0];
    end
    if y1<0
        error('y1(i) is negative!')
    end
    
    % normalize y1
    y1 = (y1-dth_mid)*2/dth_scale;
    
    fun = @(p)speedtrack(p,desire_speed,para,n);
    nonlcon = @(p)nlconstr_pd(p,y1,para);
    LB = [-0.8775   -0.7039];
    LB = [LB LB LB];
    UB = [0.8881    0.7498];
    UB = [UB UB UB];

    
    options = optimoptions('fmincon','SpecifyObjectiveGradient',true,...
                           'SpecifyConstraintGradient',true, 'MaxIterations', 1e4);
    [P,~,flag] = fmincon(fun,P0,[],[],[],[],LB,UB,nonlcon,options);
    if flag == -2
        P = [];
        return
    end
    
    % scale P back
    P(1) = P(1)/2*p_scale(1)+p_mid(1);
    P(2) = P(2)/2*p_scale(2)+p_mid(2);
    P(3) = P(3)/2*p_scale(1)+p_mid(1);
    P(4) = P(4)/2*p_scale(2)+p_mid(2);
    P(5) = P(5)/2*p_scale(1)+p_mid(1);
    P(6) = P(6)/2*p_scale(2)+p_mid(2);
    
end

function [f,g] = speedtrack(p,d,para,n)
   % f = N*(s1-d1)^2+(s2-d2)^2+(s3-d3)^2
    p = reshape(p,1,6);
    temp = p(1:2);
    temp = repmat(temp,size(para.speed.f.p,1),1);
    f1 = para.speed.f.M * prod(temp.^para.speed.f.p, 2);
    temp = p(3:4);
    temp = repmat(temp,size(para.speed.f.p,1),1);
    f2 = para.speed.f.M * prod(temp.^para.speed.f.p, 2);
    temp = p(5:6);
    temp = repmat(temp,size(para.speed.f.p,1),1);
    f3 = para.speed.f.M * prod(temp.^para.speed.f.p, 2);
    f = n*(f1-d(1))^2 + 1*(f2-d(2))^2 + 1*(f3-d(3))^2;
    
    if nargout>1
        temp = p(1:2);
        temp = repmat(temp,size(para.speed.df.p,1),1);
        g1 = 2*n*(f1-d(1))*[para.speed.df.M(1,:) * prod(temp.^para.speed.df.p, 2);
                            para.speed.df.M(2,:) * prod(temp.^para.speed.df.p, 2)];
        
        temp = p(3:4);
        temp = repmat(temp,size(para.speed.df.p,1),1);
        g2 = 2*1*(f2-d(2))*[para.speed.df.M(1,:) * prod(temp.^para.speed.df.p, 2);
                            para.speed.df.M(2,:) * prod(temp.^para.speed.df.p, 2)];
        
        temp = p(5:6);
        temp = repmat(temp,size(para.speed.df.p,1),1);
        g3 = 2*1*(f3-d(3))*[para.speed.df.M(1,:) * prod(temp.^para.speed.df.p, 2);
                            para.speed.df.M(2,:) * prod(temp.^para.speed.df.p, 2)];
        g = [g1;g2;g3];
    end
end


function [c,ceq,dc,dceq] = nlconstr_pd(p,y1,para)
    p = reshape(p,1,6);
    ceq = [];
    c = zeros(7,1);
    pt =  [-0.8775   -0.7039; % \mathcal{P} is described by the convex hull of pt = [pt(1);pt(2);pt(3);pt(4);pt(5);pt(6)] 
     0.8881    0.7498;
   -0.8775   -0.6538;
   -0.1223    0.7498;
   -0.7346   -0.7039;
    0.8881    0.2986];
 

    
    % p \in \mathcal{P}
    c(1) = p(2) - ( (pt(4,2)-pt(3,2))/(pt(4,1)-pt(3,1))*(p(1)-pt(3,1))+pt(3,2) );
    c(2) =-p(2) + ( (pt(6,2)-pt(5,2))/(pt(6,1)-pt(5,1))*(p(1)-pt(5,1))+pt(5,2) );    
    c(3) = p(4) - ( (pt(4,2)-pt(3,2))/(pt(4,1)-pt(3,1))*(p(3)-pt(3,1))+pt(3,2) );
    c(4) =-p(4) + ( (pt(6,2)-pt(5,2))/(pt(6,1)-pt(5,1))*(p(3)-pt(5,1))+pt(5,2) );    
    c(5) = p(6) - ( (pt(4,2)-pt(3,2))/(pt(4,1)-pt(3,1))*(p(5)-pt(3,1))+pt(3,2) );
    c(6) =-p(6) + ( (pt(6,2)-pt(5,2))/(pt(6,1)-pt(5,1))*(p(5)-pt(5,1))+pt(5,2) );    
    
    % Notice that \mathcal{P} needs to be shrinked a little bit via
    % exclude_aux.
    temp = [y1,p(1:2)];
    temp = repmat(temp,size(para.exclude.f.p,1),1);
    c(7) = -1 + para.exclude.f.M * prod(temp.^para.exclude.f.p, 2);
   
        
    if nargout > 2
       dceq = [];
       dc = zeros(7,6);
       
       dc(1,:) = [-(pt(4,2)-pt(3,2))/(pt(4,1)-pt(3,1)),  1,0,0,0,0];
       dc(2,:) = [ (pt(6,2)-pt(5,2))/(pt(6,1)-pt(5,1)), -1,0,0,0,0];
       dc(3,:) = [0,0,-(pt(4,2)-pt(3,2))/(pt(4,1)-pt(3,1)),  1,0,0];
       dc(4,:) = [0,0, (pt(6,2)-pt(5,2))/(pt(6,1)-pt(5,1)), -1,0,0];
       dc(5,:) = [0,0,0,0,-(pt(4,2)-pt(3,2))/(pt(4,1)-pt(3,1)),  1];
       dc(6,:) = [0,0,0,0, (pt(6,2)-pt(5,2))/(pt(6,1)-pt(5,1)), -1];
       
       temp = [y1,p(1:2)];
       temp = repmat(temp,size(para.exclude.df.p,1),1); 
       dc(7,:) = [para.exclude.df.M(1,:) * prod(temp.^para.exclude.df.p, 2)...
                   para.exclude.df.M(2,:) * prod(temp.^para.exclude.df.p, 2),0,0,0,0];
       
       dc = dc';
    end
    
end
