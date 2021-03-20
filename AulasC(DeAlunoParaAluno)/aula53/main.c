#include <stdio.h>
#include <stdlib.h>
// aula 53
int main()
{
    // var
    char palavra[100];
    char caracter;
    int i;

    // loop
    do{
        caracter = getchar();
        palavra[i] = caracter;
        i++;

    }while(caracter != '\n');

    palavra[i - 1] = '\0';

    // print
    printf("%s \n", palavra);



    return 0;
}
