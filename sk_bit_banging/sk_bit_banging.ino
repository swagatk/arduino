#define OND 700
#define TOTD 1000
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delayMicroseconds(OND); // 10% dutycycle @ 1 KHz
  digitalWrite(13, LOW);
  delayMicroseconds(TOTD-OND);
}
