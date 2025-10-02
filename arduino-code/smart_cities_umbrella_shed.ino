#include <Servo.h>
int rain_sensor = A0;
int servo = 3;
int ledPin = 4;
Servo myServo;

void setup() {
  Serial.begin(9600);
  myServo.attach(servo);
  myServo.write(0);  // Start at 0 degrees

  pinMode(ledPin, OUTPUT);  // Set LED pin as output
  digitalWrite(ledPin, LOW); // Turn LED off initially
}

void loop() {
  int sensorValue = analogRead(rain_sensor);
  Serial.print("Raw Sensor Value: ");
  Serial.println(sensorValue);
  int threshold = 500; 
  if (sensorValue > threshold) {
    myServo.write(0);         // No rain detected
    digitalWrite(ledPin, LOW); // Turn LED off
    Serial.println("Servo Angle: 0 degrees (No Rain Detected)");
    Serial.println("No rain detected");
  } else {
    myServo.write(180);       // Rain detected
    digitalWrite(ledPin, HIGH); // Turn LED on
    Serial.println("Servo Angle: 180 degrees (Rain Detected)");
    Serial.println("Rain detected");
  }

  delay(1000);  // Delay 1 second between readings
}
