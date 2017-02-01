/************************************************************************
**                                                                     **
**                             TITOL:                                  **
**                                                                     **
**                                                                     **
**   Nom : Yassine hakar                             DATA: 12/01/2017  **
************************************************************************/

//****************************INCLUDE ***********************************


//*************************** VARIABLES *********************************
 int led1 = 5;
 int led2 = 6;
 int led3 = 7;
 int led4 = 8;
 int sensorValue = 0;

//**************************** SERUP ************************************


void setup() { 


  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(1, OUTPUT);
  
  }   

//******************************LOOP*************************************


void loop() {                        //inicia el bucle del probrama void loop()  {

sensorValue = analogRead(A0);
analogWrite(1,sensorValue/4) ;

digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
  delay(500); 
  
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, HIGH);
  delay(500);  
  
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
digitalWrite(led4, LOW);
  delay(500);

digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH);
  delay(500);
  
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
  delay(500);

digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
digitalWrite(led4, HIGH);
  delay(500);

digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
  delay(500);
  
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH);
  delay(500);

  
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
  delay(500);
  
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, HIGH);
  delay(500);

digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
digitalWrite(led4, LOW);
  delay(500);

digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH);
  delay(500);

digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led4, LOW);
  delay(500);

digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH);
  delay(500);
  


}

//****************************** FUNCIONES ******************************}
