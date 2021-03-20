#include <stdio.h>
#include <stdlib.h>
// aula 94
int main()
{
    /*
    getchar();
    char a = getchar();
    getchar();
    char b = getchar();
    getchar();
    char c = getchar();
    getchar();
    */
    limparBuffer();
    char a = getchar();
    limparBuffer();
    char b = getchar();
    limparBuffer();
    char c = getchar();
    limparBuffer();


    printf("%c",a);
    printf("%c",b);
    printf("%c",c);


    return 0;
}

void limparBuffer(){
    while(getchar()!= '\n' &&  getchar() != EOF);
}
