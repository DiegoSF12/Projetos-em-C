#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define tamanho 5

typedef struct tfila{
    int dados[tamanho];
    int ini;
    int fim;
}Fila;

Fila fila1;
int op;
void filaEntrar();
int filaSair();
void filaMostrar();
void menuMostrar();

int main(){
    op = 1;
    menuMostrar();
    return 0;
}

void filaEntrar(){
    if(fila1.fim == tamanho){
        printf("ERRO: Impossivel adicionar, fila cheia");
    }
    else{
        printf("Digite o valor a ser inserido na fila:\n");
        scanf("%d",&fila1.dados[fila1.fim]);
        fila1.fim++;
    }
}

int filaSair(){
    if(fila1.ini == fila1.fim){
        printf("A pilha já se encontra vazia");
    }
    else{
        int backup;
        for(int i = 0; i < tamanho; i++){
            fila1.dados[i] = fila1.dados[i + 1];
        }
        backup = fila1.dados[fila1.fim];
        fila1.dados[fila1.fim] = 0;
        fila1.fim--;
        printf("%d", backup);
    }
}

void filaMostar(){
    printf("[ ");
    for(int i = 0; i < tamanho; i++){
        printf("| %d", fila1.dados[i]);
    }
    printf(" ]\n\n");
}

void menuMostrar(){
    printf("\n\nSelecione uma opção\n");
    printf("| 1 - FILA ENTRAR |\n| 2 - FILA SAIR   |\n| 0 - ENCERRAR    |");
}
