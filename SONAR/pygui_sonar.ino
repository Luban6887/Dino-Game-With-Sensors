int trig = A0;
int echo = A1;
int led = 8;
int distance;
float duration;

void setup(){
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trig, LOW);
  delay(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo,HIGH);
  distance = (duration*0.334)/2;
  Serial.println(distance);
  if(distance<600){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
 delay(50);
}
