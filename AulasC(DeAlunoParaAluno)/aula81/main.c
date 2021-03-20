#include <stdio.h>
#include <stdlib.h>
// aula 81
int main()
{

    FILE *file;
    file = fopen("FILETEXT.txt","w");

    fprintf(file,"Ola Mundo");

    fclose(file);
    return 0;
}
