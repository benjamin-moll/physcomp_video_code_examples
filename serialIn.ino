void setup() {
Serial.begin(9600);
pinMode(6,OUTPUT);

}

void loop() {
  if (Serial.available()){
    int inputValue = Serial.read();
    analogWrite(6,inputValue);
  }


}
