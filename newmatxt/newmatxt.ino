int latch = 52;
int clock = 50;
int data = 53;

void setup() {
  
  // put your setup codep here, to run once:
pinMode(latch,OUTPUT);
pinMode(clock,OUTPUT);
pinMode(data,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(latch,LOW);
shiftOut(data,clock,HIGH);
digitalWrite(latch,HIGH);
}
