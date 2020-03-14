#include <Servo.h>
Servo groveServo; //create a object

int potentiometer = 0; // potentiometer attached to A0
int servoPin = 2; // servo is attached to D2
int shaft;

void setup()
{
    groveServo.attach(servoPin); 
    pinMode(potentiometer, INPUT);
}

void loop()
{
    shaft = analogRead(potentiometer);
    shaft = map(shaft, 0, 1023, 0, 179);
    //analog input data range from 1~1023, but servo
    groveServo.write(shaft);             //only reflects to data ranging from 1~179.
    delay(15);
}
