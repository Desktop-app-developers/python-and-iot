
//using for loopto switch or blink led in arduino
int led;

void setup() {
  // put your setup code here, to run once:
for(led =2;led<6;led++){
  pinMode(led,OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
  for(led =2;led<6;led++){
    digitalWrite(led,HIGH);
    delay (1000);
    digitalWrite(led,LOW);
    delay (1000);
  }
for(led =6;led>2;led--){
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  delay(500);
}
}
