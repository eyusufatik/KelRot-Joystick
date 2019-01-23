#include "UnoJoy.h"

void setup() {
  Serial.begin(9600);
  setupUnoJoy();
  
  //set pins with pull up mode so less cabling and components are required
  for(int i=2;i<=13;i++){
    pinMode(i,INPUT_PULLUP);
  }
  pinMode(18,INPUT_PULLUP);
  pinMode(19,INPUT_PULLUP);
}

void loop() {
  //create a blank controller data
  dataForController_t controllerData = getBlankDataForController();

  //set joystick buttons
  //see schematics for which pin is for which button
  controllerData.squareOn = !digitalRead(2);
  controllerData.crossOn = !digitalRead(3);
  controllerData.circleOn = !digitalRead(4);
  controllerData.triangleOn = !digitalRead(5);
  
  controllerData.l1On = !digitalRead(6);
  controllerData.r1On = !digitalRead(7);
  
  controllerData.l2On = !digitalRead(8);
  controllerData.r2On = !digitalRead(9);
  
  controllerData.l3On = !digitalRead(12);
  controllerData.r3On = !digitalRead(13);
  
  controllerData.selectOn = !digitalRead(10);
  controllerData.startOn = !digitalRead(11);

  //UnoJoy library doesn't provide enough buttons so use pov instead
  controllerData.dpadDownOn = !digitalRead(18); //A4
  controllerData.dpadUpOn = !digitalRead(19); //A5

  //send data
  setControllerData(controllerData);
}
