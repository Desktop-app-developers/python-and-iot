#define row_1 22
#define row_2 24
#define row_3 26
#define row_4 28
#define row_5 30
#define row_6 32
#define row_7 34
#define row_8 36

//colum
#define col_1 23
#define col_2 25
#define col_3 27
#define col_4 29
#define col_5 31
#define col_6 33
#define col_7 35
#define col_8 37

const byte rows[]= {
  row_1,row_2, row_3,row_4, row_5,row_6, row_7,row_8
};
byte digital[]={B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B1111111,11111111};
byte smile[]={B01111110,B10000001,B10100101,B00000000,B00011000,B01000010,B00111100,B00000000};
byte nutral[] = {B11111111,B10000001,B10100101,B10000001,B10000001,B10111101,B10000001,B11111111};
byte angry[] = { B11111111,B10000001,B10100101,B10000001,B10000000,B00111100,B01000010,B00000000};


byte digit[] =
{B01101111,B01000010,B10001111,B11001011,B11100010,B11100001,B11101101,B01000011,B11101111,B11101011,B11100111,B11101100,B00101101,B11001110,B10101101,B10100101,B00000000};

float timeCounter = 0;





void setup() {
// put your setup code here, to run once:
pinMode(row_1,OUTPUT);
pinMode(row_2,OUTPUT);
pinMode(row_3,OUTPUT);
pinMode(row_4,OUTPUT);
pinMode(row_5,OUTPUT);
pinMode(row_6,OUTPUT);
pinMode(row_7,OUTPUT);
pinMode(row_8,OUTPUT);

pinMode(col_1,OUTPUT);
pinMode(col_2,OUTPUT);
pinMode(col_3,OUTPUT);
pinMode(col_4,OUTPUT);
pinMode(col_5,OUTPUT);
pinMode(col_6,OUTPUT);
pinMode(col_7,OUTPUT);
pinMode(col_8,OUTPUT);


}
//
void loop() {
delay(5);
timeCounter += 1;
if(timeCounter < 200){

drawScreen(digital);

}
else if(timeCounter < 230){
  
}else if(timeCounter < 400){
  drawScreen(smile);
}
else if(timeCounter < 430){
  
}
else if(timeCounter < 600){
  drawScreen(angry);
}else if(timeCounter < 630){
  
}
else if(timeCounter < 800){
  drawScreen(nutral);
}
else{
  
}
}

void drawScreen(byte buffer2[]){
  for (byte i=0; i < 8; i++){
    setColumns(buffer2[i]);
    digitalWrite(rows[i],HIGH);
    delay(2);
    digitalWrite(rows[i],LOW);
    
  }
}
void setColumns(byte b){
  digitalWrite(col_1,(~b >> 0)&0x01);
  digitalWrite(col_2,(~b >> 1)&0x01);
  digitalWrite(col_3,(~b >> 2)&0x01);
  digitalWrite(col_4,(~b >> 3)&0x01);
  digitalWrite(col_5,(~b >> 4)&0x01);
  digitalWrite(col_6,(~b >> 5)&0x01);
  digitalWrite(col_7,(~b >> 6)&0x01);
  digitalWrite(col_8,(~b >> 7)&0x01);
  };
