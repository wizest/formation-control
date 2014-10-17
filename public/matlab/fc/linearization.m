syms X x y th u1 u2 u3 
f=[u1*cos(th), u1*sin(th) , 0, 0].';
g1=[0 0 1 0].';     g2=[0 0 0 1].';
h1=x;               h2=y;       h=[h1 h2].';
X=[x y th u1].';

Lg1Lfh1 = jacobian((jacobian(h1,X)*f),X)*g1;
Lg2Lfh1 = jacobian((jacobian(h1,X)*f),X)*g2;
Lg2Lfh2 = jacobian((jacobian(h2,X)*f),X)*g2;
Lg1Lfh2 = jacobian((jacobian(h2,X)*f),X)*g1;
A=[Lg1Lfh1 Lg2Lfh1; Lg1Lfh2 Lg2Lfh2];

L2fh1 = jacobian((jacobian(h1,X)*f),X)*f;
L2fh2 = jacobian((jacobian(h2,X)*f),X)*f;
Lfh=[L2fh1; L2fh2];
