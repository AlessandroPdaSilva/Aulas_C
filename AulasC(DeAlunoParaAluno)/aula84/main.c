#include <stdio.h>
#include <stdlib.h>
// aula 84
int main()
{
    // var
    FILE *file;
    char frase[] = "Sorvete e bao demais";
    char letra = 'a';

    //
    file = fopen("string.txt","a");

    if(file == NULL){
        printf("Erro ao executar");
        exit(0);
    }

    //fprintf(file,"Pao de queixo e bao demais");

    //fputs(frase,file);
    //fputc(letra,file);


    return 0;
}
