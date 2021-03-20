#include <stdio.h>
#include <stdlib.h>
// aula 72
int main()
{
    int x[3] = {1,2,3};

    int *pX = &x[0];
    printf("%p \n", pX);

    pX = &x[1];
    printf("%p \n", pX);

    pX = &x[2];
    printf("%p \n", pX);




    return 0;
}
