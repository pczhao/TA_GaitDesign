function p = match_x(x_old,x_new,p)
    % use when the resulting elts in x from decomp doesn't have the order we want


    [row,col] = size(p);

    for i = 1:length(x_new)
        flag = 0;
        if isequal(x_new(i),x_old(i))
            flag = 1;
            continue
        end
        
        for j = i+1:length(x_old)
            if isequal(x_new(i),x_old(j))
                flag = 1;
                temp = x_old(i);
                x_old(i) = x_old(j);
                x_old(j) = temp;
                temp = p(:,i);
                p(:,i) = p(:,j);
                p(:,j) = temp;
                break
            end
        end
        
        if flag == 0
            p = [p(:,1:i-1),zeros(row,1),p(:,i:col)];
            col = col + 1;
            x_old = [x_old(1:i-1);msspoly(0);x_old(i:length(x_old))];
        end
    end

end
