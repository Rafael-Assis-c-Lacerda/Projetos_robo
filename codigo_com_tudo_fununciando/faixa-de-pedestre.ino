//contantes da faixa
bool invertido = false;
bool wait = false;
//detectar inversão, inverter, salvar qnd inverteu e desenverter qnd necessário
void faixa (){
  if (!invertido){
    if (U2 && U3 && !U5 && U7 && U8 || U2 && U3 && !U4 && U7 && U8 || U2 && U3 && !U6 && U7 && U8){
      delay(50);      
      lerSensores();
      checkSensors();
      if (U2 && U3 && !U5 && U7 && U8 || U2 && U3 && !U4 && U7 && U8 || U2 && U3 && !U6 && U7 && U8){
        invertido = true;
        wait = true;
      }
    }
  }else if (invertido){
    if (!U2 && !U3 && U5 && !U7 && !U8 || !U2 && !U3 && U4 && !U7 && !U8 || !U2 && !U3 && U6 && !U7 && !U8){
      delay(50);
      lerSensores();
      checkSensors();           
      if (!U2 && !U3 && U5 && !U7 && !U8 || !U2 && !U3 && U4 && !U7 && !U8 || !U2 && !U3 && U6 && !U7 && !U8){
        invertido = false;
      }
    }  
  }
}

