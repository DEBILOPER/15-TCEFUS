// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 6; 
// Create a servo object 
Servo Servo1; 


class ServoMove {
   public:  
         void servomove_setup();   
         void servomove_loop(int pos);   
         
};

void ServoMove::servomove_setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin); 
   
}
void ServoMove::servomove_loop(int pos){ 
   
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    Servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
    }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    Servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
    }
}
