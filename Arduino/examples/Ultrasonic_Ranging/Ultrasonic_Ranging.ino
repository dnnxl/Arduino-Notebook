#include <Ultrasonic.h>

Ultrasonic ultraleft(9,8);   // (Trig PIN,Echo PIN)
Ultrasonic ultraright(6,7);  // (Trig PIN,Echo PIN)

void setup() {
  Serial.begin(9600); 
}

void loop()
{
  Serial.print("Left: ");
  Serial.print(ultraleft.Ranging(CM)); // CM or INC
  Serial.print(" cm     " );
  delay(50);
  Serial.print("Right: ");
  Serial.print(ultraright.Ranging(CM)); // CM or INC
  Serial.println(" cm" );
  delay(50);
}
