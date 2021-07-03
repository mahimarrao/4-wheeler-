char data;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
digitalWrite(13,LOW);

Serial.println("hi");
}

void loop() {

  while(Serial.available())
  {
    data = Serial.read();
  }
  if(data =='1')
  {
    digitalWrite(13,HIGH);
  }
  else if(data == '0')
  {
    digitalWrite(13,LOW);
  }
  // put your main code here, to run repeatedly:

}
