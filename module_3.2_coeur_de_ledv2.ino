int incomingByte=0;
byte SerialOK=0;
int pin4=4;
int pin5=5;
int pin6=6;
int pin7=7;
int pin8=8;
int pin9=9;
int pin10=10;
int pin11=11;
int pin12=12;
int pin13=13;
int timebat=0;
int nbled=0;
void setup() {
  // put your setup code here, to run once:
pinMode(pin4, OUTPUT);
pinMode(pin5, OUTPUT);
pinMode(pin6, OUTPUT);
pinMode(pin7, OUTPUT);
pinMode(pin8, OUTPUT);
pinMode(pin9, OUTPUT);
pinMode(pin10, OUTPUT);
pinMode(pin11, OUTPUT);
pinMode(pin12, OUTPUT);
pinMode(pin13, OUTPUT);
Serial.begin(9600);
Serial.print("Veuillez saisir le mode d'action  : 1= Battement, 2= 1 LED sur 2, 3= 1 LED sur 3, 4= 1 LED specifique, 5= Chenille");
while(SerialOK==0){
  if(Serial.available()>0){
    delay(5);
    incomingByte = Serial.read();
    if(incomingByte=='1'){
    Serial.println("Le mode Battement va etre exécuté");
    SerialOK=1;
    }
    else if(incomingByte=='2'){
    Serial.println("Le mode 1 LED sur 2 va etre exécuté");
    SerialOK=1;
    }
    else if(incomingByte=='3'){
    Serial.println("Le mode 1 LED sur 3 va etre exécuté");
    SerialOK=1;
    }
    else if(incomingByte=='4'){
    Serial.println("Le mode 1 LED specifique va etre exécuté");
    SerialOK=1;
    Serial.print("Quelle Led voulez vous allumer(entre 0 et 9) ?");
    nbled=Serial.read();
    }
    else if(incomingByte=='5'){
    Serial.println("Le mode Chenille va etre exécuté");
    }
    SerialOK=1;
  }
   else{ 
      Serial.println("Ce mode n existe pas");
      }
}

}

void loop() {
  // put your main code here, to run repeatedly:
if(incomingByte=='1'){
  battement();
}
else if(incomingByte=='2'){
  demiled();
}
else if(incomingByte=='3'){
  tierled();
}
else if(incomingByte=='4'){
  monoled();
}
else{
  chenille();
}
}
int battement(){
    digitalWrite(pin4 ,HIGH);
    digitalWrite(pin5 ,HIGH);
    digitalWrite(pin6 ,HIGH);
    digitalWrite(pin7 ,HIGH);
    digitalWrite(pin8 ,HIGH);
    digitalWrite(pin9 ,HIGH);
    digitalWrite(pin10 ,HIGH);
    digitalWrite(pin11 ,HIGH);
    digitalWrite(pin12 ,HIGH);
    digitalWrite(pin13 ,HIGH);
    delay(1000);
    digitalWrite(pin4 ,LOW);
    digitalWrite(pin5 ,LOW);
    digitalWrite(pin6 ,LOW);
    digitalWrite(pin7 ,LOW);
    digitalWrite(pin8 ,LOW);
    digitalWrite(pin9 ,LOW);
    digitalWrite(pin10 ,LOW);
    digitalWrite(pin11 ,LOW);
    digitalWrite(pin12 ,LOW);
    digitalWrite(pin13 ,LOW);
    delay(1000);
  }
int demiled(){
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5 ,LOW);
  digitalWrite(pin6 ,HIGH);
  digitalWrite(pin7 ,LOW);
  digitalWrite(pin8 ,HIGH);
  digitalWrite(pin9 ,LOW);
  digitalWrite(pin10 ,HIGH);
  digitalWrite(pin11 ,LOW);
  digitalWrite(pin12 ,HIGH);
  digitalWrite(pin13 ,LOW);
  delay(1000);
  digitalWrite(pin4 ,LOW);
  digitalWrite(pin5 ,HIGH);
  digitalWrite(pin6 ,LOW);
  digitalWrite(pin7 ,HIGH);
  digitalWrite(pin8 ,LOW);
  digitalWrite(pin9 ,HIGH);
  digitalWrite(pin10 ,LOW);
  digitalWrite(pin11 ,HIGH);
  digitalWrite(pin12 ,LOW);
  digitalWrite(pin13 ,HIGH);
  delay(1000);
}
int tierled(){
  digitalWrite(pin4 ,HIGH);
  digitalWrite(pin5 ,LOW);
  digitalWrite(pin6 ,LOW);
  digitalWrite(pin7 ,HIGH);
  digitalWrite(pin8 ,LOW);
  digitalWrite(pin9 ,LOW);
  digitalWrite(pin10 ,HIGH);
  digitalWrite(pin11 ,LOW);
  digitalWrite(pin12 ,LOW);
  digitalWrite(pin13 ,HIGH);
  delay(1000);
  digitalWrite(pin4 ,LOW);
  digitalWrite(pin5 ,HIGH);
  digitalWrite(pin6 ,LOW);
  digitalWrite(pin7 ,LOW);
  digitalWrite(pin8 ,HIGH);
  digitalWrite(pin9 ,LOW);
  digitalWrite(pin10 ,LOW);
  digitalWrite(pin11 ,HIGH);
  digitalWrite(pin12 ,LOW);
  digitalWrite(pin13 ,LOW);
  delay(1000);
  digitalWrite(pin4 ,LOW);
  digitalWrite(pin5 ,LOW);
  digitalWrite(pin6 ,HIGH);
  digitalWrite(pin7 ,LOW);
  digitalWrite(pin8 ,LOW);
  digitalWrite(pin9 ,HIGH);
  digitalWrite(pin10 ,LOW);
  digitalWrite(pin11 ,LOW);
  digitalWrite(pin12 ,HIGH);
  digitalWrite(pin13 ,LOW);
  delay(1000);
}
int monoled(){
  int i=0;
  if (nbled==0){
    i=pin4;
  }
  else if(nbled==1){
    i=pin5;
  }
  else if(nbled==2){
    i=pin6;
  }
  else if(nbled==3){
    i=pin7;
  }
  else if(nbled==4){
    i=pin8;
  }
  else if(nbled==5){
    i=pin9;
  }
  else if(nbled==6){
    i=pin10;
  }
  else if(nbled==7){
    i=pin11;
  }
  else if(nbled==8){
    i=pin12;
  }
  else if(nbled==9){
    i=pin13;
  }
  digitalWrite(i, HIGH);
  delay(1000);
  digitalWrite(i, LOW);
}
int chenille(){
  digitalWrite(pin4, HIGH);
  delay(1000);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, HIGH);
  delay(1000);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, HIGH);
  delay(1000);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, HIGH);
  delay(1000);
  digitalWrite(pin7, LOW);
  digitalWrite(pin8, HIGH);
  delay(1000);
  digitalWrite(pin8, LOW);
  digitalWrite(pin9, HIGH);
  delay(1000);
  digitalWrite(pin9, LOW);
  digitalWrite(pin10, HIGH);
  delay(1000);
  digitalWrite(pin10, LOW);
  digitalWrite(pin11, HIGH);
  delay(1000);
  digitalWrite(pin11, LOW);
  digitalWrite(pin12, HIGH);
  delay(1000);
  digitalWrite(pin12, LOW);
  digitalWrite(pin13, HIGH);
  delay(1000);
  digitalWrite(pin13, LOW);
  delay(1000);
}
