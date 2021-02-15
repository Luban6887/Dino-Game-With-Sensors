void setup(){
  pinMode(8, OUTPUT);
  pinMode(3, INPUT);
  Serial.begin(9600);
}
void loop(){
  if (digitalRead(3) == LOW){
    Serial.println('A');
    digitalWrite(8, HIGH);
    delay(150);
}
  else{
    Serial.println('B');
    digitalWrite(8,LOW);
  }
}
