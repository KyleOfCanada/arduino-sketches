int readPin = A5;
float calcVal = 0;
int pinVal = 0;

void setup() {
    pinMode(readPin, INPUT);
    Serial.begin(9600);
}

void loop() {
    pinVal = analogRead(readPin);
    calcVal = (5 / 1023.) * (pinVal);
    Serial.println(calcVal);
    delay(500);
}