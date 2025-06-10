const int trigPin = 5;   // GPIO5 untuk Trig
const int echoPin = 18;  // GPIO18 untuk Echo

void setup() {
  Serial.begin(115200);  // Inisialisasi Serial Monitor
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // 1. Kirim pulse 10μs ke Trig
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // 2. Baca durasi Echo (μs) dan hitung jarak (cm)
  float distance = pulseIn(echoPin, HIGH) * 0.034 / 2;

  // 3. Tampilkan HANYA di Serial Monitor
  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);  // Jeda 0.5 detik
}