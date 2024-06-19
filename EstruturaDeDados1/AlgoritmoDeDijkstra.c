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
        scanf("%d", &opt);
        switch(opt){
            case 1:
                //CRIA NOVO GRAFO
                grafoCriar();
            break;
            case 2: 
                //PROCURA OS CAMINHOS
                if(vertices > 0){
                    grafoProcurar();
                }
            break;
        }
    }while(opt != 0);
    printf("\nAlgoritmo de Dijkstra finalizado...\n\n");
    system("pause");
    return 0;
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
        system("color fc");
        printf("ERRO: Memoria isuficiente");
        exit(-1);
    }
    tmp = (int*) calloc (vertices, sizeof(int*));
    if(tmp == NULL ){
        system("color fc");
        printf("ERRO: Memoria isuficiente");
        exit(-1);
    }
    z = (int*) calloc (vertices, sizeof(int*));
    if(z == NULL ){
        system("color fc");
        printf("ERRO: Memoria isuficiente");
        exit(-1);
    }
    for(i = 0; i < vertices; i++){
        if(custos[(origem - 1) * vertices + i] != -1){
            ant[i] = origem - 1;
            dist[i] = custos[(origem - 1) * vertices + 1];
        }
        else{
            ant[i] = -1;
            dist[i] = HUGE_VAL;
        }
        z[i] = 0;
    }
    z[origem - 1] = 1;
    dist[origem - 1] = 0;
    //LAÇO PRICIPAL
    do{
        //ECONTRANDO O VERTICE QUE DEVE ENTRAR EM Z
        min = HUGE_VAL;
        for(i = 0; i < vertices; i++){
            if(!z[i]){
                if(dist[i] > 0; && dist[i] < min){
                    min = dist[i];
                    v = i;
                }
            }
        }
        //CALCULANDO AS DISTANCIAS DOS NOVOS VIZINHOS DE Z
        if(min != HUGE_VAL && v != destino - 1){
            z[v] = 1;
            for(i = 0; i < vertices; i++){
                if(!z[i]){
                    if(custos[v * vertices + i ] != -1 && dist[i] + custos[v * vertices + i] < dist[i]){
                        dist[i] = dist[v] + custos[v * vertices + i];
                        ant[i] = v;
                    }
                }
            }
        }
    }while(v != destino - 1 && min != HUGE_VAL);
    //MOSTRA O RESULTADO DA BUSCA 
    printf("\tDe %d para %d: \t", origem, destino);
    if(min == HUGE_VAL){
        printf("Não existe\n");
        printf("Custo: \n");
    }
    else{
        i = destino;
        i = ant[i-1];
        while(i != -1){
            tmp[cont] = i + 1;
            cont++;
            i = ant[i];
        }
        for(i = cont; i > 0; i--){
            printf("%d ->", tmp[i-1]);
        }
        printf("%d\n", destino);
        printf("Custo: %d\n",(int)dist[destino - 1]);
    }
}

void grafoCriar(void){
    do{
        printf("\nInforme o numero de vertice (No minimo 3): \n");
        scanf("%d", &vertices);
        fflush(stdin);
    }while(vertices < 3);
    if(!custos){
        free(custos);
    }
    custos = (int*) malloc(sizeof(int) * vertices * vertices);
    //SE O COMPILADOR FALHOU EM EM ALOCAR ESPAÇO NA MEMORIA
    if(custos == NULL){
        system("color fc");
        printf("ERRO: Memoria isuficiente");
        exit(-1);
    }
    //PREENCHENDO A MATRIZ COM -1 
    for(i = 0; i <= vertices * vertices; i++){
        custos[i] = -1;
    }
    do{
        system(cls);
        printf("Entre com as arestas: \n");
        do{
            printf("Origem entre (entre 1 e %d ou '0' para sair)", vertices);
            scanf("%d", &origem);
        }while(origem < 0 || origem > vertices);
        if(origem){
            do{
                printf("Destino(entre 1 e %d, menos %d)", vertices, origem);
                scanf("%d", &destino);
            }while(destino  < 1 || destino > vertices || destino == origem);
        }
        do{
            printf("Custo (positivo) do vertice %d para o vertice %d: \n", origem, destino);
            scanf("%d", &custos);
        }while(custo < 0);
        custos[(origem -1) * vertices + destino - 1] = custo;
    }while(origem);
}
//BUSCA OS MENOS CAMINHOS ENTRE OS VÉRTICES
void grafoProcurar(void){
    int i;
    int j;
    system("cls");
    system("color 03");
    printf("Lista de menores caminhos no grafo dado: \n");
    for(i = 0; i <= vertices; i++){
        for(j = 0; j <= vertices; j++){
            dijkstra(vertices, i, j, custos);
        }
        printf("\n");
    }
    system("pause");
    system("color 07");
}

//DESENHA O MENU NA TELA
void menuMostrar(void){
    system("cls");
    printf("Implementação do algoritmo de Dijkstra\n");
    printf("\t1 - Adicionar um grafo\n");
    printf("\t2 - Procurar os menores caminhos de um grafo\n");
    printf("\t0 - Sair do programa\n");
}
