#include <stdio.h>
#include <stdlib.h>

struct Lista {
    int valor;
    struct Lista *proxima;
};
// funcao
struct lista *procuraPalavra(struct Lista *p, int v){

    // loop
    while(p != (struct Lista *)0 ){

        if(p->valor == v){
            return p;
        }else{
            p = p->proxima;
        }
    }

    return (struct Lista *)0;

}

int main()
{
    // var
    struct Lista m1,m2,m3;
    struct Lista *resultado, *gancho = &m1;
    int valor;

    m1.valor = 10;
    m2.valor = 15;
    m3.valor = 20;

    m1.proxima = &m2;
    m2.proxima = &m3;
    m3.proxima = 0;

    printf("Digite um valor:");
    scanf("%i", &valor);

    resultado = procuraPalavra(gancho, valor);

    if(resultado != (struct Lista *)0 ){
        printf("Valor encontrado. Valor > %i < \n ", valor);
    }else{
        printf("Valor nao encontrado");
    }
    return 0;
}
