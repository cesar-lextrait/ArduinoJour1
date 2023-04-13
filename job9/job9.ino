#define LM35 A0

void setup(){
  Serial.begin(9600);  // ouvre le port série
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  float lmvalue = analogRead(LM35);
  float tempr = (lmvalue * 500)/1023;
  Serial.println(tempr);
  delay(10); 


if (tempr > 22)
{
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
}

else{
  
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
}
}
