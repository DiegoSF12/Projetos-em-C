//PROGRAMA BASE PARA TESTES DE ORDENAÇÃO
//BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//CONSTANTES
#define tamanho 10

//VARIAVEIS
int lista[tamanho];
int ordenado[tamanho];
int opt = -1;
int qtd;

//PROTOTIPAÇÃO
void menuMostrar(void);
void listaMostrar(void);
void listaGerar(void);
void listaLer(void);
void listaLimpar(void);
void listaMostrarOrdenado(void);
void troca(int* a, int* b);
int bubbleSort(int vec[ ]);
int selectionSort(int vec[ ], int tam);
int insertionSort(int vec[ ], int tam);
int shellSort(int vec[ ], int tam);


//FUNÇÃO PRINCIPAL
int main(){
    srand(time(NULL));
    do{
        system("cls");
        listaMostrar();
        listaMostrarOrdenado();
        menuMostrar();
        scanf("%d", &opt);
        fflush(stdin);
        switch (opt) {
            case 1: 
                listaGerar();
            break;
            case 2:
                listaLer();
            break;
        }
    }while(opt != 0);
    system("pause");
    return 0;
}

//MOSTRAR CONTEUDO DA LISTA
void listaMostrar(void){
    printf("[ ");
    for(int i = 0; i < tamanho; i++){
        printf("%d |", lista[i]);
    }
    printf("]\n");
}

//MOSTRAR MENU
void menuMostrar(void){
    printf("1 - Gerar lista aleatoriamente");
    printf("2 - Criar lista manual");
    printf("0 - Sair...\n");
}

//GERAR UMA LISTA ALEATORIA
void listaGerar(void){
    for(int i = 0; i < tamanho; i++){
        lista[i] = rand() % 50;
    }
}

//PERMITE QUE O USUÁRIO ENTRE COM OS VALORES DA LISTA
void listaLer(void){
    for(int i = 0; i < tamanho; i++){
        system("cls");
        listaMostrar();
        printf("\nDigite o valor para a posição %d: ", i);
        scanf("%d", &lista[i]);
        fflush(stdin);
    }
}

//PREPARAR A LISTA PARA ORDENAÇÃO
void listaLimpar(){
    for(int i = 0; i < tamanho; i++){
        ordenado[i] = lista[i];
    }
}

//MOSTRA O CONTEUDO DA LISTA DE FORMA ORDENADA
void listaMostrarOrdenado(void){
    printf("[  ");
    for(int i = 0; i < tamanho; i++){
        printf("%d | ", ordenado[i]);
    }
    printf(" ] \nTempo = %d iteracoes\n", qtd);
}


/*APLICA O METODO DE BUBBLESORT
 * ESSE METODO SERVE PARA ORDENAR UM VETOR
 * ELE FUNCINA FAZENDO COMPARAÇÕES SEQUENCIAIS, CASO I > J, ELE TROCA OS DOI ELEMENTOS DE POSIÇÃO E VAI ASSIM ATÉM O ULTIMO ITEM DO VETOR
*/
int bubbleSort(int vec[ ]){
    int qtd, i, j, tmp;
    qtd = 0;
    for(i = 0; i < tamanho - 1; i++){
        for(j = 0; j < tamanho; j++){
            if(vec[i] > vec[j]){
                troca(&vec[i], &vec[j]);
            }
            qtd++;
        }
    }
    return qtd;
}

/*APLICA O MODO SELECTIONSORT
 * ESSE POR SUA VEZ, CONSISTE EM COMPARAR UM ELEMENTO X COM TODOS OS OUTROS 
 * ELEMENTOS DO VETOR E CASO ENCONTRE UM ELEMENTO Y QUE SEJA MENOR QUE X 
 * REALIZA A TROCA DAS POSIÇÕES
*/
int selectionSort(int vec[ ], int tam){
    int i, j, min, qtd = 0;
    for(i = 0; i < (tam - 1); i++){
        min = i;
        for(j = (i + 1); j < tam; j++ ){
            if(vec[j] < vec[min]){
                min = j;
            }
            qtd++;
        }
        if(i != min){
            troca(&vec[i], &vec[min]);
        }
    }
    return(qtd);
}

//APLICANDO O INSERTIONSORT
int insertionSort(int vec[ ], int tam){
    int i, j;
    int qtd = 0;
    for(i = 1; i < tam; i++){
        j = 1;
        while((vec[j] < vec[j - 1]) && (j != 0)){
            troca(&vec[j], &vec[j - 1]);
            j--;
            qtd++;
        }
    }
    return(qtd);
}

//APLICANDO O SHELLSORT
int shellSort(int vec[ ], int tam){
    int i, j, valor;
    int qtd = 0;
    int gap = 1;
    do{
        gap = 3 * gap + 1;
    }while(gap < tam);
    do {
        gap /= 3;
        for(i = 0; i < tam; i++){
            valor = vec[i];
            j = i - gap;
            while(j >= 0 && valor < vec[j]){
                vec[j + gap] = vec[j];
                j -= gap;
                qtd++;
            }
            vec[j + gap] = valor;
        }
    }while(gap > 1);
    return(qtd);
}

//FUNÇÃO GENERICA DE TROCA DE VALORES
void troca(int* a, int* b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}