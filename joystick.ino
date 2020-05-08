void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);

}

void loop() {
  int x = analogRead(A0);
  delay(1);
  int y = analogRead(A1);
  delay(1);
  int button = digitalRead(2);
  Serial.print(x);
  Serial.print(",");
  Serial.print(y);
  Serial.print(",");
  Serial.println(button);
}
