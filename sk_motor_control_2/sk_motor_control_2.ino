int motorPin = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(motorPin, OUTPUT);

  Serial.begin(9600);
  while(!Serial);
  Serial.println("Enter Speed value: 0 to 255");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    int speed = Serial.parseInt();
    if(speed >= 0 && speed <= 255){
      analogWrite(motorPin, speed);
      Serial.println(speed);
      delay(10000);
      
    }
  }
}
