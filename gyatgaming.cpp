int LED_Green = 3;
int LED_Blue = 2;

void setup()
{
  pinMode(LED_Blue, OUTPUT); 
  pinMode(LED_Green, OUTPUT); 
  pinMode(4, INPUT);
  
  digitalWrite(LED_Blue, LOW);
 
  
  while (digitalRead(4)==LOW){
      digitalWrite(LED_Green, HIGH);
      delay(200);
      digitalWrite(LED_Green, LOW);
      delay(200);
    }

}

void loop()
{
  digitalWrite(LED_Blue, HIGH);
}