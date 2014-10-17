fr=getFormationVector();
fi=getFormationVector();

disp('Waiting...');
Fr=getFormationDescriptionMatrix(fr);
Fi=getFormationDescriptionMatrix(fi);

%Fi=[0 100 0 0;100 0 20 3; 0 20 0 0; 0 3 0 0];
%Fr=[0 0 0 20; 0 0 0 3; 0 0 0 100; 20 3 100 0];

%[t p]=evalMatching(eye(size(Fr)),Fi,Fr,1000000,3);
[t p]=evalMatching(eye(size(Fr)),Fi,Fr,100,1);

n=length(t);

Pi=toMatrix(p(1,:))     % P initial
Pf=toMatrix(p(n,:))     % P final (steady)
P = double(Pf > .5 )    % P permutation

figure(1);
clf();
plot(t,p);
ylim([-1, 2]);




%%
figure(2)
clf();
hold on;
n=0;
for pi=p'
    xx=toMatrix(pi)'*fr(1,:)';
    yy=toMatrix(pi)'*fr(2,:)';  
    n=n+1;
%     if (n>10)
        plot(xx,yy,'g.');
        n=0;
%     end
end

n=0;
for xy=fr
    n=n+1;
    plot(xy(1),xy(2),'xr');
    text(xy(1),xy(2),[' ' char('0'+n)]);
end

n=0;
for xy=fi
    n=n+1;
    plot(xy(1),xy(2),'r.');
    n2=find(P(n,:)>0);
    text(xy(1),xy(2),[' ' char('0'+n) '->' char('0'+n2)]);
end

% hold on;
% xx=double(toMatrix(pi)>.5)*fr(1,:)';
% yy=double(toMatrix(pi)>.5)*fr(2,:)';  
% plot(xx,yy,'m.');

hold off;
