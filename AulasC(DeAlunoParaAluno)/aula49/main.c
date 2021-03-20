#include <stdio.h>
#include <stdlib.h>
// aula 49
// quantidades de caracters de uma string
int main()
{
    // var
    char palavra[100];
    int tamanhoString(char s[]);

    printf("Digite uma palavra: ");
    scanf("%s", palavra);



    int n = tamanhoString(palavra);

    printf(" A palavra %s possui %i caracters \n", palavra, n);

    return 0;
}

// tamanho da String
int tamanhoString(char s[]){

    int qntString = 0;

    while(s[qntString] != '\0'){
        qntString++;
    }
    return qntString;
};
