// pwm = "pulse width modulation"
int redPin = 9;

void setup() {
    pinMode(redPin, OUTPUT);
}

void loop() {
    // 255 is max voltage, can adjust to intermediate values
    analogWrite(redPin, 255);
    delay(1000);
    analogWrite(redPin, 40);
    delay(1000);
}
