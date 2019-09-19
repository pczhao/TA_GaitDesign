function [P,warn] = online_opt_speedtracker(y1,desire_speed,n,preP,P0)
% This function helps to solve the online MPC optimization (OL) in a speed 
% tracking scenario.
% Cost function:  n*(speed(i)-desire_speed(i))^2 + (speed(i+1)-desire_speed(i+1))^2 + (speed(2)-desire_speed(i+2))^2
% Input: y1           -- scalar. y1(i)
%        desire_speed -- N-by-1 vector, where N is the number of steps we
%                        predict in FRS. desired speed sequence in the next
%                        N steps.
%        n            -- scalar. weight parameter
%        prepP        -- 2-by-1 vector. P(i-1)
%        P0           -- 2-by-1 vector. initial guess of P(i)
%Output: P            -- 2N-by-1 vector. [P(i);P(i+1);...;P(i+N-1)]

    P = [];
    warn = 0;
    preP = reshape(preP,2,1);
    
    load online_para.mat
    load my_bnd.mat
    
    if y1 < 0
        warn = 1;
        warning('dth0 cannot be negative!');
        return
    end

    % normalize y1
    y1 = (y1-dth_mid)*2/dth_scale; 
    
    % set and scale destination & prevK
    preP(1) = (preP(1)-p_mid(1))*2/p_scale(1);
    preP(2) = (preP(2)-p_mid(2))*2/p_scale(2);
    preP = reshape(preP,1,2);

    
    fun = @(p)speedtrack(p,desire_speed,para,n);

    nonlcon = @(p)nlconstr(p,y1,para,preP);
    LB = [-0.8775   -0.7039];
    LB = [LB, LB, LB];
    UB = [0.8881    0.7498];
    UB = [UB, UB, UB];

    if nargin<5
        P0 = [0,0,0.6,0.3,0.6,0.3]; 
    else
        P0 = [(P0(1)-p_mid(1))*2/p_scale(1), (P0(2)-p_mid(2))*2/p_scale(2)];
        P0 = [P0,0.6,0.3,0.6,0.3];
    end

    options = optimoptions('fmincon','SpecifyObjectiveGradient',true,...
                           'SpecifyConstraintGradient',true, 'MaxIterations', 1e4,'MaxFunctionEvaluations',1e4);
    [P,~,flag] = fmincon(fun,P0,[],[],[],[],LB,UB,nonlcon,options);
%     flag
    if flag == -2
        P = [];
        warn = 1;
        return
    end
    
    % Check feasibility
%     [nonlcon(P),[1:length(nonlcon(P))]'];
    
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

function [c,ceq,dc,dceq] = nlconstr(p,y1,para,prep)
   % normilize chart: pi -- > 0
   %                  pi/2 --> -1.5708
   %                  3pi/2 --> 1.5708
  
    p = reshape(p,1,6);
    pt =  [-0.8775   -0.7039; % \mathcal{P} is described by the convex hull of pt = [pt(1);pt(2);pt(3);pt(4);pt(5);pt(6)] 
     0.8881    0.7498;
   -0.8775   -0.6538;
   -0.1223    0.7498;
   -0.7346   -0.7039;
    0.8881    0.2986];
    
    ceq = [];
    c = zeros(15,1); 
    
    % set the domain
    c(1) = p(2) - ( (pt(4,2)-pt(3,2))/(pt(4,1)-pt(3,1))*(p(1)-pt(3,1))+pt(3,2) );
    c(2) =-p(2) + ( (pt(6,2)-pt(5,2))/(pt(6,1)-pt(5,1))*(p(1)-pt(5,1))+pt(5,2) );
    temp = p(3:4);
    temp = repmat(temp,size(para.Pprime.f.p,1),1);
    c(3) = - para.Pprime.f.M * prod(temp.^para.Pprime.f.p, 2);
    temp = p(5:6);
    temp = repmat(temp,size(para.Pprime.f.p,1),1);
    c(4) = - para.Pprime.f.M * prod(temp.^para.Pprime.f.p, 2);
    temp = [y1,p(1:2)];
    temp = repmat(temp,size(para.exclude.f.p,1),1);
    c(5) = -1 + para.exclude.f.M * prod(temp.^para.exclude.f.p, 2);
    
    % -ell(y1(i),P(i)) <= 0
    temp = [y1,p(1:2)];
    temp = repmat(temp,size(para.ell.f.p,1),1);
    c(6) = - para.ell.f.M * prod(temp.^para.ell.f.p, 2)*100;
    
    % f_y2hat(P2(i)) + B2_upp(P2(i-1),y1(i),P2(i))-pi <= 0
    temp = [y1,p(1:2)];
    temp = repmat(temp,size(para.f_yihat(2).f.p,1),1);
    c(7) = para.f_yihat(2).f.M * prod(temp.^para.f_yihat(2).f.p, 2);
    temp = [prep(2),y1,p(2)];
    temp = repmat(temp,size(para.B2_upp.f.p,1),1);
    c(7) = c(7) + para.B2_upp.f.M * prod(temp.^para.B2_upp.f.p, 2) - 0;
    
    % -f_y3hat(y1(i),P(i)) - B3_low(y1(i),P(i)) + pi/2 < 0
    temp = [y1,p(1:2)];
    temp = repmat(temp,size(para.f_yihat(3).f.p,1),1);
    c(8) = - para.f_yihat(3).f.M * prod(temp.^para.f_yihat(3).f.p, 2);
    temp = [y1,p(1:2)];
    temp = repmat(temp,size(para.B3_low.f.p,1),1);
    c(8) = c(8) - para.B3_low.f.M * prod(temp.^para.B3_low.f.p, 2) + (-1.5708) + 0.0001;
    
    % f_y4hat(y1(i),P(i)) + B4_upp(y1(i),P(i)) - 3pi/2 < 0
    temp = [y1,p(1:2)];
    temp = repmat(temp,size(para.f_yihat(4).f.p,1),1);
    c(9) = para.f_yihat(4).f.M * prod(temp.^para.f_yihat(4).f.p, 2);
    temp = [y1,p(1:2)];
    temp = repmat(temp,size(para.B4_upp.f.p,1),1);
    c(9) = c(9) + para.B4_upp.f.M * prod(temp.^para.B4_upp.f.p, 2) - 1.5708 + 0.0001;
    
    % -ell_y2(P2(i),P2(i+1)) <= 0
    temp = p([2,4]);
    temp = repmat(temp,size(para.ell_y2.f.p,1),1);
    c(10) = - para.ell_y2.f.M * prod(temp.^para.ell_y2.f.p, 2);
    
    % -ell_y2(P2(i+1),P2(i+2)) <= 0
    temp = p([4,6]);
    temp = repmat(temp,size(para.ell_y2.f.p,1),1);
    c(11) = - para.ell_y2.f.M * prod(temp.^para.ell_y2.f.p, 2);
    
    % -ell_y3(P(i+1)) <= 0
    temp = p(3:4);
    temp = repmat(temp,size(para.ell_y3.f.p,1),1);
    c(12) = - para.ell_y3.f.M * prod(temp.^para.ell_y3.f.p, 2);
    
    % -ell_y3(P(i+2)) <= 0
    temp = p(5:6);
    temp = repmat(temp,size(para.ell_y3.f.p,1),1);
    c(13) = - para.ell_y3.f.M * prod(temp.^para.ell_y3.f.p, 2);
    
    % -ell_y4(P(i+1)) <= 0
    temp = p(3:4);
    temp = repmat(temp,size(para.ell_y4.f.p,1),1);
    c(14) = - para.ell_y4.f.M * prod(temp.^para.ell_y4.f.p, 2);
    
    % -ell_y4(P(i+2)) <= 0
    temp = p(5:6);
    temp = repmat(temp,size(para.ell_y4.f.p,1),1);
    c(15) = - para.ell_y4.f.M * prod(temp.^para.ell_y4.f.p, 2);
    
    
    if nargout > 2
       dceq = [];
       dc = zeros(15,6);
       
       % set the domain
       dc(1,:) = [-(pt(4,2)-pt(3,2))/(pt(4,1)-pt(3,1)),  1,0,0,0,0];
       dc(2,:) = [ (pt(6,2)-pt(5,2))/(pt(6,1)-pt(5,1)), -1,0,0,0,0];
       temp = p(3:4);
       temp = repmat(temp,size(para.Pprime.df.p,1),1);
       dc(3,:) = -[0,0,para.Pprime.df.M(1,:) * prod(temp.^para.Pprime.df.p, 2), para.Pprime.df.M(2,:) * prod(temp.^para.Pprime.df.p, 2),0,0];
       temp = p(5:6);
       temp = repmat(temp,size(para.Pprime.df.p,1),1);
       dc(4,:) = -[0,0,0,0,para.Pprime.df.M(1,:) * prod(temp.^para.Pprime.df.p, 2), para.Pprime.df.M(2,:) * prod(temp.^para.Pprime.df.p, 2)];
       temp = [y1,p(1:2)];
       temp = repmat(temp,size(para.exclude.df.p,1),1); 
       dc(5,:) = [para.exclude.df.M(1,:) * prod(temp.^para.exclude.df.p, 2)...
                   para.exclude.df.M(2,:) * prod(temp.^para.exclude.df.p, 2),0,0,0,0];
       
       % -ell(y1(i),P(i)) <= 0
       temp = [y1,p(1:2)];
       temp = repmat(temp,size(para.ell.df.p,1),1);
       dc(6,:) = - [para.ell.df.M(1,:) * prod(temp.^para.ell.df.p, 2)...
                    para.ell.df.M(2,:) * prod(temp.^para.ell.df.p, 2),0,0,0,0]*100;
       
       % f_y2hat(P2(i)) + B2_upp(P2(i-1),y1(i),P2(i))-pi <= 0         
       temp = [y1,p(1:2)];
       temp = repmat(temp,size(para.f_yihat(2).df.p,1),1);   
       dc(7,:) = [para.f_yihat(2).df.M(1,:) * prod(temp.^para.f_yihat(2).df.p, 2)...
                  para.f_yihat(2).df.M(2,:) * prod(temp.^para.f_yihat(2).df.p, 2),0,0,0,0];
       temp = [prep(2),y1,p(2)];
       temp = repmat(temp,size(para.B2_upp.df.p,1),1);
       dc(7,:) = dc(7,:) + [0,para.B2_upp.df.M(2,:) * prod(temp.^para.B2_upp.df.p, 2)...
                            0,0,0,0];
       
       % -f_y3hat(y1(i),P(i)) - B3_low(y1(i),P(i)) + pi/2 < 0
       temp = [y1,p(1:2)];
       temp = repmat(temp,size(para.f_yihat(3).df.p,1),1);
       dc(8,:) = -[para.f_yihat(3).df.M(1,:) * prod(temp.^para.f_yihat(3).df.p, 2)...
                   para.f_yihat(3).df.M(2,:) * prod(temp.^para.f_yihat(3).df.p, 2),0,0,0,0];
       temp = [y1,p(1:2)];
       temp = repmat(temp,size(para.B3_low.df.p,1),1);
       dc(8,:) = dc(8,:) - [para.B3_low.df.M(1,:) * prod(temp.^para.B3_low.df.p, 2)...
                            para.B3_low.df.M(2,:) * prod(temp.^para.B3_low.df.p, 2),0,0,0,0];
       
       % f_y4hat(y1(i),P(i)) + B4_upp(y1(i),P(i)) - 3pi/2 < 0
       temp = [y1,p(1:2)];
       temp = repmat(temp,size(para.f_yihat(4).df.p,1),1);
       dc(9,:) = [para.f_yihat(4).df.M(1,:) * prod(temp.^para.f_yihat(4).df.p, 2)...
                  para.f_yihat(4).df.M(2,:) * prod(temp.^para.f_yihat(4).df.p, 2),0,0,0,0];
       temp = [y1,p(1:2)];
       temp = repmat(temp,size(para.B4_upp.df.p,1),1);
       dc(9,:) = dc(9,:) + [para.B4_upp.df.M(1,:) * prod(temp.^para.B4_upp.df.p, 2)...
                            para.B4_upp.df.M(2,:) * prod(temp.^para.B4_upp.df.p, 2),0,0,0,0];
                        
       % -ell_y2(P2(i),P2(i+1)) <= 0
       temp = p([2,4]);
       temp = repmat(temp,size(para.ell_y2.df.p,1),1);
       dc(10,:) = -[0,para.ell_y2.df.M(1,:) * prod(temp.^para.ell_y2.df.p, 2)...
                   0,para.ell_y2.df.M(2,:) * prod(temp.^para.ell_y2.df.p, 2),0,0];
       
       % -ell_y2(P2(i+1),P2(i+2)) <= 0
       temp = p([4,6]);
       temp = repmat(temp,size(para.ell_y2.df.p,1),1);
       dc(11,:) = -[0,0,0,para.ell_y2.df.M(1,:) * prod(temp.^para.ell_y2.df.p, 2)...
                   0,para.ell_y2.df.M(2,:) * prod(temp.^para.ell_y2.df.p, 2)]; 
               
       % -ell_y3(P(i+1)) <= 0
       temp = p(3:4);
       temp = repmat(temp,size(para.ell_y3.df.p,1),1);
       dc(12,:) = -[0,0,para.ell_y3.df.M(1,:) * prod(temp.^para.ell_y3.df.p, 2)...
                   para.ell_y3.df.M(2,:) * prod(temp.^para.ell_y3.df.p, 2),0,0]; 
       
       % -ell_y3(P(i+2)) <= 0
       temp = p(5:6);
       temp = repmat(temp,size(para.ell_y3.df.p,1),1);
       dc(13,:) = -[0,0,0,0,para.ell_y3.df.M(1,:) * prod(temp.^para.ell_y3.df.p, 2)...
                   para.ell_y3.df.M(2,:) * prod(temp.^para.ell_y3.df.p, 2)];
       
       % -ell_y4(P(i+1)) <= 0
       temp = p(3:4);
       temp = repmat(temp,size(para.ell_y4.df.p,1),1);
       dc(14,:) = -[0,0,para.ell_y4.df.M(1,:) * prod(temp.^para.ell_y4.df.p, 2)...
                   para.ell_y4.df.M(2,:) * prod(temp.^para.ell_y4.df.p, 2),0,0]; 
               
       % -ell_y4(P(i+2)) <= 0
       temp = p(5:6);
       temp = repmat(temp,size(para.ell_y4.df.p,1),1);
       dc(15,:) = -[0,0,0,0,para.ell_y4.df.M(1,:) * prod(temp.^para.ell_y4.df.p, 2)...
                   para.ell_y4.df.M(2,:) * prod(temp.^para.ell_y4.df.p, 2)];
    
    
       dc = dc';
    end

end






