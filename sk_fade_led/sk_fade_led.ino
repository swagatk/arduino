// Fade LED Program 
 int ledPin = 9;
 int brightness = 0;
 int fadeAmount = 2;
 
void setup() { 
  // declare pin 9 as output
  pinMode(ledPin, OUTPUT);
}
void loop() {
  // set the brightness of pin 9:
  analogWrite(ledPin, brightness);

  //change the brightness for next time 
  //through the loop
  brightness = brightness + fadeAmount;

  //reverse the direction of the fade if value
  // exceeds 255
  if(brightness <= 0 || brightness >= 255){
    fadeAmount =- fadeAmount;
  }
  delay(30); //wait for 30 ms
}
