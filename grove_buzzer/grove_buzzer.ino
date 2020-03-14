const int Buzzer = 6;
const int Button = 3;
const int LED = 7;
void setup()
{
  pinMode(Buzzer, OUTPUT);
  pinMode(Button, INPUT);
  pinMode(LED, OUTPUT);
  
}

void loop()
{
  int buttonState = digitalRead(Button);
  if(buttonState == 1)
  {
    digitalWrite(Buzzer, HIGH);
    digitalWrite(LED, HIGH);
    delay(10);
  }
  else
  {
    digitalWrite(Buzzer, LOW);
    digitalWrite(LED, LOW);
  }
}
