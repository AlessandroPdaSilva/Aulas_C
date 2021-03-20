#include <stdio.h>
#include <stdlib.h>
// aula 75

#define PI 3.14

int main()
{

    int raiz;
    printf("Digite um a raiz :");
    scanf("%i",&raiz);


    float a = (raiz * raiz) * PI;

    printf(" Area: %f", a);

    return 0;
}
