//INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//NUMERO MÁXIMO DE DE VÉRTICES
#define MAXV 8

//STRUCT DE UM NÓ
typedef struct str_no{
    int id;
    struct str_no *proximo;
}str_no;

//GRAFO
struct str_no grafo[MAXV];

//METODO PARA REALIZAR A BUSCA EM PROFUNDIDADE
void buscaEmProfundidade(struct str_no g[], int inicio, int alvo){

    int pilha[MAXV]; //CRIAÇÃO DA MINHA PILHA
    bool visitado[MAXV]; //NÓS VISITADOS
    int indice = 0; //INDICE DO TOPO DA PILHA
    bool achou = false; //FLAG DE CONTROLE (NÃO VISITADOS)
    int corrente = inicio;
    struct str_no *ptr;
    printf("==========Busca em Profundidade============\n");
    //MARCANDO TODOS O NÓS COMO "NÃO VISITADOS"
    for(int i = 0; i < MAXV; i++){
        visitado[i] = false;
    }
    while(true){
        //NÓ CORRENTE NÃO VISITADO? MARQUE COMO VISITADO
        //EMPILHE O NÓ CORRENTE
        if(!visitado[corrente]){
            printf("VISITANDO: %d \n", corrente);
            if(corrente == alvo){
                printf("Alvo encontrado!\n\n");
                return;
            }
            visitado[corrente] = true;
            pilha[indice] = corrente;
            indice++;
        }
        //BUSCANDO POR NÓS ADJACENTES NÃO VISITADOS
        achou = false;
        for(ptr = g[corrente].proximo; ptr != NULL; ptr = ptr->proximo){
            if(!visitado[ptr->id]){
                achou = true;
                break;
            }
        }
        if(achou){
            //ATUALIZANDO O NÓ CORRENTE
            corrente = ptr->id;
        }
        else{
            //NÃO HÁ VERTICES ADJACENTES NÃO VISITADOS
            //TENTANDO DESEMPILHAR O VÉRTICE DO TOPO
            indice--;
            if(indice == -1){
                //NÃO HÁ MAIS VERTICES NÃO VISITADOS
                printf("Encerrando a busca\n");
                break;
            }
            corrente = pilha[indice];
        }
    }
}