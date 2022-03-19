
void monitor_serial() {
  Serial.println("");
  Serial.println("");
//  Serial.println("> Constante de sincronização: " + (String)dadosRF.inicio + "|" + (String)dadosRF.filtragem + "|" + (String)dadosRF.bomba + "|" + (String)dadosRF.ornamentacao + "|" + (String)dadosRF.dimmer + "|" + (String)dadosRF.fim);
  //  Serial.print(">Filtragem: "+(String)dadosRF.filtragem);
  //  Serial.print(">"+dadosRF.bomba);
  //  Serial.print(">"+dadosRF.ornamentacao);
  Serial.println("> Controle do dimmer: " + (String)dadosRF.dimmer);
  Serial.println("> v5.0");
  Serial.print(">" + (String)dimmer);
  Serial.println(">" + (String)dimmer_ant);
  Serial.println();
}

void monitor_serial_error() {
  Serial.println("Aguardando conexão..." + (String)dadosRF.inicio + "|" + (String)dadosRF.dimmer + "|" + (String)dadosRF.fim);
}
