
int ledPin = 7; 
int soundPin = 1;        
int thresholdValue = 10; // the threshold to turn on or off the LED

void setup()
{
    pinMode(ledPin, OUTPUT);          
    pinMode(soundPin, INPUT);
}

void loop()
{
    //read the sensorValue on Analog 0
    int sensorValue = analogRead(soundPin); 
    
    if(sensorValue > thresholdValue)
      digitalWrite(ledPin,HIGH);
    else
      digitalWrite(ledPin,LOW);
     delay(10);
    
}
