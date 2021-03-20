#include <stdio.h>
#include <stdlib.h>
// aula 43
int main()
{

    struct horario{
        int horas;
        int minutos;
        int segundos;

    }relogio = {20,40,10};

    // relogio = {.horas, .minutos , .segundos};
    printf("%i : %i : %i", relogio.horas, relogio.minutos, relogio.segundos);


    return 0;
}
