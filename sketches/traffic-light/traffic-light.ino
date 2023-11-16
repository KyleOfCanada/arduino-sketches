int DELAY_TIME = 3000;
int GREEN_PIN = 7;
int YELLOW_PIN = 4;
int RED_PIN = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(RED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Green light
  digitalWrite(GREEN_PIN, HIGH);
  delay(DELAY_TIME);
  digitalWrite(GREEN_PIN, LOW);
  // Yellow light
  digitalWrite(YELLOW_PIN, HIGH);
  delay(1000);
  digitalWrite(YELLOW_PIN, LOW);
  // Red light
  digitalWrite(RED_PIN, HIGH);
  delay(DELAY_TIME);
  digitalWrite(RED_PIN, LOW);
}