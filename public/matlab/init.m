global A B C D x0 h Ai Bi Ci Di xi0
N=5;

Ai=[0 1 0 0;
    0 0 0 0;
    0 0 0 1;
    0 0 0 0];
Bi=[0;1;0;1];

A=kron(eye(N),Ai);
C=eye(size(A));


% Complete Graph Laplacian
% L=(1/4)*[ 4 -1 -1 -1 -1 ;
%          -1  4 -1 -1 -1 ;
%          -1 -1  4 -1 -1 ;
%          -1 -1 -1  4 -1 ;
%          -1 -1 -1 -1  4];

L=      [ 1 0 -1 0 0 ;
         0  1 0 0 -1 ;
         -1 0  1 0 0 ;
         0 -1 0  1 0 ;
         0 0 -1 0  1];
     
% Ln=kron(L,eye(2));
Fi=[1 1 1 1 ];
B=kron(L,Bi*Fi);

D=zeros(size(B));
x0=ones(length(A),1);
h=zeros(length(A),1);


Ci = eye(4);
Di = [0 0 0 0]';
xi0 = [1 0 1 0 ]';
