#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1 = 0;
    int num2 = 0;

    while(num1 < 99){
        printf("Por favor, informe um numero...");
        scanf("%d", &num2);
        num1 = num1 + num2;
        if(num1 >= 99){
            printf("Sequencia Quebrada, valor igual a: %d", num1);
        }
    }
}