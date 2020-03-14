// Glow LED on Pressing a button
const int buttonPin = 12;
const int ledPin = 13;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //read the state of the pushbutton
  buttonState = digitalRead(buttonPin);

  //check if the pushbutton is pressed.
  if(buttonState == HIGH){
    //turn LED on:
    digitalWrite(ledPin, HIGH);
  }
  else{
    //turn LED off
    digitalWrite(ledPin, LOW);
  }
}
