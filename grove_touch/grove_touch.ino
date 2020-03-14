
const int TouchPin = 8;
const int ledPin = 7;
void setup() {
  pinMode(TouchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = digitalRead(TouchPin);
  if (sensorValue == 1){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
}
