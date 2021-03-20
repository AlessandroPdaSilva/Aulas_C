#include <stdio.h>
#include <stdlib.h>
// aula 11
int main(){

    int n1 = 2,n2 = 3;

    int soma = n1 + n2;
    int sub = n1 - n2;
    int mult = n1 * n2;
    float div = n1 / n2;


    printf(" %i + %i = %i \n", n1,n2,soma);
    printf(" %i - %i = %i \n",  n1,n2,sub);
    printf(" %i * %i = %i \n",  n1,n2,mult);
    printf(" %i / %i = %f \n",  n1,n2,div);

    return 0;
}
