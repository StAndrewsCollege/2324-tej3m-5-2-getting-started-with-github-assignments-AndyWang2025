void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  tone(4,587,500);
  delay(500);
  digitalWrite(13,LOW);
  tone(4,659,500);
  delay(500); 
  digitalWrite(13,HIGH);
  tone(4,783,1000);
  delay(1000);
  digitalWrite(13,LOW);
  tone(4,740,500);
  delay(500);  
  digitalWrite(13,HIGH);
  tone(4,466,250);
  delay(250);
  
  
}
