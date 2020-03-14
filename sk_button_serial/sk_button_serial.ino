int led = 13;
int button = 12;
void setup() {
pinMode(led, OUTPUT);
pinMode(button, INPUT);
Serial.begin(9600);
}
void loop(){

  /*  ---------------------------------
   *   Controlling LED from Keyboard
   *   LED glows when 1 is passed to the serial port
   *   LED turns off when 0 is sent.
   *   You can enter 1 or 0 on the serial monitor
   *   --------------------------- */
   
//  if(Serial.available() > 0) {
//    char ledState = Serial.read();
//    if(ledState == '1'){
//      digitalWrite(led, HIGH);
//    }
//    if(ledState == '0'){
//      digitalWrite(led, LOW);
//    }
//  }

  
  /*-------------------------
   * LED glows when the button is pressed and
   * a message is printed on the serial port.
   *---------------------------------- */

  
  int buttonState = digitalRead(button);
  if ( buttonState == HIGH){
    digitalWrite(led, HIGH);
    Serial.println("Button is pressed");
    delay(500);
  }
  else{
    digitalWrite(led, LOW);
    delay(100);
  } 
}
