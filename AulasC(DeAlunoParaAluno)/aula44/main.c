#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
// aula 44
int main()
{
    struct horario{
        int hora;
        int minuto;
        int segundo;
    };


    struct horario relogio[3] = {{10,20,30},
                                {50,60,80},
                                {40,20,70}};




    printf(" %i : %i : %i \n" , relogio[1].hora , relogio[1].minuto, relogio[1].segundo);
    return 0;
}
