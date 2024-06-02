COMPSYS723 Assignment 2 - Cruise Control System In Esterel  
Bailey Clague & Marianne Healey 

The project involves the implementation of a cruise control system in the synchronous programming language of Esterel.

Key features:

Four states: ON, OFF, STNDBY, DISABLE

ON: The car is using cruise control 
OFF: the car is not using cruise control 
STNBY: the brakes have been pressed while in cruise control, cruise control is deactivated until the resume button is pressed
DISABLE: the car speed is out of speed limit or the accelerator pedal is pressed while in cruise control, cruise control is 
deactivated until the car speed is within speed limit again and the accelerator pedal is not pressed. 

Inputs:

- on button (On) - pure signal
- off button (Off) - pure signal
- resume button (Resume) - pure signal
- set button (Set) - pure signal
- acceleation precentage of pedal (Accel) - float
- brake precentage of pedal (bBake) - float
- car speed (Speed) - float
- Button to accelerate in cruise control by 2.5km/hr (QuickAccel) - pure signal
- Button to decelerate in cruise control by 2.5km/hr (QuickDecel) - pure signal

Outputs: 

- Cruise control state (CruiseState) - enum string
- Cruise Speed (CruiseSpeed) - float
- Throttle command (ThrottleCmd) - float

INSTRUCTIONS TO RUN:

Open a terminal in the 'Cruise-Control-Files' directory 

Clean and build both the .xes and .xev by entering the following commands

For the .xes:

make clean cruiseController.xes
./cruiseController.xes

The GUI where inputs and outputs can be displayed should open.
Change the font to huge to get a good window size.
Select the command panel and select "Keep Inputs"
Modify input values as needed and click tick when updating of the outputs is needed. 


For the .xev:

make clean cruiseController.xev 
./cruiseController.xev 

select signals with the appropriate colour and click "apply" when ready to check outputs 

