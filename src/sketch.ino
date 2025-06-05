#include <DHT.h>

// Pinos
#define DHTPIN 15
#define DHTTYPE DHT22

#define TRIG_PIN 5
#define ECHO_PIN 18
#define LDR_PIN 34

#define BUTTON_PIN 13

#define LED_VERDE 21
#define LED_AMARELO 22
#define LED_VERMELHO 23

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  pinMode(LDR_PIN, INPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP); 

  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
}

void loop() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();
  int ldrValue = analogRead(LDR_PIN);
  bool emergency = digitalRead(BUTTON_PIN) == LOW;

  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  long duration = pulseIn(ECHO_PIN, HIGH);
  float distance = duration * 0.034 / 2;

  Serial.print("Temp: "); Serial.print(temp);
  Serial.print(" C | Hum: "); Serial.print(hum);
  Serial.print(" % | Dist: "); Serial.print(distance);
  Serial.print(" cm | LDR: "); Serial.print(ldrValue);
  Serial.print(" | Emergência: "); Serial.println(emergency ? "SIM" : "NÃO");

  desligarTodosLEDs();


  if (emergency) {
    digitalWrite(LED_VERMELHO, HIGH);
    delay(300);
    digitalWrite(LED_VERMELHO, LOW);
    delay(300);
  } else if (temp > 35 || hum < 30) {
    digitalWrite(LED_AMARELO, HIGH);
  } else if (distance < 10 || hum > 80) {
    digitalWrite(LED_VERMELHO, HIGH);
  } else {
    digitalWrite(LED_VERDE, HIGH);
  }

  delay(1000);
}

void desligarTodosLEDs() {
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, LOW);
}
