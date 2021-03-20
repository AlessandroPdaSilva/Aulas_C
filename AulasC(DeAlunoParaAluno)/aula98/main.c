#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)calloc(5,sizeof(int));

    *(p + 1) = 10;

    for(int i = 0; i <= 5; i++){
        printf("Endereco p%i= %p ; valor p%i= %i \n", i , &p[i], i, p[i]);
    }

    return 0;
}
