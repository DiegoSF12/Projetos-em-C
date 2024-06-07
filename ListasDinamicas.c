#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct NO{
    int dados;
    struct NO* prox;
}NO;

typedef struct Lista{
    NO* ini;
    NO* fim;
}Lista;

Lista Lista1 = {NULL, NULL};

void insereNoInicio(int elemento){
    NO *ptr = (NO*) malloc (sizeof(NO));
    if(ptr == NULL){
        printf("ERRO: Alocação de memoria não foi realizado");
    }
    else{
        ptr->dados = elemento;
        ptr->prox = NULL;
        if(Lista1.ini == NULL){
            Lista1.fim = ptr;
        }
        else{
            ptr->prox = Lista1.ini;
        }
        Lista1.ini = ptr;
    }
}

void insereNoFinal(int elemento){
    NO *ptr = (NO*) malloc (sizeof(NO));
    if(ptr == NULL){
        printf("ERRO: Falha ao alocar memoria");
    }
    else{
        ptr->dados = elemento;
        ptr->prox = NULL;
        if(Lista1.ini == NULL){
            Lista1.ini = ptr;
            Lista1.fim = ptr;
        }
        else{
            Lista1.fim -> prox = ptr;
            Lista1.fim = ptr;
        }    
    }
}

void menu(){
    printf("1 - Para inserir no inicio");
    printf("2 - ");
    printf();
    printf();
}



int main (){
    


    return 0;
}