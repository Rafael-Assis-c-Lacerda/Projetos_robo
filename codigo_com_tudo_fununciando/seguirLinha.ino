//seguir linha
void seguirLinha(){
 if(SEGUIR_LINHA){   
  if (!invertido){                            
    if (U1 || U2 || U3 || U4 || U5 || U6 || U7 || U8 || U9){     //se tiver qualquer sensor branco
      calcular_PD();
      andar(vel_D,vel_E);         
      
    }else if(!U1 && !U2 && !U3 && !U4 && !U5 && !U6 && !U7 && !U8 && !U9){   //se todos tiverem pretos
      parar();
      if(quadradoD == 1 && quadradoE == 1){                                 //condição para o retorno
        andar(-100,-100);
        delay(80);
        parar();
        delay(1000);
        while(!(U1 && U2 && U3 && U5 || U5 && U7 && U8 && U9)){
          lerSensores();
          checkSensors();
          seguirLinhaRe();  
        }
        andar(-100,-100);
        delay(200);
        quadradoD = 0;
        quadradoE = 0;        
        if (primeiroQD == dir) {
          quadradoE = 1;    
        }else if(primeiroQD == esq) {
          quadradoD = 1;          
        }                         
      }
        if(!wait) {      //condição para não realizar faixa(não houve inversão)
          parar();
        }else if(wait){  //condição para realizar faixa(houve inversão)
          parar();
          andar(-V_RE,-V_RE);
          delay(300);         
          parar();      
          delay(5000);
          lerSensores();
          checkSensors();
          U1_ant_Faixa = U1;
          U2_ant_Faixa = U2;
          U3_ant_Faixa = U3;
          U4_ant_Faixa = U4;
          U5_ant_Faixa = U5;
          U6_ant_Faixa = U6;
          U7_ant_Faixa = U7;
          U8_ant_Faixa = U8;
          U9_ant_Faixa = U9;
          andar(90,80);
          delay(1500);
          lerSensores();
          checkSensors();
          if(!U2 && !U3 && !U4 && !U5 && !U6 && !U7 && !U8){   
            lerSensores();
            checkSensors(); 
            int i = 0;      
            if(U1_ant_Faixa || U2_ant_Faixa || U3_ant_Faixa || U4_ant_Faixa){ 
                         
              while (!U2 && !U3 && !U4 && !U5 && !U6 && !U7 && !U8){                
                andar(V_F,-V_F); 
                lerSensores();
                checkSensors();
                i++;
                delay(10);            
              }
              i = 0;
              parar();
            }else if(U6_ant_Faixa || U7_ant_Faixa || U8_ant_Faixa || U9_ant_Faixa){
             
              while (!U2 && !U3 && !U4 && !U5 && !U6 && !U7 && !U8){
                andar(0,V_F); 
                lerSensores();
                checkSensors();
                i++;
                delay(10);
                          
              }              
            }                   
          }                 
          wait = false;
        }
      }
  }else if(invertido){  
    if (!U6){
      andarDireitaA();
    }else if (!U4){
      andarEsquerdaA();
    }else if (!U5){
      andarReto();
    }else if (!U7){
      andarDireitaF();
    }else if (!U3){
      andarEsquerdaF();
    
    }
    
  }
 }
}
 

void seguirLinhaRe (){
  if (U6T){
      andar(-120,-50);
    }else if (U4T){
      andar(-50,-120);
    }else if (U5T){
      andar(-80,-80);
    }else if (U7T){
      andar(-120,50);
    }else if (U3T){
      andar(50,-120);
    }else if(!U3T && !U4T && !U5T && !U6T && !U7T){
      parar();
    }
}
 