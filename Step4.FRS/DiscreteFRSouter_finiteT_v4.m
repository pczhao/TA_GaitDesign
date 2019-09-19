function [out] = DiscreteFRSouter_finiteT_v4( T, k, y0, y, Dyn_lb, Dyn_ub, hY, hX0, hK, dl_y, dl_all, d )

if T >= 2
%     dl1 = boxMoments( [y0; y], [-1; -1], [1; 1] );
    [out1] = DiscreteFRSouter_finiteT_v4_part1( T, k, y0, y, Dyn_lb, Dyn_ub, hY, hK, dl_y, d );
    
%     xval = -1:0.01:1;
%     subsval = [ repmat( 0.1, 1, length(xval) ); xval ];
% 
%     for i = 1 : 20
%         subsval = [ (i-10)/10* ones(1, length(xval)); xval ];
%         wval = full( double( msubs( out1.w, [y0; y], subsval ) ) );
%         plot(xval, wval);
%         pause;
%     end
    
    [X, Y] = meshgrid(-1:0.01:1, -1:0.01:1);
    Z = full( double( msubs( out1.w, [y0; y], [X(:), Y(:)].' ) ) );
    Z = reshape(Z, size(X));
    mesh(X,Y,Z);
    
    [out] = DiscreteFRSouter_finiteT_v4_part2( T, k, y0, y, Dyn_lb, Dyn_ub, hY, hX0, out1.w, dl_all, d );
else
    [out] = DiscreteFRSouter_finiteT_v4_part2( T, k, y0, y, Dyn_lb, Dyn_ub, hY, hX0, [], dl_all, d );
end