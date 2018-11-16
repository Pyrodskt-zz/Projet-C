/*
const int led = 1;

int Temps = millis();
  float compteur;
  
void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
compteur = 0;
Serial.begin(9600);

}
void battement()
{
  float pou;

  float sensorValue = analogRead(A0);
  float time = millis();
  float coef;
if (compteur < 120)
{
  if (sensorValue > 1.5 )
  { 
    compteur = compteur + 1;
    Serial.print("Time 0: ");
    Serial.print(time);
    Serial.print("\n"); 
    time=time/1000;
    Serial.print("Time 1: ");
    Serial.print(time);
    Serial.print("\n"); 
    coef = 60 / time;
    Serial.print("Coef : ");
    Serial.print(coef);
    Serial.print("\n"); 
    pou=coef*compteur;
    Serial.print("pouls: ");
    Serial.print(pou);
    Serial.print("\n"); 
    Serial.print("compteur :");

    Serial.print(compteur);
    Serial.print("\n");
    //Serial.print("Time: ");
    //Serial.print(time);
    //Serial.print("\n"); 
    //Serial.print("Pouls: ");
    //Serial.print(pou);
    //Serial.print("\n");
}
}
  
  else 
  {
       float time = millis();
       Serial.print(sensorValue);
       Serial.print("\n");
  }
}

  


void loop() {

  // put your main code here, to run repeatedly:
  //battement();
         /*float sensorValue = analogRead(A0);
       Serial.print(sensorValue);
       Serial.print("\n");*/
/*}
*/

unsigned long Temps, Compteur_Coeur = 0, Compteur = 0;
float Frequence_Cardio = 0;

void setup(){
  Serial.begin(9600);
}


void loop(){
  Temps  = millis();
  float Cardio = analogRead(A0);
  if(Compteur == 1){
    Compteur_Coeur += 1;
  }

  if(Cardio >= 1.5){
    Compteur += 1;
  }else{
    Compteur = 0;
  }

  Frequence_Cardio = (float)Compteur_Coeur/Temps*60000;
  Serial.println(Frequence_Cardio);
}

