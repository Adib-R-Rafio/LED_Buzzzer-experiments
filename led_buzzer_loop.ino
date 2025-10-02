int pin=11;  
int del=100;

void setup() {
 pinMode(pin, OUTPUT);
 pinMode(6, OUTPUT);

}

void loop() {

  for(int x=1; x<=255; x+=100){
    analogWrite(pin, x );
    delay(del);
  }
  for(int x=255; x>=1; x-=100){
    analogWrite(pin, x);
    delay(del);
  }
  for(int y=0; y<=100; y+=100){
    analogWrite(6, y);
    delay(del);
  }
  for(int y=100; y>=0; y-=100){
    analogWrite(6, y);
    delay(del);
  }  
}