RF24 radio(9, 10);

byte addresses[][6] = {"pipe0", "pipe1", "pipe2", "pipe3", "pipe4", "pipe5"};

struct estrutura_io
{
    byte inicio = 0;
    int dimmer = 0;
    byte fim = 0;
};

typedef struct estrutura_io tipoDados;
tipoDados dadosRF;
