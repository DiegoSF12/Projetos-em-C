#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont = 0;
    int contx = 1;
    int verify = 0;
    while(contx != 1){
        printf("Testando²");
        contx = contx + 1;
    }

   
    do {
        printf("Seu usuario Burro, digite um numero PAR");
        scanf("%d",&verify);
    } while (verify % 2 != 0);

}