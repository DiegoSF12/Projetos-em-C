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
    int backup;
    setlocale(LC_ALL,"Portuguese");
    fila1.ini = 0;
    fila1.fim = 0;
    op = 1;
    while(op != 0){
        filaMostrar();
        menuMostrar();
        scanf("%d", &op);
        switch(op) {
            case 1:
                filaEntrar();
            break;
            case 2:
                backup = filaSair();
                if(backup != 1 ){
                    printf("%d", backup);
                }
            break;
            case 0:
                op = 0;
            break;
        }
    }
    return 0;
}

void filaEntrar(){
    if(fila1.fim == tamanho){
        printf("ERRO: Impossivel adicionar, fila cheia\n");
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
        int backup = fila1.dados[fila1.fim];;
        for(int i = 0; i < tamanho; i++){
            fila1.dados[i] = fila1.dados[i + 1];
        }
        fila1.dados[fila1.fim] = 0;
        fila1.fim--;
        return backup;
    }
}

void filaMostrar(){
    printf("[ ");
    for(int i = 0; i < tamanho; i++){
        printf("| %d ", fila1.dados[i]);
    }
    printf("]\n\n");
}

void menuMostrar(){
    printf("\n\nSelecione uma opção\n");
    printf("| 1 - FILA ENTRAR |\n| 2 - FILA SAIR   |\n| 0 - ENCERRAR    |\n");
}
