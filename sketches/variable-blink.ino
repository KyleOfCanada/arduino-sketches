int DELAY_TIME = 3000;
int GREEN_PIN = 7;
int YELLOW_PIN = 4;
int RED_PIN = 2;
int readPin = A5;
float calcVal = 0;
int pinVal = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(RED_PIN, OUTPUT);
  pinMode(readPin, INPUT);
}

void loop() {
  pinVal = analogRead(readPin);
  calcVal = (5 / 1023.) * (pinVal);
  DELAY_TIME = calcVal;
  Serial.println(calcVal);
  // Green light
  digitalWrite(GREEN_PIN, HIGH);
  delay(DELAY_TIME);
  digitalWrite(GREEN_PIN, LOW);
  // Yellow light
  digitalWrite(YELLOW_PIN, HIGH);
  delay(DELAY_TIME);
  digitalWrite(YELLOW_PIN, LOW);
  // Red light
  digitalWrite(RED_PIN, HIGH);
  delay(DELAY_TIME);
  digitalWrite(RED_PIN, LOW);
}