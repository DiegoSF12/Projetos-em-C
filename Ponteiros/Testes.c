#include <stdio.h>

int main(){
    int copyX;
    int *p;
    int x = 10;
    p = &x;
    *p = 512;
    copyX = *p;
    

    printf("Conteudo da variavel X: %d\n",*p );
    printf("Endereço da variavel X: %p\n", p);
    printf("Endereço do ponteiro P: %p\n", &p);
    printf("Valor de copyX: %d\n", copyX);
    
    return 0;
} 