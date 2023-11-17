int readPin = A2;
float scaleF = 0.02;
float temp = 1.;
float readVal;
float calVal;

void setup() {
    pinMode(readPin, INPUT);
    Serial.begin(9600);
}

void loop() {
    readVal = analogRead(readPin);
    calVal = readVal * (5.0/1023.);
    temp = calVal / scaleF;
    Serial.println(temp);
    delay(1000);
}
