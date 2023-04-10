#include <Servo.h>

// Create a Servo object
Servo servoMotor1;
Servo servoMotor2;


void setup() {
  // Initialize the Serial communication
  //Serial.begin(9600);

  // Attach the servo motor to pin 9
  servoMotor1.attach(9);
  servoMotor2.attach(10);

}

void loop() {
   // Move the servo motor from 0 to 180 degrees in steps of 1 degree
  for (int angle = 0; angle <= 180; angle++) {
    servoMotor1.write(angle);
    servoMotor2.write(angle);
    delay(15); // Wait for the servo to reach the desired angle
  }

  // Move the servo motor from 180 to 0 degrees in steps of 1 degree
  for (int angle = 180; angle >= 0; angle--) {
    servoMotor1.write(angle);
    servoMotor2.write(angle);
    delay(15); // Wait for the servo to reach the desired angle
  }
}