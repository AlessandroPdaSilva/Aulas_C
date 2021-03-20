#include <stdio.h>
#include <stdlib.h>
// aula 97
int main()
{
    int *p = (int *)malloc(sizeof(int));
    *p = 1000;

    free(p);

    printf("%i",*p);

    return 0;
}
