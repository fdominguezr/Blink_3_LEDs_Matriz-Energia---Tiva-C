/*
  Blink
  The basic Energia example.
  Turns on an LED on for one second, then off for one second, repeatedly.
  Change the LED define to blink other LEDs.
  
  Hardware Required:
  * LaunchPad with an LED
  
  This example code is in the public domain.
*/

// most launchpads have a red LED
#define LEDBLUE BLUE_LED
#define LEDGREEN GREEN_LED
#define LEDRED RED_LED

//see pins_energia.h for more LED definitions
//#define LED GREEN_LED

  int timerON = 5;           // The higher the number, the slower the timing.  
  int timerOFF = 10;
  int ledPins[] = {
  LEDBLUE,LEDGREEN,LEDRED};
  int pinCount = 3;           // the number of pins (i.e. the length of the array)
  
// the setup routine runs once when you press reset:
void setup() {    
  // initialize the digital pin as an output.
    // the array elements are numbered from 0 to (pinCount - 1).
  // use a for loop to initialize each pin as an output:
  for (int thisPin = 0; thisPin < pinCount; thisPin++)  {
    pinMode(ledPins[thisPin], OUTPUT);   
  }
}


// the loop routine runs over and over again forever:
void loop() {
    // loop from the lowest pin to the highest:
    for (int thisPin = 0; thisPin < pinCount; thisPin++) {
      // turn the pin on:
      digitalWrite (ledPins[thisPin],HIGH);
      delay(timerON);
      // turn the pin off:
      digitalWrite (ledPins[thisPin],LOW);
      delay(timerOFF);
    }
 }
