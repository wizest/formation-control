function feedbackLinearizer(block)
    setup(block);

function setup(block)
    %% Register number of dialog parameters   
    block.NumDialogPrms = 1;
    %% Register number of input and output ports
    block.NumInputPorts  = 1;
    block.NumOutputPorts = 1;
    %% Setup functional port properties to dynamically
    %% inherited.
    block.SetPreCompInpPortInfoToDynamic;
    block.SetPreCompOutPortInfoToDynamic; 
    block.InputPort(1).Dimensions        = 6;
    block.InputPort(1).DirectFeedthrough = false;  
    block.OutputPort(1).Dimensions       = 2;  
    %% Set block sample time to continuous
    block.SampleTimes = [0 0];  
    %% Setup Dwork
    block.NumContStates = 0;
    %% Register methods
    block.RegBlockMethod('Outputs', @Output);  

function Output(block)
    v1 = block.InputPort(1).Data(1);  v2 =  block.InputPort(1).Data(2);
    x =  block.InputPort(1).Data(3);  y =  block.InputPort(1).Data(4);
    th = block.InputPort(1).Data(5);  u1 = block.InputPort(1).Data(6);

    if (u1 == 0)
        invA= [0 0;0 0];
    else
        invA =[  -sin(th)/u1    cos(th)/u1;     cos(th)   sin(th)];
    end
    Lfh=[0;0];  
    block.OutputPort(1).Data =  -invA*Lfh+ invA*[v1; v2];
  