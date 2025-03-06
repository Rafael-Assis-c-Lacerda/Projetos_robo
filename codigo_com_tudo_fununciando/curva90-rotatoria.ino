//contantes desses desafios
bool cruza = false;
bool rot = false;  
//detectar e contar qnts quadrados
void detectarMarcacao(){
 if(DETECTAR_MARCACAO){
    delay(5);
     lerSensores();
     checkSensors();
    if (U1 && !U3 && U5 && !U1_anterior && !U9 && !U7 || U1 && !U3 && U4 && !U1_anterior && !U9 && !U7 || U1 && !U3 && U6 && !U1_anterior && !U9 && !U7){
      quadradoE++;
      if (quadradoE == 1 && quadradoD == 0){
        primeiroQD = esq;
      }    
      if (quadradoE > 1){
        rot = true;        
      }
    }
    else if (U9 && !U7 && U5 && !U9_anterior && !U1 && !U3 || U9 && !U7 && U6 && !U9_anterior && !U1 && !U3 || U9 && !U7 && U4 && !U9_anterior && !U1 && !U3){
      quadradoD++;
      if (quadradoE == 0 && quadradoD == 1){
        primeiroQD = dir;
      }   
      if(quadradoD > 1){
        rot = true;
      }
      
    }
   detectarCruzamento();
  }  
}
//indentificar e contar cruzamentos, e virar90 qnd necessário
void detectarCruzamento () {

  if (U1 && U2 && U3 && U5 || U5 && U7 && U8 && U9){
    cruza = true;
    if (quadradoE > 0 || quadradoD > 0 ){
      if (quadradoE == 1 && quadradoD == 1){
        bif();
        quadradoE = 0;
        quadradoD = 0;                  
      }else if (quadradoE == 1){
        curva90E();
        quadradoE = 0;
        
      }else if (quadradoD == 1){
        curva90D();
        quadradoD = 0;
        
      }else if (quadradoE > 1 || quadradoD > 1) {
        if (quadradoE > 1 && rot == true){
        curva90E(); 
        quadradoE--; 
        rot = false;               
        }else if (quadradoE > 1) {
          quadradoE--;
          andar(V_MAX,V_MAX);
          delay(80);                          
        }else if (quadradoD > 1 && rot == true){
        curva90D(); 
        quadradoD--; 
        rot = false;               
        }else if (quadradoD > 1) {
          quadradoD--; 
          andar(V_MAX,V_MAX);  
          delay(80);       
        }                                                           
      }     
    }
  }
 
}

//curva 90 graus pra esquerda
void curva90E(){
  andar(V_MAX,V_MAX);
  delay(DELAY_90); 
  andar(-60,-60);
  delay(200); 
  andar(V_F,-V_F);
  delay(225);
  lerSensores();
  checkSensors();
  while(!U5){
    lerSensores();
    checkSensors();    
    delay(10);
  }
  primeiroQD = 0;
}
//curva de 90 graus pra direita
void curva90D(){
  andar(V_MAX,V_MAX);
  delay(DELAY_90);
  andar(-60,-60);
  delay(200); 
  andar(-V_F,V_F);
  delay(225);
   lerSensores();
  checkSensors();
  while(!U5){
    lerSensores();
    checkSensors();
    delay(10);
  }
  primeiroQD = 0;
}
//bifurcação
void bif(){
  if (BIFURCACAO == DIREITA){
    curva90D();
  }else if (BIFURCACAO == ESQUERDA){
    curva90E();
  }
}





