#include <DHT_U.h>
#include <DHT.h>
#define Type DHT11

int sense_pin = 2;
int delay_time = 500;

DHT HT(sense_pin, Type);
float humidity;
float tempC;
float tempF;
float tempK;

void setup() {
  Serial.begin(9600);
  HT.begin();
}

void loop() {
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();
  tempF = (tempC * 9. / 5.) + 32.;
  tempK = tempC + 273.;

  Serial.print("tempC: ");
  Serial.println(tempC);
  Serial.print("tempF: ");
  Serial.println(tempF);
  Serial.print("tempK: ");
  Serial.println(tempK);
  Serial.print("humidity: ");
  Serial.println(humidity);
  delay(delay_time);
}
