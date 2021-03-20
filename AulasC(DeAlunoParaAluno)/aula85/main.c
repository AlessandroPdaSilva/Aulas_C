#include <stdio.h>
#include <stdlib.h>
// aula 85
int main()
{
    // var
    FILE *file1,*file2;

    //
    file1 = fopen("texto1.txt","r");
    if(file1 == NULL){
        printf("erro ao executar");
        exit(0);
    }

    file2 = fopen("texto2.txt","w");

    copiar(file1,file2);

    fclose(file2);
    fclose(file1);
    return 0;
}


void copiar(FILE *file1,FILE *file2){
    // var
    char frase[1000];

    while(fgets(frase,1000,file1))//file1 esta jogando String na variavel frase

    fputs(frase,file2);

}
