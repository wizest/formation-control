% to square matrix
function X=toMatrix(x)
n=sqrt(length(x));
X=reshape(x,[n n]);
