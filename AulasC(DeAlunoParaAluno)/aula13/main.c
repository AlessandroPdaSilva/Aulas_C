#include <stdio.h>
#include <stdlib.h>
// aula13
int main(){

    // var
    int n1,n2,soma,sub,mult,div;

    printf("Digite um numero : \n");
    scanf("%i", &n1);
    printf("Digite o segundo numero : \n");
    scanf("%i", &n2);

    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;

    printf(" soma = %i \n", soma);
    printf(" subtracao = %i \n", sub);
    printf(" multiplicacao = %i \n", mult);
    printf(" divisao = %i \n", div);


    return 0;
}
