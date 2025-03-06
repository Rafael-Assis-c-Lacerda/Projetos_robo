//calcular erro em relação a linha

int calcular_erro(){
  if(!U1 && !U2 && !U3 && !U4 && U5 && !U6 && !U7 && !U8 && !U9){
    return 0;
   }else if (!U1 && !U2 && !U3 && !U4 && U5 && U6 && !U7 && !U8 && !U9){
     return 1;
   }else if(!U1 && !U2 && !U3 && !U4 && !U5 && U6 && !U7 && !U8 && !U9){
     return 2;
   }else if(!U1 && !U2 && !U3 && !U4 && !U5 && U6 && U7 && !U8 && !U9){
     return 3;
   }else if(!U1 && !U2 && !U3 && !U4 && !U5 && !U6 && U7 && !U8 && !U9){
     return 4;
   }else if(!U1 && !U2 && !U3 && !U4 && !U5 && !U6 && U7 && U8 && !U9){
     return 5;
   }else if(!U1 && !U2 && !U3 && !U4 && !U5 && !U6 && !U7 && U8 && !U9){
     return 6;
   }else if(!U1 && !U2 && !U3 && U4 && U5 && !U6 && !U7 && !U8 && !U9){
     return-1;
   }else if (!U1 && !U2 && !U3 && U4 && !U5 && !U6 && !U7 && !U8 && !U9){
     return-2;
   }else if(!U1 && !U2 && U3 && U4 && !U5 && !U6 && !U7 && !U8 && !U9){
     return-3;
   }else if(!U1 && !U2 && U3 && !U4 && !U5 && !U6 && !U7 && !U8 && !U9){
     return-4;
   }else if(!U1 && U2 && U3 && !U4 && !U5 && !U6 && !U7 && !U8 && !U9){
     return-5;
   }else if(!U1 && U2 && !U3 && !U4 && !U5 && !U6 && !U7 && !U8 && !U9){
     return-6;
   }
}

//calcular qnt deve virar a depender do erro
void calcular_PD(){
  p = kp*erro;
  d = kd*(erro - erro_anterior);
  pd = p + d;
  vel_E = V_MED + pd;
  vel_D = V_MED - pd;
  vel_E = constrain(vel_E,-255,255);
  vel_D = constrain(vel_D,-255,255);
}