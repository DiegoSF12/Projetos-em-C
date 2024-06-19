#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10;
    int *ptr;

    printf("X: %d\n", x);
    ptr = &x;
    printf("PTR: %p\n", ptr); //AQUI É ONDE USAMOS PARA MOSTRA O ENDEREÇO DO PONTEIRO.
    printf("Valor no endereço: %d\n", *ptr); // AQUI TEREMOS O VALOR DA VARIAVEL PARA QUAL O PONTEIRO APONTA NA SAIDA
    x = 12;
    printf("X: %d\n", x);
    printf("Valor no endereço: %d\n", *ptr);
    free(ptr);
    //free(x);
    return 0;
}