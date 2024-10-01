#include <Servo.h>

Servo servo;

const int minAngle = 0;
const int maxAngle = 360;
const int wait = 15;

int angle = minAngle;

void setup() {
  servo.attach(9); // Connect SIG Pin to D9
  servo.write(minAngle); // Zero the angle
}

void loop() 
{ 
 // scan from 0 to 180 degrees
  for(angle = minAngle; angle < maxAngle; angle++)  
  {                                  
    servo.write(angle);               
    delay(wait);                   
  } 
  // now scan back from 180 to 0 degrees
  for(angle = maxAngle; angle > minAngle; angle--)    
  {                                
    servo.write(angle);           
    delay(wait);       
  } 
}