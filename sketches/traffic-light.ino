void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Green light
  digitalWrite(7, HIGH);
  delay(5000);
  digitalWrite(7, LOW);
  // Yellow light
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(4, LOW);
  // Red light
  digitalWrite(2, HIGH);
  delay(5000);
  digitalWrite(2, LOW);
}