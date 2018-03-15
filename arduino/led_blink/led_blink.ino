#include <arduino.h>


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(115200);
}


void loop() {
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED: AUS");
  
  delay(1000);
  
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED: EIN");
  
  delay(1000);
}

