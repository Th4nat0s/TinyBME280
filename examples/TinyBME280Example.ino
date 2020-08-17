#include <TinyBME280.h>

//+
// For use with an Attiny84A:
// - Connect BMP280 SCL to pin 7
// - Connect BMP280 SDA to pin 8
// - Connect BMP280 SDO to ground
// - Connect a serial terminal using:
// - Enjoy!

void setup() {
  BME280setup();
}

void loop() {

  float t = float(BME280temperature())/100);
  float p = float(BME280pressure())/100)
  float h = float(BME280humidity())/100)

  delay(1000);

}
