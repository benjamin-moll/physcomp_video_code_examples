void setup() {
Serial.begin(9600); //initialize serial communications
}

void loop() {
  int potentiomter = analogRead(A0);                  //read the input pin
  int mappedPot = map(potentiometer,0,1023,0,255);    //remap the pot value to 0 to 255
  Serial.println(mappedPot);                          //print it out to the serial monitor
  delay(1);                                           //slight delay to stabilize 
}
