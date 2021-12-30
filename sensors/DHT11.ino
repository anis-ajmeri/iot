#include<DHT.h>
DHT dht(4,DHT11);
void setup() {
  delay(2000);
  Serial.begin(9600);
  dht.begin();
}

void loop() {
delay(2000);
float humidity = dht.readHumidity();
float temperatureC=dht.readTemperature();
float temperatureF =dht.readTemperature(true);
float heatIndex = dht.computeHeatIndex(temperatureF,humidity);
Serial.print("Humidity: ");
Serial.println(humidity);
Serial.print("Temperature in C: ");
Serial.println(temperatureC);
Serial.print("Temperature in F: ");
Serial.println(temperatureF);
Serial.print("Heat Index: ");
Serial.println(heatIndex);
Serial.println("_____");
}