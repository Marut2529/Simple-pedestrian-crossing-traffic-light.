int green=8;
int yellow=9;
int red=10;
int push=1;
int buttonstate=1;
int buzzer=2;
void setup() {
  // put your setup code here, to run once:
pinMode(green,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(red,OUTPUT);
pinMode(push,INPUT);
pinMode(buzzer,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(green,HIGH);
buttonstate=digitalRead(push);
if(buttonstate==0){
  delay(500);
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  delay(2000);
  digitalWrite(yellow,LOW);
  digitalWrite(red,HIGH);
  for(int i=0;i<8;i++){
    digitalWrite(buzzer,HIGH);
    delay(500);
    digitalWrite(buzzer,LOW);
    delay(500);
  }
  delay(500);
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  delay(2000);
  digitalWrite(yellow,LOW);
 
  
}
}
