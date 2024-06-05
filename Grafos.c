//BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//CONSTANTES
#define maxTam 10 

//VARIAVEIS
int tamanho = 0;
int grafo[maxTam];
int matrizAdjacencia[maxTam][maxTam];
int op = 1;

//PROTOTIPAÇÃO
int grafoTamanho();
void grafoDesenhar();
void grafoDesenharMatriz();
void grafoInserir();
void grafoRemover();
void menuMostrar();

//FUNÇÃO PRINCIPAL
int main(){
    while(tamanho <= 0 || tamanho > maxTam){
        tamanho = grafoTamanho();
        if(tamanho <= 0 || tamanho > maxTam){
            printf("Escolha um valor entre 1 e %d\n\n", maxTam);
        }
        else{
            for(int i = 0; i < tamanho; i++){
                grafo[i] = i;
            }
        }
    }
    while(op != 0){
        grafoDesenhar();
        grafoDesenharMatriz();
        menuMostrar();
        scanf("%d", &op);
        switch (op) {
            case 1:
                grafoInserir();
            break;
            case 2: 
                grafoRemover();
            break;
        }
    }
    return 0;
}

//DEFINE O NUMERO E VERTICES DO GRAFO
int grafoTamanho(){
    int tamanho;
    printf("Escolha a quantidade de vértices do grafo: ");
    scanf("%d", &tamanho);
    return tamanho;
}

//FUNÇÃO PARA DESENHAR O VETOR DE VÉRTICES
void grafoDesenhar(){
    printf("Lista de vertices\n[");
    for(int i = 0; i < tamanho; i++){
        printf("%d  ", grafo[i]);
    }
    printf("]\n\n");
}

//FUNÇÃO PARA DESENHAR A MATRIZ DE ARESTAS
void grafoDesenharMatriz(){
    printf("[Matriz de adjascencias]\n");
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            printf("| %d |",matrizAdjacencia[i][j]);
        }
        printf("\n");
    }
    printf("=====================\n");
}

//INSERIR ARESTAS
void grafoInserir(){
    int numero1, numero2 ;
    printf("Escolha o vertice de origem entre 0 a %d: ",tamanho-1);
    scanf("%d", &numero1);
    printf("Escolha o vertice de destino entre 0 a %d: ", tamanho-1);
    scanf("%d", &numero2);
    if(numero1 > tamanho-1 || numero2 > tamanho-1 || numero1 < 0 || numero2 < 0){
        printf("Os valores precisam estar entre 0 e %d: ",tamanho-1);
    }
    else{
        matrizAdjacencia[numero1][numero2] = 1;
        matrizAdjacencia[numero2][numero1] = 1;

    }
}

//REMOVER ARESTA
void grafoRemover(){
    int numero1, numero2;
    printf("Escolha o vertice de origem entre 0 e %d: ", tamanho-1);
    scanf("%d", &numero1);
    printf("Escolha o vertice de destino entre 0 e %d: ", tamanho-1);
    scanf("%d", &numero2);
    if(numero1 > tamanho-1 || numero2 > tamanho-1 || numero1 < 0 || numero2 < 0){
        printf("\nOs valores precisam estar entre 0 e %d: ", tamanho-1);
    }
    else{
        matrizAdjacencia[numero1][numero2] = 0;
        matrizAdjacencia[numero2][numero1] = 0;
    }
}

//MOSTRAR O MENU DE OPÇÕES
void menuMostrar(){
    printf("Escolha uma opção\n");
    printf("1 - Inserir Aresta\n");
    printf("2 - Remover Aresta\n");
    printf("0 - Sair\n\n");
}