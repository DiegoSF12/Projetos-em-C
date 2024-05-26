#include <stdio.h>

int main() {
    int x; // Variável inteira
    int *y; // Ponteiro para inteiro

    // Usuário informa o valor 25 para x
    printf("Digite um valor para x: ");
    scanf("%d", &x);

    // Ponteiro y aponta para o endereço de x
    y = &x;

    // Altera o valor apontado por y para 12
    *y = 12;

    // Incrementa o valor apontado por y em 1
    (*y)++;

    // Soma 5 ao valor apontado por y
    *y += 5;

    // Imprime o valor atual de x
    printf("O valor de x é: %d\n", x);

    return 0;
}
