int delay_time = 500;
int rgb_red_pin = 11;
int rgb_blue_pin = 10;
int rgb_green_pin = 9;

int red_val = 0;
int green_val = 0;
int blue_val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(rgb_red_pin, OUTPUT);
  pinMode(rgb_blue_pin, OUTPUT);
  pinMode(rgb_green_pin, OUTPUT);
}

void loop() {
    // RGB light random color
  red_val = rand() % 255;
  green_val = rand() % 255;
  blue_val = rand() % 255;
  // RGB light on
  analogWrite(rgb_red_pin, red_val);
  analogWrite(rgb_green_pin, green_val);
  analogWrite(rgb_blue_pin, blue_val);

  delay(delay_time);
}