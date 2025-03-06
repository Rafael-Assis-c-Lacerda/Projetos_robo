const int DELAY = 2000;
const int DELAY_90 = 60;

//pinos sensores
const int PINO_U1 = A0;
const int PINO_U2 = A1;
const int PINO_U3 = A2;
const int PINO_U4 = A3;
const int PINO_U5 = A4;
const int PINO_U6 = A5;
const int PINO_U7 = A6;
const int PINO_U8 = A7;
const int PINO_U9 = A8;

const int PINO_U3T = A15;
const int PINO_U4T = A14;
const int PINO_U5T = A13;
const int PINO_U6T = A12;
const int PINO_U7T = A11;


//pinos motor
const int IN1 = 9;
const int IN2 = 8;
const int ENA = 10;
const int IN3 = 7;
const int IN4 = 6;
const int ENB = 5;

//limiares
const int LIMIAR_U1 = 120;
const int LIMIAR_U2 = 100;
const int LIMIAR_U3 = 100;
const int LIMIAR_U4 = 100;
const int LIMIAR_U5 = 100;
const int LIMIAR_U6 = 100;
const int LIMIAR_U7 = 100;
const int LIMIAR_U8 = 100;
const int LIMIAR_U9 = 120;

const int LIMIAR_U3T = 100;
const int LIMIAR_U4T = 100;
const int LIMIAR_U5T = 100;
const int LIMIAR_U6T = 100;
const int LIMIAR_U7T = 100;

//valor sensores
int valor_U1;
int valor_U2;
int valor_U3;
int valor_U4;
int valor_U5;
int valor_U6;
int valor_U7;
int valor_U8;
int valor_U9;

int valor_U3T;
int valor_U4T;
int valor_U5T;
int valor_U6T;
int valor_U7T;

//sensores da frente
bool U1;
bool U2;
bool U3;
bool U4;
bool U5;
bool U6;
bool U7;
bool U8;
bool U9;

//sensores atras

bool U3T;
bool U4T;
bool U5T;
bool U6T;
bool U7T;

//sensores do loop anterior
bool U1_anterior;
bool U3_anterior;
bool U5_anterior;
bool U7_anterior;
bool U9_anterior;

//sensores dps da ré antes da faixa
bool U1_ant_Faixa;
bool U2_ant_Faixa;
bool U3_ant_Faixa;
bool U4_ant_Faixa;
bool U5_ant_Faixa;
bool U6_ant_Faixa;
bool U7_ant_Faixa;
bool U8_ant_Faixa;
bool U9_ant_Faixa;


//branco e preto
const bool BRANCO = true;
const bool PRETO = false;
//numero de qd
int quadradoD = 0;
int quadradoE = 0;

