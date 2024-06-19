#include <stdio.h>

int main(){
    #define TAM 10 //EM C VOCÊ DEVE USAR UMA CONSTANTE PARA CONTROLAR O TAMANHO DO ARRAY
    int numeros[10]; //Forma sem incialização
    int numeros2[TAM] = {10,11,12,13,14,15,16,17,18,19}; //Forma inicializada
    int notas[4];
    int media = 0;
    int soma = 0;

    //FORMAS DE SE ACESSAR UM VETOR
    printf("%d\n", numeros2[8]);
    numeros[0] = 0;
    numeros[0] = numeros[0] + 15;
    printf("%d\n", numeros[0]);
    soma = soma + numeros[0];
    int x = 0;
    printf("%d\n", soma);

    //USANDO ESTRUTURAS DE REPETIÇÃO PARA PERCORRER
    for(int i = 0; i < TAM; i++){
        printf("|%d| \t", numeros2[i]);
    }
    printf("\n");
    for(int i = 0; i < 4; i++){
        printf("Digite a nota %d...\n",i + 1);
        scanf("%d",&notas[i]);
    }
    
    for(int i = 0; i < 4; i++){
        x = x + notas[i];
    }
    //printf("%d", x);
    media = x / 4;
    printf("Sua media anual foi...%d",media);
}