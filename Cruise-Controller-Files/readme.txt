COMPSYS723 Assignment 2 - Cruise Control System In Esterel  
Bailey Clague & Marianne Healey 

The project involves the implementation of a cruise control system in the synchronous programming language of Esterel.


Installation:
1. Clone the repository: https://github.com/bcla154/723-Cruise-Controller.git

Running the project:
2. Navigate to the project directory 

3. Run the project:
make cruiseController.xes
./cruiseController.xes


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

Contact:
If you have any questions or suggestions, please feel free to contact us:

Bailey Clague: bcla154@aucklandun.ac.nz
Marianne Healey: mhea373@aucklanduni.ac.nz