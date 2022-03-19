void configurar_serial()
{
    Serial.begin(9600); // inicializa comunicacao serial
    radio.begin();
    Serial.println("Nome: Scketch Nano__8_v6");
    Serial.println("Data: 05-06-2020");
}

void configurar_radio()
{
    radio.openReadingPipe(1, addresses[3]); //copia do nivel
    radio.openWritingPipe(addresses[4]);
}

void configurar_io()
{
    pinMode(led, OUTPUT);
    analogWrite(led, 0);
}
