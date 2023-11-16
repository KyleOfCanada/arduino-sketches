int passiveBuzz = 9;
int buzzMax = 3;

void setup() {
    pinMode(passiveBuzz, OUTPUT);

}

void loop() {
  analogWrite(passiveBuzz, buzzMax);
  delay(100);
  analogWrite(passiveBuzz, 0);
  delay(100);
}