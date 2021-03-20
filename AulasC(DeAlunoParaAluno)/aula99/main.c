#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = malloc(2 * sizeof(int));

    int *p2 = realloc(p,4 * sizeof(int));

    for(int i = 0; i<=4; i++){
        printf("Endereco p%i = %p ; Valor p%i = %i \n", i, &p[i], i, *(p + i));
    }
    return 0;
}
