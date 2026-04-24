
#include <Servo.h>

int irSensor = 7;     // IR sensor pin
Servo myServo;

void setup() {
  pinMode(irSensor, INPUT);
  myServo.attach(6);
  myServo.write(0);   // Closed position
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(irSensor);

  Serial.print("IR Value: ");
  Serial.println(sensorValue);

  // If pet detected (LOW for most IR sensors)
  if (sensorValue == LOW) {
    myServo.write(90);  // Open feeder
    delay(2000);        // Food drops
    myServo.write(0);   // Close feeder
    delay(3000);        // Wait before next feed
  }
}
