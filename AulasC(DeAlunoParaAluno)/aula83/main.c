#include <stdio.h>
#include <stdlib.h>
// aula 83
int main()
{
    // var
    FILE *file;
    char frase[100];

    //
    file = fopen("string.txt","r");
    if(file == NULL){
        printf("Erro ao ler o arquivo");
        exit(0);
    }

    // imprimir
    while(fgets(frase, 100, file) != NULL){
        printf("%s",frase);
    }

    return 0;
}
