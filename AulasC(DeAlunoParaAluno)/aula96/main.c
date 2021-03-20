#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(sizeof(int));

    if(p == NULL){
        printf("erro ao alocar");
    }

    *p = 1000;
    printf("%i",*p);
    return 0;
}
