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

void imprimir(){
    NO* atual = Lista1.ini;
    printf("Elementos da Lista: ");
    while(atual != NULL){
        printf("| %d |",atual->dados);
        atual = atual->prox;
    }
    printf("----NULL\n\n");

}

void menu(){
    printf("1 - Para inserir no inicio\n");
    printf("2 - Para inserir no fim\n");
    printf("3 - Para imprimir na tela\n");
    printf("0 - Sair\n\n");
}



int main (){
    int op = 0;   
    int dado = 0; 
    do{
        printf("Para iniciarmos, escolha uma das opções abaixo:\n");
        menu();
        scanf("%d", &op);
        fflush(stdin);
        switch(op){
            case 1:
                printf("Informe o elemento a ser inserido: ");
                scanf("%d", &dado);
                fflush(stdin);
                insereNoInicio(dado);
            break;
            case 2:
                printf("Informe o elemento que será inserido: ");
                scanf("%d", &dado);
                fflush(stdin);
                insereNoFinal(dado);
            break;
            case 3:
                imprimir();
            break;
            default:
                printf("Valor digitado invalido");
            break;
        }
    }while(op != 0);


    return 0;
}