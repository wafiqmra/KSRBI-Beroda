#include <ESP32Servo.h>  // Library untuk mengontrol motor servo

Servo servoKiri;
Servo servoKanan;

const int pinServoKiri = 17;   // GPIO 17 (D17 di ESP32)
const int pinServoKanan = 16;  // GPIO 16 (D16 di ESP32)

void setup() {
  Serial.begin(9600);

  servoKiri.attach(pinServoKiri);
  servoKanan.attach(pinServoKanan);

  servoKiri.write(90);
  servoKanan.write(90);
}

void loop() {
  // BUKA CAPIT
  servoKiri.write(0);
  servoKanan.write(180);
  Serial.println("Capit BUKA");
  delay(2000);  // Tunggu 2 detik

  // TUTUP CAPIT
  servoKiri.write(90);
  servoKanan.write(90);
  Serial.println("Capit TUTUP");
  delay(2000);  // Tunggu 2 detik
}