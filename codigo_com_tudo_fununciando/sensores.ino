//configurar Pinos dos Sensores
void configModoPinosSensores(){
  pinMode(PINO_U1,INPUT);
  pinMode(PINO_U2,INPUT);
  pinMode(PINO_U3,INPUT);
  pinMode(PINO_U4,INPUT);
  pinMode(PINO_U5,INPUT);
  pinMode(PINO_U6,INPUT);
  pinMode(PINO_U7,INPUT);
  pinMode(PINO_U8,INPUT);
  pinMode(PINO_U9,INPUT);

  pinMode(PINO_U3T,INPUT);
  pinMode(PINO_U4T,INPUT);
  pinMode(PINO_U5T,INPUT);
  pinMode(PINO_U6T,INPUT);
  pinMode(PINO_U7T,INPUT);
}
//ler os sensores
void lerSensores(){
  valor_U1 = analogRead(PINO_U1);
  valor_U2 = analogRead(PINO_U2);
  valor_U3 = analogRead(PINO_U3);
  valor_U4 = analogRead(PINO_U4);
  valor_U5 = analogRead(PINO_U5);
  valor_U6 = analogRead(PINO_U6);
  valor_U7 = analogRead(PINO_U7);
  valor_U8 = analogRead(PINO_U8);
  valor_U9 = analogRead(PINO_U9);

  valor_U3T = analogRead(PINO_U3T);
  valor_U4T = analogRead(PINO_U4T);
  valor_U5T = analogRead(PINO_U5T);
  valor_U6T = analogRead(PINO_U6T);
  valor_U7T = analogRead(PINO_U7T);

}
//checar o sensores
void checkSensors(){
  U1 = valor_U1 < LIMIAR_U1;
  U2 = valor_U2 < LIMIAR_U2;
  U3 = valor_U3 < LIMIAR_U3;
  U4 = valor_U4 < LIMIAR_U4;
  U5 = valor_U5 < LIMIAR_U5;
  U6 = valor_U6 < LIMIAR_U6;
  U7 = valor_U7 < LIMIAR_U7;
  U8 = valor_U8 < LIMIAR_U8;
  U9 = valor_U9 < LIMIAR_U9;

  U3T = valor_U3T < LIMIAR_U3T;
  U4T = valor_U4T < LIMIAR_U4T;
  U5T = valor_U5T < LIMIAR_U5T;
  U6T = valor_U6T < LIMIAR_U6T;
  U7T = valor_U7T < LIMIAR_U7T;
}
//bota os valores no serial
void printStatus() {
  if(MONITOR_SERIAL){
    Serial.println("U1: " + String(valor_U1) + " - " + String(U1?"BRANCO":"PRETO"));
   
    Serial.println("U2: " + String(valor_U2) + " - " + String(U2?"BRANCO":"PRETO"));

    Serial.println("U3: " + String(valor_U3) + " - " + String(U3?"BRANCO":"PRETO"));

    Serial.println("U4: " + String(valor_U4) + " - " + String(U4?"BRANCO":"PRETO"));
   
    Serial.println("U5: " + String(valor_U5) + " - " + String(U5?"BRANCO":"PRETO"));
    
    Serial.println("U6: " + String(valor_U6) + " - " + String(U6?"BRANCO":"PRETO"));
   
    Serial.println("U7: " + String(valor_U7) + " - " + String(U7?"BRANCO":"PRETO"));
  
    Serial.println("U8: " + String(valor_U8) + " - " + String(U8?"BRANCO":"PRETO"));

    Serial.println("U9: " + String(valor_U9) + " - " + String(U9?"BRANCO":"PRETO"));
    

    

    Serial.println("U3T: " + String(valor_U3T) + " - " + String(U3T?"BRANCO":"PRETO"));    

    Serial.println("U4T: " + String(valor_U4T) + " - " + String(U4T?"BRANCO":"PRETO"));
   
    Serial.println("U5T: " + String(valor_U5T) + " - " + String(U5T?"BRANCO":"PRETO"));
    
    Serial.println("U6T: " + String(valor_U6T) + " - " + String(U6T?"BRANCO":"PRETO"));
   
    Serial.println("U7T: " + String(valor_U7T) + " - " + String(U7T?"BRANCO":"PRETO"));

    Serial.println("quadradoD:" + String(quadradoD));
    Serial.println("quadradoE:" + String(quadradoE));          
     delay(DELAY);
  }
}
