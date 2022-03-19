void ligar_led()
{
    if (dimmer <= 255 && dimmer >= 0)
    {
        if (dimmer_ant < dimmer)
        {
            for (int i = dimmer_ant; i <= dimmer; i++)
            {
                analogWrite(led, i);
                delay(10);
            }
            dimmer_ant = dimmer;
        }

        if (dimmer_ant > dimmer)
        {
            for (int i = dimmer_ant; i >= dimmer; i--)
            {
                analogWrite(led, i);
                delay(10);
            }
            dimmer_ant = dimmer;
        }
    }
//    dadosRF.dimmer_out = dimmer;
}
