#include <Servo.h>

// Create a Servo object to control the servo motor
Servo servo;

// Define constants for servo configuration
const int servoPin = 9;    // The pin number where the servo is connected
const int minAngle = 0;    // Minimum angle of servo rotation (in degrees)
const int maxAngle = 180;  // Maximum angle of servo rotation (in degrees)

// Set the desired angular velocity (in degrees per second)
const float angularVelocity = 90.0;  // Adjust this value to change rotation speed

/**
 * Calculates the wait time between angle increments based on the desired angular velocity.
 * 
 * @param angularVelocity The desired rotation speed in degrees per second.
 * @return The wait time in milliseconds between each degree of rotation.
 */
int calculateWait(float angularVelocity) {
  // Convert angular velocity (degrees/second) to milliseconds per degree
  return round(1000 / angularVelocity);
}

/**
 * Setup function runs once when the Arduino starts.
 * It initializes the servo and serial communication.
 */
void setup() {
  servo.attach(servoPin);  // Attach the servo to the specified pin
  Serial.begin(9600);      // Initialize serial communication for debugging
}

/**
 * Main loop function that runs repeatedly.
 * It calculates the wait time, prints debug information,
 * and controls the servo's sweeping motion.
 */
void loop() {
  // Calculate the wait time based on the set angular velocity
  int wait = calculateWait(angularVelocity);
  
  // Print debug information to the serial monitor
  Serial.print("Angular Velocity: ");
  Serial.print(angularVelocity);
  Serial.println(" degrees/second");
  Serial.print("Wait time: ");
  Serial.print(wait);
  Serial.println(" ms");

  // Sweep from minAngle to maxAngle
  for (int i = minAngle; i < maxAngle; i++) {
    servo.write(i);  // Set the servo position
    delay(wait);     // Wait for the calculated time
  }
  
  // Sweep from maxAngle to minAngle
  for (int i = maxAngle; i > minAngle; i--) {
    servo.write(i);  // Set the servo position
    delay(wait);     // Wait for the calculated time
  }
}
