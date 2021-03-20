#include <stdio.h>
#include <stdlib.h>
// aula 61
int main()
{
    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario relogio, *P;
    P = &relogio;// endereco

    P->hora = 20; // setando valor

    // imprimindo
    printf(" hora: %i", P->hora);

    return 0;
}
