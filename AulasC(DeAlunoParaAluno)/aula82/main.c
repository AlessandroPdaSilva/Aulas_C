#include <stdio.h>
#include <stdlib.h>
// aula 82
int main()
{
    // var
    FILE *file;
    int x,y,z;

    //
    file = fopen("C:\\Users\\Alessandro\\Desktop\\portifolio\\C\\AulasC\\aula81\\numero.txt","r");

    if(file == NULL){
        printf("Erro ao carregar");
        return 0;
    }

    fscanf(file,"%i %i %i", &x, &y, &z);

    // imprimir
    printf("%i %i %i \n", x, y, z);

    fclose(file);
    return 0;
}
