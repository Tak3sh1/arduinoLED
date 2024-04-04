const int led01 = 12; 
const int led02 = 10; 
const int led03 = 8; 
const int led04 = 6; 
const int led05 = 4; 
const int led06 = 2;
 
const int potenciometro = 5;
int valorport = 0;
 
void setup(){
   pinMode (led01, OUTPUT);
   pinMode (led02, OUTPUT);  
   pinMode (led03, OUTPUT);  
   pinMode (led04, OUTPUT);  
   pinMode (led05, OUTPUT);  
   pinMode (led06, OUTPUT);  
   Serial.begin(9600);
}
void loop(){
  int valorport = analogRead(potenciometro);
  delay(10);
  if(valorport < 1) {
    Serial.println("DESLIGADO");
    digitalWrite(led01, LOW);  
    digitalWrite(led02, LOW);
    digitalWrite(led03, LOW);
    digitalWrite(led04, LOW);
    digitalWrite(led05, LOW);
    digitalWrite(led06, LOW);
   } 
    else if(valorport < 64) {
    Serial.println("01 LUZ - EXTRA BAIXO");
    digitalWrite(led01, HIGH);  
    digitalWrite(led02, LOW);
    digitalWrite(led03, LOW);
    digitalWrite(led04, LOW);
    digitalWrite(led05, LOW);
    digitalWrite(led06, LOW);
   } 
     else if (valorport < 164){
     Serial.println("02 LUZES - BAIXO");
     digitalWrite(led01, HIGH);  
     digitalWrite(led02, HIGH);
     digitalWrite(led03, LOW);
     digitalWrite(led04, LOW);
     digitalWrite(led05, LOW);
     digitalWrite(led06, LOW);
   }
    else if(valorport < 328){
     Serial.println("03 LUZES - MÉDIO: BAIXO");
     digitalWrite(led01, HIGH);  
     digitalWrite(led02, HIGH);
     digitalWrite(led03, HIGH);
     digitalWrite(led04, LOW);
     digitalWrite(led05, LOW);
     digitalWrite(led06, LOW);
   }
     else if(valorport < 675){
     Serial.println("04 LUZES - MÉDIO: MÉDIO");
     digitalWrite(led01, HIGH);  
     digitalWrite(led02, HIGH);
     digitalWrite(led03, HIGH);
     digitalWrite(led04, HIGH);
     digitalWrite(led05, LOW);
     digitalWrite(led06, LOW);
   }
   else if(valorport < 854){
     Serial.println("05 LUZES - MÉDIO: ALTO");
     digitalWrite(led01, HIGH);  
     digitalWrite(led02, HIGH);
     digitalWrite(led03, HIGH);
     digitalWrite(led04, HIGH);
     digitalWrite(led05, HIGH);
     digitalWrite(led06, LOW);
   }
   else
   { 
     Serial.println("06 LUZES - ALTO");
     digitalWrite(led01, HIGH);  
     digitalWrite(led02, HIGH);
     digitalWrite(led03, HIGH);
     digitalWrite(led04, HIGH);
     digitalWrite(led05, HIGH);
     digitalWrite(led06, HIGH);
   }
}