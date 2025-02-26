#include <Arduino.h>

// Deklarasi pin lampu
int lampu = 25;  // Lampu merah
int lampu2 = 26; // Lampu kuning
int lampu3 = 27; // Lampu hijau

void setup() {
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");

  // Mengatur pin sebagai output
  pinMode(lampu, OUTPUT);
  pinMode(lampu2, OUTPUT);
  pinMode(lampu3, OUTPUT);
}

void loop() {
  // Lampu merah ON
  digitalWrite(lampu, HIGH);
  delay(10000);
  Serial.println("Lampu Merah ON");
  // Lampu merah OFF
  digitalWrite(lampu, LOW);
  Serial.println("Lampu Merah OFF");
  delay(100);

  // Lampu kuning ON
  digitalWrite(lampu2, HIGH);
  Serial.println("Lampu Kuning ON");
  delay(4000);
  // Lampu kuning OFF
  digitalWrite(lampu2, LOW);
  Serial.println("Lampu Kuning OFF");
  delay(100);

  // Lampu hijau ON
  digitalWrite(lampu3, HIGH);
  Serial.println("Lampu Hijau ON");
  delay(10000);
  // Lampu hijau OFF
  digitalWrite(lampu3, LOW);
  Serial.println("Lampu Hijau OFF");
  delay(100);
}