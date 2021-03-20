#include <stdio.h>
#include <stdlib.h>
// aula 88
int main()
{
    //var
    char frase[100];
    FILE *file1 = fopen("osiris.txt","r");
    //


    int i = 0;
    while( (frase[i] = fgetc(file1)) != EOF) {
        ++i;
    }

    frase[i] = '\0';

    printf("%s",frase);

    return 0;
}
