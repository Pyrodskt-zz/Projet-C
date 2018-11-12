
const int led = 9;


void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT); 
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 int sensorValue = analogRead(A0);
  Serial.print(sensorValue);
  Serial.print("\n");
  if (sensorValue > 0)
  { 
    digitalWrite(led, HIGH);
  
    
    }
    else 
    {
      digitalWrite(led, LOW);
      }


}
