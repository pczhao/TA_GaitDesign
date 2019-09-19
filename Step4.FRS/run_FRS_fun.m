function run_FRS_fun(T,d)


% Define variables
P   = msspoly( 'p', 2 );
dth   = msspoly( 'dth', 1 );
dthend   = msspoly( 'dthe', 1 );

% load indicator functions
load ind_Pspace.mat     % the 1-sup level set gives an outer approximation of all pairs of (p1,p2) that we've used
load('dynamics_error_bound.mat');
load('SBM_model_scaled.mat');



% Dyn
Dyn_lb = subs(f_y1hat,xf_yihat,[dth;P]) + ...
         subs(B1_low,xB1_low,[dth;P]);
Dyn_ub = subs(f_y1hat,xf_yihat,[dth;P]) + ...
         subs(B1_upp,xB1_upp,[dth;P]);

% hY
hY = (1-dthend)*(dthend+1);

% hX0
hX0 = [(1-dth).*(dth+1);
        1-P.^2;
       subs(g_Pspace-1,x_Pspace,P)];

% hK
hK = 0.1^2 - (P(1)-0.6)^2 - (P(2)-0.3)^2;

% dl
dl_all = @(p)moments(p,[P;dth;dthend]);
dl_y = boxMoments( [ dth; dthend ], [-1; -1], [1; 1] );


%% Solve
[out] = DiscreteFRSouter_finiteT_v4( T, P, dth, dthend, Dyn_lb, Dyn_ub, hY, hX0, hK, dl_y, dl_all, d );

w = out.w;
states = [dth;P;dthend];
w_states_info = 'y1(i), P(i), y1(i+1 : i+N)'; % y1(i+1 : i+N): the collection of all possible y1(i+1),...,y1(i+N)
filename = strcat('FRS_result_T',num2str(T),'deg',num2str(d),'.mat');
save(filename,'w','states','w_states_info');

end

%% moment function: integral a polynomial p(P(i),y1(i),y1(i+1 : i+N)) w.r.t. Lebesgue measure over \mathcal{P} \times \mathcal{Y}_1^2
function l = moments(p,x)
% p: polynomial
% x: p1, p2, y1(i), y1(i+1 : i+N)
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
    
    % integral over y1(i) and y1(i+1 : i+N)
    l = subs(integral(l,x(3)),x(3),1) - subs(integral(l,x(3)),x(3),-1);
    l = subs(integral(l,x(4)),x(4),1) - subs(integral(l,x(4)),x(4),-1);

end








