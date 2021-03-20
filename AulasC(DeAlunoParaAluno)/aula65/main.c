#include <stdio.h>
#include <stdlib.h>
// aula 65
int main()
{
    struct horario{
        int *pHora;
        int *pMinuto;
        int *pSegundo;
    };

    // var
    struct horario h;
    int hora = 22;
    int minuto;
    int segundo;

    //
    h.pHora = &hora;

    // imprimir
    printf(" %i", h.pHora );

    return 0;
}
