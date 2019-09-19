function [ x, dx, ddx ] = EvalBezier( Bez_Pts, s )
    Bez_deg = size( Bez_Pts, 1 ) - 1;
    
    b = zeros(1,Bez_deg+1);
    db = zeros(1,Bez_deg);
    ddb = zeros(1,Bez_deg-1);
    
    for i = 0 : Bez_deg
        b(i+1) = nchoosek( Bez_deg, i ) * s^i * (1-s)^(Bez_deg-i);
    end
    for i = 0 : Bez_deg-1
        db(i+1) = (Bez_deg) * nchoosek( Bez_deg-1, i ) * s^i * (1-s)^(Bez_deg-1-i);
    end
    for i = 0 : Bez_deg-2
        ddb(i+1) = (Bez_deg) * (Bez_deg-1) * nchoosek( Bez_deg-2, i ) * s^i * (1-s)^(Bez_deg-2-i);
    end
    x = ( b * Bez_Pts ).';
    dx = ( db * diff( Bez_Pts ) ).';
    ddx = ( ddb * diff( Bez_Pts, 2 ) ).';
end