#include <SPI.h>

void setup() 
{
  SPI.begin();             //PIN_SPI_MISO and PIN_SPI_MOSI are connected
  Serial.begin(9600);
}

void loop()
{
  while(Serial.available() == 0);
  byte PC_data = Serial.read() - '0';
  Serial.print("PC data: ");
  Serial.println(PC_data);

  byte response1 = SPI.transfer(PIN_SPI_MISO, PC_data);
  Serial.print("Received data: ");
  Serial.println(response1);
}
