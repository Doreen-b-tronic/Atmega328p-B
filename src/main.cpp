#include <Arduino.h>

const uint8_t myLED = 8;  // Change 'LED' to 'myLED'


  void setup() {
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(myLED, OUTPUT);
}

// the loop function runs over and over again forever
  void loop() {
  digitalWrite(myLED, HIGH);   // turn the LED on
  delay(2000);                      // wait for a second
  digitalWrite(myLED, LOW);    // turn the LED off 
  delay(500);                      // wait for a second
}