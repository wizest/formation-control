% clear all;

h=load('outputWithoutP.mat');           
% h=load('outputWithP.mat');           
p=load('assignmentDynamicsOutput.mat'); 
h=h.ans;
p=p.ans;

% 무엇을 보여줄까...
% 1. 모든 agent의 xy 그래프 - 6컷정도 보여주자.
% 2. x축에 대한, y축에 대한 6개의 output에 대한 trajectory
% 3. P의 변화
%.4. 1,2 반복

filx=kron(eye(6),[1 0]);
fily=kron(eye(6),[0 1]);

t=[];
x=[];
y=[];
yt=[];
for i=0:.3:19
    idx=find(h(1,:)>=i,1);
    t=[t h(1,idx)];
    x=[x filx*h(2:13,idx)];
    y=[y fily*h(2:13,idx)];
end
l=length(x);

figure(1);
plot(x',y','-');
xlim([-600 600]);
ylim([-2000 3000]);
hold on;
n=0;
for xy=[x(:,1) y(:,1)]'
    n=n+1;
    plot(xy(1),xy(2),'or');
    text(xy(1),xy(2),[' ' char('0'+n)]);
end
n=0;
for xy=[x(:,l) y(:,l)]'
    n=n+1;
    plot(xy(1),xy(2),'xr');
    text(xy(1),xy(2),[' ' char('0'+n)]);
end
hold off;


% print preview에 맞추어서
% font size 18px / landscape / fill page
% export setup에서 expand axes to fill pages
print -dpdf formationTracking.pdf  

%% %%%%%%%%%%%%%%%%%%%%%%%%%
figure(1);
plot(t',x')
legend('1','2','3','4','5','6','Location','NorthWest');
hold on;
n=0;
for xy=[x(:,1) y(:,1)]'
    n=n+1;
    plot(t(1),xy(1),'or');
    text(t(1),xy(1),[' ' char('0'+n)]);
end
n=0;
for xy=[x(:,l) y(:,l)]'
    n=n+1;
    plot(t(l),xy(1),'xr');
    text(t(l),xy(1),[' ' char('0'+n)]);
end
hold off;
print -dpdf formationTracking_x.pdf 

figure(1);
plot(t',y')
legend('1','2','3','4','5','6','Location','NorthWest');
hold on;
n=0;
for xy=[x(:,1) y(:,1)]'
    n=n+1;
    plot(t(1),xy(2),'or');
    text(t(1),xy(2),[' ' char('0'+n)]);
end
n=0;
for xy=[x(:,l) y(:,l)]'
    n=n+1;
    plot(t(l),xy(2),'xr');
    text(t(l),xy(2),[' ' char('0'+n)]);
end
hold off;
print -dpdf formationTracking_y.pdf 
%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% clear all;

% h=load('outputWithoutP.mat');           
h=load('outputWithP.mat');           
p=load('assignmentDynamicsOutput.mat'); 
h=h.ans;
p=p.ans;

% 무엇을 보여줄까...
% 1. 모든 agent의 xy 그래프 - 6컷정도 보여주자.
% 2. x축에 대한, y축에 대한 6개의 output에 대한 trajectory
% 3. P의 변화
%.4. 1,2 반복

filx=kron(eye(6),[1 0]);
fily=kron(eye(6),[0 1]);

t=[];
x=[];
y=[];
yt=[];
for i=0:.3:19
    idx=find(h(1,:)>=i,1);
    t=[t h(1,idx)];
    x=[x filx*h(2:13,idx)];
    y=[y fily*h(2:13,idx)];
end
l=length(x);

figure(1);
plot(x',y','-');
xlim([-600 600]);
ylim([-2000 3000]);
hold on;
n=0;
for xy=[x(:,1) y(:,1)]'
    n=n+1;
    plot(xy(1),xy(2),'or');
    text(xy(1),xy(2),[' ' char('0'+n)]);
end
n=0;
for xy=[x(:,l) y(:,l)]'
    n=n+1;
    plot(xy(1),xy(2),'xr');
    text(xy(1),xy(2),[' ' char('0'+n)]);
end
hold off;


% print preview에 맞추어서
% font size 18px / landscape / fill page
% export setup에서 expand axes to fill pages
print -dpdf formationTracking2.pdf  

%% %%%%%%%%%%%%%%%%%%%%%%%%%
figure(1);
plot(t',x')
legend('1','2','3','4','5','6','Location','NorthWest');
hold on;
n=0;
for xy=[x(:,1) y(:,1)]'
    n=n+1;
    plot(t(1),xy(1),'or');
    text(t(1),xy(1),[' ' char('0'+n)]);
end
n=0;
for xy=[x(:,l) y(:,l)]'
    n=n+1;
    plot(t(l),xy(1),'xr');
    text(t(l),xy(1),[' ' char('0'+n)]);
end
hold off;
print -dpdf formationTracking2_x.pdf 

figure(1);
plot(t',y')
legend('1','2','3','4','5','6','Location','NorthWest');
hold on;
n=0;
for xy=[x(:,1) y(:,1)]'
    n=n+1;
    plot(t(1),xy(2),'or');
    text(t(1),xy(2),[' ' char('0'+n)]);
end
n=0;
for xy=[x(:,l) y(:,l)]'
    n=n+1;
    plot(t(l),xy(2),'xr');
    text(t(l),xy(2),[' ' char('0'+n)]);
end
hold off;
print -dpdf formationTracking2_y.pdf 

%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%
figure(1);
t=[];
pp=[]
for i=0:.001:.5
    idx=find(p(1,:)>=i,1);
    t=[t p(1,idx)];
    pp=[pp p(2:37,idx)];
end
l=length(pp);
plot(t',pp')
xlim([0 .5])
print -dpdf pdynamics.pdf 

tmp=p(:,length(p));
reshape(tmp(2:37),6,6)
