int motorPin1 = 5;
int motorPin2 = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

// try different speed values
// 100 - 150 - 200 - 255
void loop() {
  // put your main code here, to run repeatedly:
  rotateLeft(170, 1000); 
  rotateRight(170, 1000);
}

void rotateLeft(int speedOfRotate, int duration){
  analogWrite(motorPin1, speedOfRotate);
  digitalWrite(motorPin2, LOW);
  delay(duration);
  digitalWrite(motorPin1, LOW);
}

void rotateRight(int speedOfRotate, int duration){
  analogWrite(motorPin2, speedOfRotate); 
  digitalWrite(motorPin1, LOW);
  delay(duration);
  digitalWrite(motorPin2, LOW);
}
