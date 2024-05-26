#include <stdio.h>
#include <stdlib.h>
#define TAM 3

struct tipoPilha {
        int dados[TAM];
        int ini;
        int topo;
    };
struct tipoPilha pilha;

void empilhar(int elemento){
    if(pilha.topo == TAM){
        printf("Pilha cheia\n");
        system("pause");
    } 
    else{''
        pilha.dados[pilha.topo] = elemento;
        pilha.topo++;
    }
}

int desempilhar(){
    int elemento;
    if(pilha.topo == pilha.ini){
        printf("Pilha Vazia\n");
        system("pause");
    }
    else{
        pilha.topo--;
        elemento = pilha.dados[pilha.topo];
        return elemento;
    }
}


int main(){
    pilha.topo = 0;
    pilha.ini = 0;
    empilhar(8);
    empilhar(16);
    empilhar(49);
    empilhar(78);
    empilhar(78);
    while(pilha.topo > pilha.ini){
        int elementosDesempilhados = desempilhar();
        printf("Elemento: %d\n", elementosDesempilhados);
    }

    printf("Fim");
}