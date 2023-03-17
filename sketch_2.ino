#include <DueTimer.h>

const uint8_t PIN_7 = 7;
bool state = false;

void PinState()
{
  state = digitalRead(PIN_7);
  Serial.println(state);
}

void setup() 
{
  Serial.begin(9600);
  pinMode(PIN_7, INPUT);
  Timer3.attachInterrupt(PinState);
  Timer3.start(1000000);
}

void loop() 
{
  
   
}
