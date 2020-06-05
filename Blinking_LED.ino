void setup() {
  pinMode(3, OUTPUT);

}

void loop() {
  digitalWrite(3, HIGH); //LED on
  delay(1000); //Wait for a second
  digitalWrite(3, LOW); //LED off
  delay(1000);
}
