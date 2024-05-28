#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAMANHO 10
 
//ESTRUTURA DE PILHA
typedef struct tpilha {
    int dados[TAMANHO];
    int ini;
    int fim;
}Pilha;

//VARIAVEIS GLOBAIS
Pilha pilha1;
int op;

void pilhaMostrar();
void pilhaEntrar();
int pilhaSair();
void menuMostrar();

int main(){
    setlocale(LC_ALL," ");
    int op = 1;
    int backup;
    pilha1.ini = 0;
    pilha1.fim = 0;
    while(op != 0){
        pilhaMostrar();
        menuMostrar();
        scanf("%d",&op);
        switch(op) {
            case 1:
                pilhaEntrar();
            break;
            case 2:
                backup = pilhaSair();
                if(backup != -1){
                printf("%d", backup);
                }
            break;
            case 0:
                op = 0;
            break; 
        }   
    }
    //return 0;
}

void pilhaMostrar(){
    printf("[ ");
    for(int i = 0; i < TAMANHO; i++){
        printf("%d ",pilha1.dados[i]);
    }
    printf(" ]");
}

void pilhaEntrar(){
    if(pilha1.fim == TAMANHO){
        printf("\nERRO: Imposivel empilhar, pilha cheia ");
    }
    else {
        printf("\nDigite o valor a ser empilhado ");
        scanf("%d",&pilha1.dados[pilha1.fim]);
        pilha1.fim++;
    }
}

int pilhaSair(){
    if(pilha1.fim == 0){
        printf("\nA pilha já se encontra vazia ");
        return -1;
    }
    else{
        int backup;
        backup = pilha1.dados[pilha1.fim-1];
        pilha1.dados[pilha1.fim-1] = 0;
        pilha1.fim--;
        return backup;
    }
}

void menuMostrar(){
    printf("\nEscolha uma opção dentro do menu:\n\n");
    printf("| 1 - EMPILHAR | 2 - DESEMPILHAR | 0 - SAIR\n\n");
}
