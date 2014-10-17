% to vector
function x=toVector(X)
[i j]=size(X);
x=reshape(X,[i*j 1]);
