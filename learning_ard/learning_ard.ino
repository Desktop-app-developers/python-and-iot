#define blue 8
#define white 9
#define red 10 
#define push 2
#define push1 3
#define push2 A7

//RGB
#define Blue A2
#define Green A1
#define Red A0
int counter = 0;


void setup() {
  // put your setup code here, to run once:
pinMode(blue,OUTPUT);
pinMode(white,OUTPUT);
pinMode(red,OUTPUT);
pinMode(push,INPUT);
pinMode(push1,INPUT);
pinMode(push2,INPUT);
pinMode(Blue,OUTPUT);
pinMode(Green,OUTPUT);
pinMode(Red,OUTPUT);

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  counter +=1;
  
//  delay(500);
//  digitalWrite(blue,LOW);
//  delay(500);
//   

int buttonstate = digitalRead(push);
Serial.print("light is on");
//Serial.println(counter);
Serial.println(buttonstate);
if (buttonstate == 0){
digitalWrite(blue,LOW);
}
else{
  digitalWrite(blue,HIGH);
  
  }
int newst = digitalRead(push1);
Serial.println(newst);
int newbt = digitalRead(push2);
Serial.println(newbt);

if (newbt == 1){
   digitalWrite(red,HIGH);
  
}
else{
  digitalWrite(red,LOW);
}
if (newst == 1){
   digitalWrite(white,HIGH);
  
}
else
{
  digitalWrite(white,LOW);
}

if (newbt == 0){
   digitalWrite(Blue,HIGH);
  
}
else{
  digitalWrite(Blue,LOW);
}
if (newst == 0){
   digitalWrite(Green,HIGH);
  
}
else{
  digitalWrite(Green,LOW);
}
if (newst == 0){
   digitalWrite(Red,HIGH);
  
}
else{
  digitalWrite(Red,LOW);
}
}
