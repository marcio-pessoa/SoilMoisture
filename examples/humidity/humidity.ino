#include <SoilMoisture.h>

SoilMoisture humidity(0);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(humidity.sensorRead());
  delay(1000);
}
