function [t p]=evalMatching(p0, A1 ,A2, k, stopTime)
tspan=[0 stopTime];
% k=1;

% matrix input/output
odefuncM = @(t,P) (P*(P'*A2*P*A1 -A1*P'*A2*P) -k*P*((P.*P)'*P -P'*(P.*P)));
%odefuncM = @(t,P) (P*(P'*A2*P*A1 -A1*P'*A2*P) -(t/stopTime)*k*P*((P.*P)'*P -P'*(P.*P)));

% vector input/output
odefuncV = @(t,p) toVector(odefuncM(t,toMatrix(p)));

[t p]=ode23tb(odefuncV,tspan,toVector(p0));





