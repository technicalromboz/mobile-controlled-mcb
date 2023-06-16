// tutorial link https://youtu.be/0-pJE5A_fZU

#include <Servo.h>

Servo myServo;  // Create a servo object

void setup() {
  Serial.begin(9600);  // Initialize the serial communication
  myServo.attach(9);   // Attach the servo to pin 9
        myServo.write(0);  // Rotate the servo to 0 degrees

}

void loop() {
  if (Serial.available()) {
    char command = Serial.read();  // Read the incoming command

    if (command == '1') {
      myServo.write(60);  // Rotate the servo to 90 degrees
    } else if (command == '2') {
      myServo.write(0);  // Rotate the servo to 0 degrees
    }
  }
}
