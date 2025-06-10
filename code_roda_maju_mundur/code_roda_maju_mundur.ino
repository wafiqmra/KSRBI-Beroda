const int enKiri = 26;
const int in1Kiri = 14;
const int in2Kiri = 27;

const int enKanan = 32;
const int in1Kanan = 25;
const int in2Kanan = 33;

void setup() {
  Serial.begin(115200);

  pinMode(enKiri, OUTPUT);
  pinMode(in1Kiri, OUTPUT);
  pinMode(in2Kiri, OUTPUT);

  pinMode(enKanan, OUTPUT);
  pinMode(in1Kanan, OUTPUT);
  pinMode(in2Kanan, OUTPUT);

  // Aktifkan driver motor full speed
  digitalWrite(enKiri, HIGH);
  digitalWrite(enKanan, HIGH);

  Serial.println("🚀 Sistem siap. Mulai loop...");
}

void loop() {
  maju();
  delay(2000);

  mundur();
  delay(2000);

  berhenti();
  delay(1000);
}

void maju() {
  digitalWrite(in1Kiri, HIGH);
  digitalWrite(in2Kiri, LOW);

  digitalWrite(in1Kanan, HIGH);
  digitalWrite(in2Kanan, LOW);

  Serial.println("🚗 Maju full speed");
}

void mundur() {
  digitalWrite(in1Kiri, LOW);
  digitalWrite(in2Kiri, HIGH);

  digitalWrite(in1Kanan, LOW);
  digitalWrite(in2Kanan, HIGH);

  Serial.println("↩️ Mundur full speed");
}

void berhenti() {
  digitalWrite(in1Kiri, LOW);
  digitalWrite(in2Kiri, LOW);

  digitalWrite(in1Kanan, LOW);
  digitalWrite(in2Kanan, LOW);

  Serial.println("🛑 Berhenti");
}
