#include "SERVO.h" // GITAWAG ANG SERVO NGA HEADER
ServoMove tce;

void setup() {
  // put your setup code here, to run once:
  tce.servomove_setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  tce.servomove_loop(80);  
}
