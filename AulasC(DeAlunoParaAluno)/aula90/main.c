#include <stdio.h>
#include <stdlib.h>
// aula 90
int main()
{
    char c[100];

    fgets(c,100,stdin);

    int i = 0;
    while(c[i] != '\0'){
        putc(c[i],stdout);
        ++i;
    }



    return 0;
}
