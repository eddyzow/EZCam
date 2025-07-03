#include <Servo.h>

/*
  - When the button is NOT pressed, the servo is at 90 degrees
  - When the button IS pressed and held, the servo moves to 0 degrees
  - Servo:
    - Signal (Orange/Yellow wire) -> Pin 9
    - VCC (Red wire)              -> 5V
    - GND (Brown/Black wire)      -> GND
  - Pushbutton:
    - One leg -> Pin 2
    - Other leg -> GND
*/

const int SERVO_PIN = 9;   // The digital PWM pin for the servo's signal wire.
const int BUTTON_PIN = 2;  // The digital pin for the pushbutton.

const int SHUTTER_OPEN_POS = 0;   // Position when the shutter is open.
const int SHUTTER_CLOSED_POS = 90; // Position when the shutter is closed.

Servo shutterServo;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  shutterServo.attach(SERVO_PIN);
  shutterServo.write(SHUTTER_CLOSED_POS);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == LOW) {
    shutterServo.write(SHUTTER_OPEN_POS);
  } else {
    shutterServo.write(SHUTTER_CLOSED_POS);
  }

  delay(20);
}