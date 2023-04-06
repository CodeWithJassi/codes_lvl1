int time = 500;
int time2 = 100;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<5; i++)
   digitalWrite(13,HIGH);
   delay(time);
   digitalWrite(13,LOW);
   digitalWrite(12,HIGH);
   delay(time);
   digitalWrite(12,LOW);
   digitalWrite(11,HIGH);
   delay(time);
   digitalWrite(11,LOW);
   digitalWrite(10,HIGH);
   delay(time);
   digitalWrite(10,LOW);
  for(int j=0; j<5; j++)
   digitalWrite(13,HIGH);
   delay(time2);
   digitalWrite(13,LOW);
   digitalWrite(12,HIGH);
   delay(time2);
   digitalWrite(12,LOW);
   digitalWrite(11,HIGH);
   delay(time2);
   digitalWrite(11,LOW);
   digitalWrite(10,HIGH);
   delay(time2);
   digitalWrite(10,LOW);
  

}
