#include <stdio.h>
#include <stdlib.h>

int main()
{
    //var
    FILE *file1 = fopen("arquivo1.txt","r");
    char frase[100];

    fgets(frase,100,file1);

    printf("%s",frase);

    // reopen
    freopen("arquivo2.txt","r",file1);
    fgets(frase,100,file1);

    printf("%s",frase);

    return 0;
}
