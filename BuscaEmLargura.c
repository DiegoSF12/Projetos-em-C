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

//CORPO DO METODO DE BUSCA EM LARGURA
void bsucaEmLargura(struct str_no g[], int inicio, int alvo){
    
    int fila[MAXV]; //FILA
    bool visitado[MAXV]; //NÓS QUE FORAM VISITADOS
    int indice = 0; //CONTROLE DA FILA;
    bool achou = false; //FLAG(NÃO VISITADOS)
    int corrente = inicio;
    struct str_no *ptr;
    printf("==========Busca em Profundidade============\n");
    //MARCANDO OS NÓS NÃO VISITADOS
    for(int i = 0; i < MAXV; i++){
        visitado[i] = false;
    }
    //PARTINDO DO PRIMEIRO VÉRTICE
    printf("Visitando o Vértice: %d\n",corrente);
    visitado[corrente] = true;
    fila[indice] = corrente;
    indice++;
    while(true){
        //VISITA OS NÓS ADJACENTES DO VERTICE CORRENTE
        for(ptr = g[corrente].proximo; ptr != NULL; ptr = ptr->proximo){
            //CASO O CORRENTE AINDA NÃO TENHA SIDO VISITADO
            if(!visitado[corrente]){
                //ENFILEIRA E MARCA COMO VISITADO
                printf("Visitando o Vértice; %d\n", corrente);
                if(corrente == alvo){
                    printf("Alvo encontrado!\n\n");
                    return;
                }
                visitado[corrente] = true;
                fila[indice] = corrente;
                indice++;
            }
        }
        //CASO A FILA NÃO ESTEJA VAZIA
        if(indice != 0){
            //ATUALIZANDO VÉRTICE CORRENTE
            corrente = fila[0];
            //DESENFILEIRANDO O PRIMEIRO VÉRTICE.
            for(int i = 0; i < indice; i++){
                fila[i-1] = fila[i];
            }
            indice--;
        }
        else{
            //NÃO HÁ MAIS VÉRTICES PARA VISITAR
            printf("Encerrando a busca.\n\n");
            break;
        }
    }
    return;
}