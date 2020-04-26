#define blue A2
#define green A1
#define red A0
#define bt1 A3
#define bt2 A4
#define bt3 A5



void setup() {
  // put your setup code here, to run once:
pinMode(blue,OUTPUT);
pinMode(green,OUTPUT);
pinMode(red,OUTPUT);
pinMode(bt1,INPUT);
pinMode(bt2,INPUT);
pinMode (bt3,INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int but = digitalRead(bt1);
Serial.print("Button One");
Serial.println(but);
//delay(100);
int but1 = digitalRead(bt2);
Serial.print("Button Two");
Serial.println(but1);
//delay(1000);
int but2 = digitalRead(bt3);
Serial.print("Button three");
Serial.println(but2);
//delay(1000);

if (but == 1){
  digitalWrite(red,HIGH);
  
}
if(but == 0){
  digitalWrite(red,LOW);
}
if (but1 == 1){
  digitalWrite(green,HIGH);
  
}
if(but1 == 0){
  digitalWrite(green,LOW);
}
if (but2 == 1){
  digitalWrite(blue,HIGH);
  
}
if(but2 == 0){
  digitalWrite(blue,LOW);
}
}
