#include <stdio.h>
#include <stdlib.h>
// aula79
#define MAIOR(x,y) (x > y)? x : y

int main()
{
    int x,y;
    printf("Digite um numero: ");
    scanf("%i",&x);
    printf("Digite outro numero: ");
    scanf("%i",&y);

    printf("\n O maior numero e %i \n",MAIOR(x,y));
    return 0;
}
