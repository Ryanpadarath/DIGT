const  ledPin=13;
const byte PAW1=1;
const byte PAW2=2;
const byte PAW3=3;
const byte PAW4=4;
void setup() {
  pinmode(13, INPUT):// put your setup code here, to run once:
pinmode(LEDPIN, OUTPUT);
Pinmode(PAWPIN, INPUT);
pinmode(PAWPIN1, INPUT);
Pinmode(PAWPIN2, INPUT);
pinmode(PAWPIN3, INPUT);
pinmode(PAWPIN4, INPUT);
void loop() {
  /void loop() {/ put your main code here, to run repeatedly:
if(digitalRead(PAWPIN1) == HIGH){
}
