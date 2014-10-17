function mobileRobot(block)
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
    block.InputPort(1).Dimensions        = 2;
    block.InputPort(1).DirectFeedthrough = false;  
    block.OutputPort(1).Dimensions       = 4;  
    %% Set block sample time to continuous
    block.SampleTimes = [0 0];  
    %% Setup Dwork
    block.NumContStates = 4;
    %% Register methods
    block.RegBlockMethod('InitializeConditions',    @InitConditions);  
    block.RegBlockMethod('Outputs',                 @Output);  
    block.RegBlockMethod('Derivatives',             @Derivative);  

function InitConditions(block)
    %% Initialize Dwork
    block.ContStates.Data = block.DialogPrm(1).Data;

function Output(block)
    x=block.ContStates.Data(1);
    y=block.ContStates.Data(2);
    th=block.ContStates.Data(3);
    u1=block.ContStates.Data(4);
    block.OutputPort(1).Data = [ x y th u1 ]';

function Derivative(block)
    u2 =  block.InputPort(1).Data(1);
    u3 =  block.InputPort(1).Data(2);
    th =  block.ContStates.Data(3);  
    u1 =  block.ContStates.Data(4);        
    block.Derivatives.Data = [  u1*cos(th);   u1*sin(th);     u2;   u3];
