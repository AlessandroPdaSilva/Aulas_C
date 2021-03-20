#include <stdio.h>
#include <stdlib.h>
// aula 74
int copiarString( char *s1 , char *s2){

    while(*s1 != '\0'){
    *s2 = *s1;
    ++s1;
    ++s2;

    }


};

int main()
{
    char frase1[] = "eu nao sou digino ";
    char frase2[20];


    copiarString(frase1,frase2);

    printf("frase 1 = %s \n frase 2 = %s \n", frase1, frase2);

    return 0;
}
