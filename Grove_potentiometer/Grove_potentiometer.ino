const int potentiometer = 0;

float readAngle(int value)
{
  float angle = value * 270.0 / 1023;
  return angle;
}
void setup()
{
  //set the serial communication frequency at 9600 bits per sec
    Serial.begin(9600); 
    pinMode(potentiometer, INPUT);
}

void loop()
{
    int value = analogRead(potentiometer);
    //print the value on the serial monitor screen
    Serial.print("Angle Value in degrees:");
    Serial.println(readAngle(value)); 
    delay(1000); //wait 1000ms before printing next value
}
