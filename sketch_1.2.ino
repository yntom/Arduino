#include <DueTimer.h>
const uint8_t LED = 13;

void myHandler()
{
  digitalWrite(LED, !digitalRead(LED));  
}


void setup() 
{
  pinMode(LED, OUTPUT);
  Timer4.attachInterrupt(myHandler);
  Timer4.start(1000000);
}

void loop() 
{
  
}
