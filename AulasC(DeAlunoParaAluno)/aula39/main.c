#include <stdio.h>
#include <stdlib.h>
// aula 39
int main()
{

    struct horario{
        int horas;
        int minutos;
        int segundos;
    };

    struct horario relogio;

    relogio.horas = 19;
    relogio.minutos = 50;
    relogio.segundos = 11;

    printf(" %i : %i : %i", relogio.horas, relogio.minutos , relogio.segundos);

    return 0;
}
