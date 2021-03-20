#include <stdio.h>
#include <stdlib.h>

int main()
{
    // var

    char frase[100];
    //
    fgets(frase,100,stdin);
    // imprimir
    printf("%s", frase);



    freopen("epaepa.txt","r",stdin);
    //
    fgets(frase,100,stdin);
    // imprimir
    printf("%s", frase);

    return 0;
}
