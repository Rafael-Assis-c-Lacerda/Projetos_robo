#include "constantes.h"

const bool MONITOR_SERIAL = false;
const bool SEGUIR_LINHA = true;
const bool DETECTAR_MARCACAO = true;
const bool FAIXA_PEDESTRES = false;
const bool DIREITA = true;
const bool ESQUERDA = false;
const bool BIFURCACAO = DIREITA;
const bool LEDS = true;
const int V_F = 200;
const int V_MAX = 255;
const int V_MIN = 0;

const int V_RETO = 100;
const int V_RETO_D = 200;
const int V_RETO_E = 200;
const int V_RE = 150;
const int V_MED_INV = 110;

// P e D
const int V_MED = 150;
int vel_D = 0;
int vel_E = 0;
int kp = 80;
int kd = 10;
int p = 0;
int d = 0;
int pd = 0;
int erro = 0;
int erro_anterior = 0;

//contar qual o primeiro QD do retorno
int primeiroQD = 0;
#define dir 1
#define esq 2





void setup() {
  configMonitorSerial();
  configModoPinosSensores();
  configPinosMotor();
 
}

void loop() {
  lerSensores();
  checkSensors();
  erro = calcular_erro();
  printStatus();
  seguirLinha();
  detectarMarcacao();
  faixa();

 


  U1_anterior = U1;
  U3_anterior = U3;
  U5_anterior = U5;
  U7_anterior = U7;
  U9_anterior = U9;
}