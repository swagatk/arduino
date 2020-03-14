#define btnPin 7
#define led1Pin 8
#define led2Pin 9
#define led3Pin 10
int buttonState = 0;
int ledcount = 0;


void setup() {
  // put your setup code here, to run once:

  pinMode(btnPin, INPUT);
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(buttonPressed())
    set_mode();

  if(ledcount > 3)
    ledcount = 0;

  Serial.print("LED Count: ");
  Serial.println(ledcount);
  delay(200);

}

bool buttonPressed(){
  buttonState = digitalRead(btnPin);
  if(buttonState == HIGH){
    ledcount += 1;
    return true;
  }else{
    return false;
  }
}

void set_mode()
{
  switch(ledcount){
    case 0:
      digitalWrite(led1Pin, LOW);
      digitalWrite(led2Pin, LOW);
      digitalWrite(led3Pin, LOW);
      break;
    case 1:
      digitalWrite(led1Pin, HIGH);
      digitalWrite(led2Pin, LOW);
      digitalWrite(led3Pin, LOW);
      break;
    case 2:
      digitalWrite(led1Pin, LOW);
      digitalWrite(led2Pin, HIGH);
      digitalWrite(led3Pin, LOW);
      break;
    case 3:
      digitalWrite(led1Pin, LOW);
      digitalWrite(led2Pin, LOW);
      digitalWrite(led3Pin, HIGH);
      break;
  }
}
