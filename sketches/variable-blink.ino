int maxDelay = 3000;
int DELAY_TIME ;
int GREEN_PIN = 7;
int YELLOW_PIN = 4;
int RED_PIN = 2;
int readPin = A5;
float calcVal = 0.;
int pinVal;

void light(int pin) {
  pinVal = analogRead(readPin);
  calcVal = (pinVal) / 1023.;
  DELAY_TIME = calcVal * maxDelay;
  Serial.println(calcVal);
  // Pin light
  digitalWrite(pin, HIGH);
  delay(DELAY_TIME);
  digitalWrite(pin, LOW);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(RED_PIN, OUTPUT);
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  pinVal = analogRead(readPin);
  calcVal = (pinVal) / 1023.;
  DELAY_TIME = calcVal * maxDelay;
  Serial.println(calcVal);
  // Green light
  light(GREEN_PIN);
  // Yellow light
  light(YELLOW_PIN);
  // Red light
  light(RED_PIN);
}