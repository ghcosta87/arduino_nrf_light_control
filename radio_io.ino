bool radio_sinc(bool serial_ativo, int tempo_recebimento)
{
  dadosRF.inicio = 0;
  dadosRF.fim = 0;

  unsigned long timeout_period = millis();
  bool timeout = false;

  radio.startListening();
  while (!radio.available())
  {
    if (millis() - timeout_period > tempo_recebimento)
    {
      timeout = true;
      break;
    }
  }

  if (!timeout)radio.read(&dadosRF, sizeof(dadosRF));

  if (dadosRF.inicio == 152 && dadosRF.fim == 252)
  {
    dimmer = dadosRF.dimmer;
    if (serial_ativo)
      monitor_serial();
  }
  else
  {
    if (serial_ativo)
      monitor_serial_error();
  }

  radio.stopListening();
  dadosRF.inicio = 151;
  dadosRF.fim = 251;
  !radio.write(&dadosRF, sizeof(dadosRF));
  
}
