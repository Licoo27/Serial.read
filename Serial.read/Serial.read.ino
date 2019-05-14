char c = 0;
unsigned long var = 0;

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    c = Serial.read();
    while ( c >= 48 && c <= 57)
    {
      var = var *10 + (c-48);
      delay(10);
      c = Serial.read();
      
    }
    
    Serial.println(var, DEC);
  }
  

}
