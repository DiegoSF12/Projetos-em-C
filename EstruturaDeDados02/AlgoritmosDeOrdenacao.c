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

//FUNÇÃO PRINCIPAL
int main(){
    srand(time(NULL));
    do{
        system("cls");
        listaMostrar();
        listaMostrarOrdenado();
        menuMostrar();
        scanf("%d", &opt);
        switch (opt) {
            case 1: 
                listaGerar();
            break;
            case 2:
                listaLer();
            break;
        }while(opt != 0);
        system("pause");
        return 0;
    }
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
void listaLimpar(void){
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