 int led=13;
char data;
void setup(){
pinmode(led.output);
serial.begin(9600);
}
viod loop(){
  if(serial.available()>0){
    data = serial.read();
    if (data =='A'){
      digitalWrite(led,HIGH);
  }
else if(data =='B'){
  digitalWrite(led,low);
}
  }
}                           