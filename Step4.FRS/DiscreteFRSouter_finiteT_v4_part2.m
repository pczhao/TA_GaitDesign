function [out] = DiscreteFRSouter_finiteT_v4_part2( T, k, y0, y, Dyn_lb, Dyn_ub, hY, hX0, q, dl, d )
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
% Solves the following problem:
% inf   < 1, w(x0,y) >
% s.t.  v_1( k, y0, y ) >= 0    forall y \in [Dyn_lb(k,y0), Dyn_ub(k,y0)]
%                              	and (k, y0) \in X0
%       v_2( k, y0, yp ) >= v_1( k, y0, y )
%                               forall y \in hXp
%                               and q(y,yp)>=1
%                               and (k, y0) \in X0
%       w( k, y0, y ) >= 0      forall y \in Xp
%                               and (k, y0) \in X0
%       w( k, y0, y ) >= v_{i} + 1
%                               forall y \in Xp
%                               and (k, y0) \in X0
%                               and 1<=i<=T

%% Sanity check
    if T<1
        error('T needs to be >=1');
    end

%% Setup sos program
    n = length( y );
    yp = msspoly('pcyp', n);
    hYp = subs( hY, y, yp );
    
    % define the program
    prog = spotsosprog;
    prog = prog.withIndeterminate( k );
    prog = prog.withIndeterminate( y0 );
    prog = prog.withIndeterminate( y );
    prog = prog.withIndeterminate( yp );
    
    x0 = [ k; y0 ];
    
    % create variables
    vmonom = monomials( [ x0; y ], 0:d );
    wmonom = monomials( [ x0; y ], 0:d );
    
    [ prog, vm ] = prog.newFreePoly( vmonom, 2 );
    [ prog, w ] = prog.newFreePoly( wmonom );
    
    vp = subs( vm, y, yp );
    
    % ========= constraints =========
    % 1. v_1( k, y0, y ) >= 0  forall y \in [Dyn_lb(k,y0), Dyn_ub(k,y0)] and (k,y0) \in X0
    h_Dyn0 = [ ...
        y - subs(Dyn_lb, y, y0);
        subs(Dyn_ub, y, y0) - y ];
    prog = sosOnK( prog, vm(1), [ x0; y ], [ hX0; hY; h_Dyn0 ], d );
    
    % v_2( k, y0, yp ) >= v_1( k, y0, y )
    %                               forall y \in hY
    %                               and q(y,yp)>=1
    %                               and (k, y0) \in X0
    if ~isempty( q )
        hq = subs( q, [y0; y], [y; yp] ) - 1;
%         hq = [ y - yp; yp - y ];
%         hq = [ ...
%             yp - y + 0.1;
%             y - yp + 0.1 ];
        prog = sosOnK( prog, vp(2) - vm(1), [ x0; y; yp ], [ hX0; hY; hYp; hq ], d );
    end
    
    % 3. w(k, y0, y) >= 0    	forall (k, y0) \in X0, (k, y) \in X
    prog = sosOnK( prog, w, [ x0; y ], [ hX0; hY ], d );
    
    % 4. w(k, y0, y) - v_{i}(k, y0, y) >= 1
    %                           forall (k, y0) \in X0, (k, y) \in X
    %                           and 1<=i<=T
    for i = 1 : 2
        prog = sosOnK( prog, w - vm(i) - 1, [ x0; y ], [ hX0; hY ], d );
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