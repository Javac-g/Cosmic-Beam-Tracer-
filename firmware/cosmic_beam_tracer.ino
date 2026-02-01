#include "config.h"

volatile unsigned long eventCount = 0;
unsigned long lastReport = 0;

void IRAM_ATTR onPulse() {
  eventCount++;
}

void setup() {
  Serial.begin(9600);
  pinMode(GEIGER_PIN, INPUT);

  attachInterrupt(digitalPinToInterrupt(GEIGER_PIN), onPulse, FALLING);

  Serial.println("Cosmic Beam Tracer started");
}

void loop() {
  unsigned long now = millis();

  if (now - lastReport >= REPORT_INTERVAL) {
    noInterrupts();
    unsigned long count = eventCount;
    eventCount = 0;
    interrupts();

    Serial.print("Events per ");
    Serial.print(REPORT_INTERVAL / 1000);
    Serial.print("s: ");
    Serial.println(count);

    lastReport = now;
  }
}
