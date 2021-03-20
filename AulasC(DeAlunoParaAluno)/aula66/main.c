#include <stdio.h>
#include <stdlib.h>
// aula 66
int main(){
    // var
    int x = 1;
    int *pX; pX = &x;

    //
    func(pX);
    //func2(x);


    // imprimir
    printf(" %i \n ",x);
    return 0;
}

// function
void func(int *pX){
    ++*pX;

}

void func2(int x){
    ++x;
}
