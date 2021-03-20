#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct lista{
        int valor;
        struct lista *p;
    };
    // var
    struct lista m1,m2,m3
    struct lista *gancho = &m1;

    // setando valores
    m1.valor = 10;
    m2.valor = 35;
    m3.valor = 57;

    m1.p = &m2;
    m2.p = &m3;
    m3.p = (struct lista *) 0;

    //
    while(gancho != (struct lista *) 0){
        printf(" %i \n", gancho-> valor);
        gancho = gancho-> p;
    }

    return 0;
}
