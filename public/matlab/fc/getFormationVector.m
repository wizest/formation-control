function xy=getFormationVector()
clf();
axis([-100 100 -100 100]);
hold on;
xy = [];    % Initially, the list of points is empty.
n = 0;

% Loop, picking up the points.
disp('Left mouse button picks points.')
disp('Right mouse button picks last point.')
but = 1;
while but == 1
    [xi,yi,but] = ginput(1);
    n = n+1;
    xy(:,n) = [xi;yi];
    plot(xi,yi,'ro');
    text(xi,yi,[' ' char('0'+n)]);
end

hold off;

