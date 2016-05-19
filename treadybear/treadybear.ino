/* This example shows how to blink the three user LEDs
on the Zumo 32U4. */

#include <Wire.h>
#include <Zumo32U4.h>

void setup()
{
bootup();

}

void loop()
{
  // Turn the LEDs on.
  ledRed(1);
  ledYellow(1);
  ledGreen(1);

  // Wait for a second.
  delay(1000);

  // Turn the LEDs off.
  ledRed(0);
  ledYellow(0);
  ledGreen(0);

  // Wait for a second.
  delay(1000);
}


void bootup() {
  int sleep  = 0;

  for(sleep = 100; sleep > 0; sleep -= 3 ) {
    ledRed(0);
    ledYellow(0);
    ledGreen(0);
    delay(sleep);

    ledRed(1);
    ledYellow(1);
    ledGreen(1);
    delay(sleep);
  }

  ledRed(1);
  ledYellow(1);
  ledGreen(1);
}

