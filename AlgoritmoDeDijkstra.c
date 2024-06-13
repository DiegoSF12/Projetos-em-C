//BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//VARIAVEIS
int destino;
int origem;
int vertice = 0;

//PROTOTIPAÇÃO
void dijkstra(int vertices, int origem, int destino, int *custos);
void menuMostrar(void);
void grafoProcurar(void);
void grafoCriar(void);

//FUNÇÃO PRINCIPAL
int main(int argc, char **argv){
    int op = -1;
    //LAÇO PRINCIPAL DO MENU 
    do{
        //DESENHA O MENU NA TELA
        menuMostrar();
        scanf()
    }
}

//IMPLEMENTAÇÃO ALGORITMO DE DIJKSTRA 
void dijsktra(int vertice, int origem, int destino, int *custos){
    int i;
    int v;
    int cont = 0;
    int *ant;
    int *tmp;
    int *z //VERTICE PARA OS QUAIS SE CONHECE O CAMINHO MINIMO 
    double min;
    double dist[vertices]; /*VETOR COM OS CUSTOS DO CAMINHOS/ALOCA AS LINHAS DA MATRIZ*/
    ant = (int*) calloc (vertices, sizeof(int*));
    if(ant == NULL){
        
    }


}
