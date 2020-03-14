int ledPin=7;
int lightSensor = 2;
int thresholdvalue=400; 

void setup()
{
    pinMode(ledPin,OUTPUT);           
    pinMode(lightSensor, INPUT);
}

void loop()
{
    
    int sensorValue = analogRead(lightSensor); 
    
    if(sensorValue>thresholdvalue)
    {
        digitalWrite(ledPin,HIGH);
    }
    else
    {
        digitalWrite(ledPin,LOW);
    }
}
