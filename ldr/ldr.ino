
#define sensorpin 2
int sensorvalue = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
sensorvalue = analogRead(sensorpin);

if (sensorvalue <= 400){
Serial.print("It's night, value is ");
Serial.println(sensorvalue);
}
else if (sensorvalue > 400){
Serial.print("It's day , value is ");
Serial.println(sensorvalue);
}
delay(1000); 
}
