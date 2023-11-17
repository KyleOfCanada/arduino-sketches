// settings and pin variables
int maxDelay = 3000;
int GREEN_PIN = 7;
int YELLOW_PIN = 4;
int RED_PIN = 2;
int rgb_red_pin = 11;
int rgb_blue_pin = 10;
int rgb_green_pin = 9;
int readPin = A5;

int DELAY_TIME;
int red_val = 0;
int green_val = 0;
int blue_val = 0;
float calcVal = 0.;
int pinVal;

void light(int pin) {
  pinVal = analogRead(readPin);
  calcVal = (pinVal) / 1023.;
  DELAY_TIME = (calcVal + .001) * maxDelay;
  Serial.println(calcVal);
  // RGB light random color
  red_val = rand() % 255;
  green_val = rand() % 255;
  blue_val = rand() % 255;
  // RGB light on
  analogWrite(rgb_red_pin, red_val);
  analogWrite(rgb_green_pin, green_val);
  analogWrite(rgb_blue_pin, blue_val);
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
  pinMode(rgb_red_pin, OUTPUT);
  pinMode(rgb_blue_pin, OUTPUT);
  pinMode(rgb_green_pin, OUTPUT);
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // Green light
  light(GREEN_PIN);
  // Yellow light
  light(YELLOW_PIN);
  // Red light
  light(RED_PIN);
}