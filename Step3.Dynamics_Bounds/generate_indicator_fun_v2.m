function [K,x,objval] = generate_indicator_fun_v2(points,level,ub,lb,degree,UorL,bnd)
% input: point = n-by-m matrix, where n is the number of points, and m is
%                the dimension
%        level = value of K evaluated at every point that we want to be
%                greater than. It's either a scalar or an n-by-1 vector
%        ub,lb = upper bound, lower bound of indeterminate variables
%        degree = desired degree of the resulting indicator function
%        UorL = 0 if bound from below, 1 from above
%        bnd = limit of K, i.e. K-bnd >= 0, on the considered region.

    [n,dim] = size(points);
    x = msspoly('x',dim);
    if length(level)==1
        flag = 0;
    elseif length(level)~=n
        error('check the size of level');
    else
        flag = 1;
    end
    
    mono = monomials(x,0:degree);
    
    if flag == 0
        l = level * ones(n,1);
    else
        l = level;
    end
    
    prog = spotsosprog;
    prog = prog.withIndeterminate(x);
    [prog,K] = prog.newFreePoly(mono);
    dl = boxMoments(x,lb(:),ub(:));
    
    if UorL == 1
        prog = prog.withSOS(K-bnd);
        constr = msubs(K,x,points')'-l;
        prog = prog.withPos(constr);
        obj = dl(K);
    else
        prog = prog.withSOS(bnd-K);
        constr = l-msubs(K,x,points')';
        prog = prog.withPos(constr);
        obj = -dl(K);
    end
    
    
   
    options = spot_sdp_default_options();
    options.verbose = 1;
    sol = prog.minimize(obj,@spot_mosek_sos,options);
    K = sol.eval(K);

    % check
    val = msubs (K,x,points')';
    if UorL == 1
        val = val - l;
        z = min(val(val<0))
        if ~isempty(z)
            K = K - z;
        end
    else
        val = l - val;
        z = min(val(val<0))
        if ~isempty(z)
            K = K + z;
        end
    end
    
    
    
    objval = double(sol.eval(obj)); % only useful when we care about the volumn of K
    
end









