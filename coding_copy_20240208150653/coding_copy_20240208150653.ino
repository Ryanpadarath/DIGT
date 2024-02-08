//shared with mr hansen successfully :)

const byte ledPin=13;
const byte PAW1=1;
const byte PAW2=2;
const byte PAW3=3;
const byte PAW4=4;

void setup() {
pinmode(LEDPIN, OUTPUT);
pinmode(PAWPIN1, INPUT);
Pinmode(PAWPIN2, INPUT);
pinmode(PAWPIN3, INPUT);
pinmode(PAWPIN4, INPUT);
}

void loop() {
if(digitalRead(PAWPIN1) == HIGH){
}
}
