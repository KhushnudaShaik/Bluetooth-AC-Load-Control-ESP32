#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

const int relayPin = 23;   // Relay IN connected to GPIO 23

void setup() {
  pinMode(relayPin, OUTPUT);

  // Relay OFF at start (Active LOW relay)
  digitalWrite(relayPin, LOW);

  Serial.begin(115200);
  SerialBT.begin("ESP32_Bulb_Control");
  Serial.println("Bluetooth Ready!");
}

void loop() {
  if (SerialBT.available()) {
    char data = SerialBT.read();

    if (data == '1') {
      digitalWrite(relayPin, HIGH);   // Turn ON bulb
      SerialBT.println("Bulb ON");
      Serial.println("Bulb ON");
    }
    else if (data == '0') {
      digitalWrite(relayPin, LOW);    // Turn OFF bulb
      SerialBT.println("Bulb OFF");
      Serial.println("Bulb OFF");
    }
  }
}
