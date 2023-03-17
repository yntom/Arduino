//#include <DueTimer.h>

int8_t PC_data;

void TransData()
{
  while(Serial.available() == 0);  
  int8_t PC_data = Serial.read();
  Serial1.write(PC_data);
  Serial.print("Transmitted data: ");
  Serial.println(PC_data - '0'); 
  
  while(Serial1.available() == 0);
  Serial.print("Received data: ");
  Serial.println(Serial1.read() - '0');
}

void setup() 
{
  Serial1.begin(9600);          // Pins 18 and 19 are connected
  Serial.begin(9600);
}

void loop() 
{ 
  TransData();
}
