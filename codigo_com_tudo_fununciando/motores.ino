//configurar pinos do motor
void configPinosMotor (){
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENB,OUTPUT);
}
//função para determinar a velocidade de cada rodo do robo
void andar(int velD,int velE){
if(velD >= 0 && velE >= 0){  
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  analogWrite(ENA,abs(velD));
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(ENB,abs(velE));
}else if(velD >= 0  && velE < 0){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  analogWrite(ENA,abs(velD));  
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(ENB,abs(velE));
}else if (velD < 0  && velE >= 0){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  analogWrite(ENA,abs(velD));
   digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(ENB,abs(velE));
}else if (velD < 0  && velE < 0){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  analogWrite(ENA,abs(velD));
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(ENB,abs(velE));  
}

}
//funções para andar sem usar pd (usado para seguir linha de ré e seguir linha invertido)
void andarReto(){
  andar(V_RETO-4,V_RETO);
}
void andarDireitaF(){
  andar(V_MIN,V_F);
}
void andarEsquerdaF(){
  andar(V_F,V_MIN);
}
void andarDireitaA(){
  andar(V_MED_INV,V_MAX);
}
void andarEsquerdaA(){
  andar(V_MAX,V_MED_INV);
}
void parar(){
  andar(0,0);
  analogWrite(ENA,0);
  analogWrite(ENB,0);  
}

void andarRetoRE(){
  andar(-V_RETO,-V_RETO);
}
void andarDireitaFRE(){
  andar(-V_F,-V_MIN);
}
void andarEsquerdaFRE(){
  andar(-V_MIN,-V_F);
}
void andarDireitaARE(){
  andar(-V_MAX,-V_MED_INV);
}
void andarEsquerdaARE(){
  andar(-V_MED_INV,-V_MAX);
}
