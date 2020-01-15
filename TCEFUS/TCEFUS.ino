#include "SERVO.h"          // GITAWAG ANG SERVO NGA HEADER
#include "TEMPERATURE.H"    // GITAWAG ANG TEMPERATURE NGA HEADER
ServoMove tce;
TemperatureDetect td;

void setup() {
  // put your setup code here, to run once:
  tce.servomove_setup();
  td.temperatureselect_setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  tce.servomove_loop(80);  
    Serial.print("temperature = ");
    Serial.print(td.temperatureselect_loop); 
    Serial.println("C  ");
}
