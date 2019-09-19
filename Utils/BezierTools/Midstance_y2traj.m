function [q_traj_des_m, k, ptime] = Midstance_y2traj( y )
    if length(y) ~= 10
        error('wrong dimension.');
    end
    load( 'y_mid', 'y_mid', 'K_map' );
    q = y(1:5);
    dq = y(6:10);
    q = q(:).';
    dq = dq(:).' / norm(dq);
    
%     [~,idx] = sort( sum(abs(y_mid(:,1:5) - q), 2) + 0.9 * sum(abs(y_mid(:,6:10) - dq), 2) );
    [~,idx] = sort( sum(abs(y_mid(:,1:5) - q), 2) );
    cnt = 1;
    k = K_map(idx(cnt), 1:2);
    [q_traj_des_m, ptime] = FindBezTraj( k(1), k(2) );
    while isempty( q_traj_des_m )
        cnt = cnt + 1;
        k = K_map(idx(cnt), 1:2);
        [q_traj_des_m, ptime] = FindBezTraj( k(1), k(2) );
    end
    
end