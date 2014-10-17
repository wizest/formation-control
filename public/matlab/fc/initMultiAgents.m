clear all;

zeta=[0 0 -100 -200 100 -200 -200 -400 0 -400 200 -400].';
k11=300;    k12=50;     k21=300;    k22=50;
K1=kron(eye(6),[k11 0;0 k12]);
K2=kron(eye(6),[k21 0;0 k22]);
    
L=[ 0 0 0 0 0 0;
    -.5 1 -.5 0 0 0;
    -.5 -.5 1 0 0 0;
    0 -.5 0 1 -.5 0
    0 -.5 -.5 0 1 0
    0 0 -.5 0 -.5 1];
Lm=kron(L,eye(2));

Ai=[0 0 1 0; 0 0 0 1; 0 0 0 0; 0 0 0 0];    Bi=[0 0; 0 0; 1 0; 0 1];
Ci=[1 0 0 0; 0 1 0 0];                      Di=[0 0; 0 0];
A=kron(eye(6),Ai);  B=kron(eye(6),Bi);
C=kron(eye(6),Ci);  D=kron(eye(6),Di);

% initial values of mobile robots
% z01 =[ -100 200 (50)*cos(90/180*pi) (50)*sin(90/180*pi)]; 
% z02 =[ -100 0 (40)*cos(-70/180*pi) (40)*sin(-70/180*pi)];   
% z03 =[ -50 100 (100)*cos(-60/180*pi) (100)*sin(-60/180*pi)];   
% z04 =[ -150 100  (10)*cos(30/180*pi) (10)*sin(30/180*pi)]; 
% z05 =[ -200 0 (20)*cos(90/180*pi) (20)*sin(90/180*pi)];   
% z06 =[ 0 0   (30)*cos(-120/180*pi) (30)*sin(-120/180*pi)];    

z01 =[ 0 0 (150)*cos(90/180*pi) (150)*sin(90/180*pi)]; 
z02 =[ -150 -900 (70)*cos(-70/180*pi) (70)*sin(-70/180*pi)];   
z03 =[ 250 -1600 (100)*cos(-60/180*pi) (100)*sin(-60/180*pi)];   
z04 =[ -300 -1500  (70)*cos(30/180*pi) (70)*sin(30/180*pi)]; 
z05 =[ 150 -800  (20)*cos(90/180*pi) (20)*sin(90/180*pi)];   
z06 =[ -5 -1550  (80)*cos(-120/180*pi) (80)*sin(-120/180*pi)];    

initZ=[z01, z02, z03, z04, z05, z06].';

% assignment dynamics
% A1 from formation vector, A2 from initial outputs
A1=makeIncludedAngleMatrix(zeta);
    tmp=reshape(initZ,4,6);
    tmp=reshape(tmp(1:2,:),12,1);
A2=makeIncludedAngleMatrix(tmp);
