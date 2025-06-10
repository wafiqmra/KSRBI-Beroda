const int enA = 26;
const int in1 = 14;
const int in2 = 27;

const int enB = 25;
const int in3 = 32;
const int in4 = 33;

void setup() {
  Serial.begin(115200);

  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  digitalWrite(enA, HIGH);
  digitalWrite(enB, HIGH);
}

void loop() {
  // Maju 5 detik
  digitalWrite(in1, HIGH); digitalWrite(in2, LOW);  // motor kiri maju
  digitalWrite(in3, HIGH); digitalWrite(in4, LOW);  // motor kanan maju
  Serial.println("🚗 Maju");
  delay(5000);

  // Belok kiri (motor kanan jalan)
  digitalWrite(in1, LOW); digitalWrite(in2, LOW);   // motor kiri mati
  digitalWrite(in3, HIGH); digitalWrite(in4, LOW);  // motor kanan maju
  Serial.println("↩️ Belok kiri");
  delay(1000);

  // Maju 5 detik lagi
  digitalWrite(in1, HIGH); digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH); digitalWrite(in4, LOW);
  Serial.println("🚗 Maju lagi");
  delay(5000);

  // Belok kiri lagi
  digitalWrite(in1, LOW); digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH); digitalWrite(in4, LOW);
  Serial.println("↩️ Belok kiri lagi");
  delay(1000);

  // Mundur 5 detik
  digitalWrite(in1, LOW); digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW); digitalWrite(in4, HIGH);
  Serial.println("⏪ Mundur");
  delay(5000);

  // Ulang dari awal
}
