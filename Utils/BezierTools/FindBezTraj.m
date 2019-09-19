function [ Bez_pts, ptime, theta_len ] = FindBezTraj( p1, p2, flag )
% flag = 0 (default):   Bez_map_theta
% flag = 1:             Bez_map_time

    if nargin < 3
        flag = 0;
    end

    loaddata = load('Bez_fit_res_all.mat');
    P_map = loaddata.P_map;
    if flag == 0
        Bez_map = loaddata.Bez_map_theta;
    else
        Bez_map = loaddata.Bez_map_time;
    end
    

    [P_map, ia, ~] = unique( P_map, 'rows' );
    Bez_map = Bez_map( ia, :, : );

    if mod(p1,0.02) == 0
        p1 = p1 + 1e-4;
    end

    if mod(p2,0.02) == 0
        p2 = p2 + 1e-4;
    end

    p1_left = p1 - mod( p1, 0.02 );
    p2_left = p2 - mod( p2, 0.02 );
    p1_right = p1_left + 0.02;
    p2_right = p2_left + 0.02;


    p_ref = [ ...
        p1_left, p2_right
        p1_left, p2_left
        p1_right, p2_right
        p1_right, p2_left ];

    p_idx = zeros(2,2);
    for i = 1 : 4
        tmp = find( abs(P_map(:,1) - p_ref(i,1))<1e-3 & abs(P_map(:,2) - p_ref(i,2))<1e-3 );
        if isempty(tmp)
            Bez_pts = [];
            ptime = [];
            theta_len = [];
            return;
        else
            p_idx(i) = tmp;
        end
    end

    [ ~, Bez_deg, num_q ] = size( Bez_map );

    X = [ p1_left, p1_right; p1_left, p1_right ];
    Y = [ p2_right, p2_right; p2_left, p2_left ];

    ptime = interp2( X, Y, reshape(P_map(p_idx,3),2,2), p1, p2 );
    theta_len = interp2( X, Y, reshape(P_map(p_idx,4),2,2), p1, p2 );

    Bez_pts = zeros( Bez_deg, num_q );

    for i = 1 : Bez_deg * num_q
        Bez_pts(i) = interp2( X, Y, reshape( Bez_map(p_idx,i), 2, 2 ), p1, p2 );
    end

end