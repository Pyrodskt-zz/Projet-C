void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
long nombre = random(256);
  Serial.print(nombre);
}
