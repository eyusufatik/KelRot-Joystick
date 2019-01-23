# KelRot-Joystick
This repo includes all the files used to create a joystick for KelRot 5655's 2. driver for Destination: Deep Space. It provides easier operation with buttons placed considering the robot's subsystems' workflow.

![Assembled Joystick](/joystick.jpeg)

## Buttons
1. 3 way switch in the top left corner
  At the start of a match co-pilot uses this switch to take out the intake mechanism.
2. 2 buttons under the switch
  These buttons provide manual operation of the lift system.
3. 6 buttons in the middle
  Each button sets the lift height to the according level for the hatch or cargo level. (e.g. orange at the top sets the height to top bay of the rocket)

## Arduino
An Arduino Uno is chosen as it has enough pins for the buttons on the joystick and can be found laying around in KelRot's workplace. With UnoJoy library's special firmware, Arduino Uno shows up as a joystick on most of the operation systems (Windows, Linux, MacOS). Information on UnoJoy library can be found here: https://code.google.com/archive/p/unojoy/.

## Cad
Mechanical parts are designed on Autodesk Fusion 360 and 3D printed with PLA. Simply use 4 M4 screws to assemble.
Button holes are .5 mm wider than the buttons to make assembly easier.
