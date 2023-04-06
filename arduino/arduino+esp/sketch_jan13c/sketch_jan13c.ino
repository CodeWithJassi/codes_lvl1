#include "Wire.h"
int LEDPin = 2; // Pin number connected to the LED
int JoystickPin = 34; // Pin number 34 is input only and connected to the Joystick

void setup() {
  pinMode(LEDPin, OUTPUT);          // attaches pin 2 as output pin
  pinMode(JoystickPin, INPUT);      // attaches pin 34 as input pin
  Serial.begin(9600);               // set baud rate
}

void loop() {
  int joystickValue = analogRead(JoystickPin); // Read the value of the Joystick
  Serial.println(joystickValue);               // Prints the input value

  if (joystickValue < -2700) {
    digitalWrite(LEDPin, HIGH); // Turn the LED on
  }
  else {
    digitalWrite(LEDPin, LOW); // Turn the LED off
  }
	delay(400);
}
