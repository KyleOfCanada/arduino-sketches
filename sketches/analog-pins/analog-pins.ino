int redPin = A4;

void setup() {
    pinMode(redPin, OUTPUT);
}

void loop() {
    // 255 is max voltage, can adjust to intermediate values
    analogWrite(redPin, 255);
}
