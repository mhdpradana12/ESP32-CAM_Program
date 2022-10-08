void setup(){
  pinMode(4, OUTPUT);
}
 
void loop(){
  digitalWrite(4, HIGH);
  delay(2500);
  digitalWrite(4, LOW);
  delay(2500);
}
