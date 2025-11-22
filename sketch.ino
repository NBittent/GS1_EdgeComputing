// Gabriel Ferreira(rm:568474)
//Nicolas Bittencourt(rm:568108) 
//Pedro Chiarantano(rm:567396)
// Global Solutions 2025 – Arduino UNO (Wokwi compatível)

#include "DHT.h"  // ← WOKWI USA ESTA BIBLIOTECA

// Sensor DHT22
#define DHTPIN 7
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

#define LDR_PIN A0
#define MQ2_PIN A1
#define BOTAO_PIN 2

void setup() {
  Serial.begin(9600);

  pinMode(LDR_PIN, INPUT);
  pinMode(MQ2_PIN, INPUT);
  pinMode(BOTAO_PIN, INPUT_PULLUP);

  dht.begin();

  Serial.println("Sistema iniciado (UNO + DHT22 + LDR + MQ2)");
}

void loop() {

  float temp = dht.readTemperature();
  float umid = dht.readHumidity();

  int luz = analogRead(LDR_PIN);
  int gas = analogRead(MQ2_PIN);

  bool fadiga = !digitalRead(BOTAO_PIN);

  Serial.println("----- Monitoramento -----");
  Serial.print("Temperatura: "); Serial.println(temp);
  Serial.print("Umidade: "); Serial.println(umid);
  Serial.print("Luminosidade: "); Serial.println(luz);
  Serial.print("Gás MQ2: "); Serial.println(gas);
  Serial.print("Fadiga: "); Serial.println(fadiga ? "SIM" : "NÃO");
  Serial.println("--------------------------\n");

  delay(2000);
}
