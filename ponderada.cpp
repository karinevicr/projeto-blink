void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // faço o led brilhar com 1,5 segundos
  delay(1500);
  digitalWrite(LED_BUILTIN, LOW); // faz o led brilhar por 0,5 segundos
  delay(500);
}
