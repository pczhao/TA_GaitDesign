function [out] = DiscreteFRSouter_finiteT_v4_part1( T, k, y0, y, Dyn_lb, Dyn_ub, hY, hK, dl, d )
% Computes outer approximation of FRS
% T:	integer, time horizon
% k:    m-by-1 free msspoly, control parameter(s)
% y0:   n-by-1 free msspoly, initial states
% y:    n-by-1 free msspoly, state variables
% Dyn_lb, Dyn_ub:
%       msspoly of (k, y) such that
%       y+ \in [ Dyn_lb(y-,k), Dyn_ub(y-,k) ] <= [-1, 1];
%       For example, in our case Dyn_lb = (center from PC) + (lowerbound from JL)
% hY:   msspoly of y, domain. (a.k.a. hXp)
% hX0:  msspoly of x0 = (k,y0), initial set
% hK:   smaller set of K for step >= 2. Must be a subset of "triangle"
% dl:   integrator on (Y0 x X) over (k, y0, y)
% d:    degree

% =================== Documentation for nerds ====================
% Definitions/Assumptions:
%   1. x0 = ( k1, k2, y0 )
% 
% Solves the following problems:
% Problem 1
% inf   < 1, w(y0,y) >
% s.t.  v_1( y0, y ) >= 0       forall y \in [Dyn_1b(k,y0), Dyn_ub(k,y0)]
%                               and y0, y \in hY
%                               and k \in hK
%       v_{i+1}( y0, yp ) >= v_{i}( y0, y )
%                               forall yp \in [Dyn_1b(k,y), Dyn_ub(k,y)]
%                               and y0, y, yp \in hY
%                               and k \in hK
%       w( y0, y ) >= 0         forall y0, y \in hY
%       w( y0, y ) >= v_{i}( y0, y ) + 1
%                               forall y0, y \in hY
%% Sanity check
    if T<=1
        error('T needs to be >1');
    end

%% variables
    n = length( y );
    yp = msspoly('pcyp', n);
    hY0 = subs( hY, y, y0 );
    hYp = subs( hY, y, yp );
 
 %% Step 1: 
    % define the program
    prog = spotsosprog;
    prog = prog.withIndeterminate( k );
    prog = prog.withIndeterminate( y0 );
    prog = prog.withIndeterminate( y );
    prog = prog.withIndeterminate( yp );
    
    % create variables
    vmonom = monomials( [ y0; y ], 0:d );
    wmonom = monomials( [ y0; y ], 0:d );
    
    [ prog, vm ] = prog.newFreePoly( vmonom, T-1 );
    [ prog, w ] = prog.newFreePoly( wmonom );
    
    vp = subs( vm, y, yp );
    
    % ========= constraints =========
    % 1. v_1( y0, y ) >= 0          forall y \in [Dyn_1b(k,y0), Dyn_ub(k,y0)]
    %                               and y0, y \in hY
    %                               and k \in hK
    h_Dyn0 = [ ...
        y - subs(Dyn_lb, y, y0);
        subs(Dyn_ub, y, y0) - y ];
    prog = sosOnK( prog, vm(1), [ y0; y; k ], [ hY0; hY; h_Dyn0; hK ], d );
    
    % 2.  v_{i+1}( y0, yp ) >= v_{i}( y0, y )
    %                               forall yp \in [Dyn_1b(k,y), Dyn_ub(k,y)]
    %                               and y0, y, yp \in hY
    %                               and k \in hK
    for i = 1 : T-2
        h_Dyn = [ ...
            yp - Dyn_lb;
            Dyn_ub - yp ];
        prog = sosOnK( prog, vp(i+1) - vm(i), [ y0; y; yp; k ], [ hY0; hY; hYp; h_Dyn; hK ], d );
    end
    
    % 3. w( y0, y ) >= 0            forall y0, y \in hY
    prog = sosOnK( prog, w, [ y0; y ], [ hY0; hY ], d );
    
    % 4.  w( y0, y ) >= v_{i}( y0, y ) + 1  forall y0, y \in hY
    for i = 1 : T-1
        prog = sosOnK( prog, w - vm(i) - 1, [ y0; y ], [ hY0; hY ], d );
    end
    
    % ========= obj function ==========
    obj = dl( w );
    
    % ========= options =========
    spot_options = spot_sdp_default_options();
    spot_options.verbose = 1;
    
%% Solve
    tic;
    [sol] = prog.minimize( obj, @spot_mosek, spot_options );
    out.time = toc;
    
    out.pval = double(sol.eval(obj));
    out.sol = sol;
    out.w = sol.eval( w );
    
end