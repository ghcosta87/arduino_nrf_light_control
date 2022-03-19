#include "bibliotecas.h"
#include "estrutura_local.h"
#include "estrutura_radio.h"

void setup() {
  configurar_serial();
  configurar_radio();
  configurar_io();
}
void loop() {
  radio_sinc(true,random(2000, 3000)); // () -> lig/desl monitor serial
  ligar_led();
  delay(100);
}
