#include <DHT.h>
int dhtpin=4;
DHT dht(dhtpin,DHT11);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float temp=dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %   ");

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  delay(2000);
}
