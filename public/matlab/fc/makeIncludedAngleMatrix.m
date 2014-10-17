function A = makeIncludedAngleMatrix(v)
v = reshape(v,2,length(v)/2);
c = mean(v.').';    % center
l=length(v);
A=zeros(l,l);
s=180/pi;
for i=1:l
    for j=1:l
        psi=v(:,i)-c;   psj=v(:,j)-c;
        if (norm(psi) * norm(psj) == 0)
            A(i,j) = 0;
        else
            val= (psi'*psj) / (norm(psi)*norm(psj));
            A(i,j)=s*real(acos(val));
        end
    end
end

