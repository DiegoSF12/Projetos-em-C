#include <stdio.h>
#include <stadlib.h>

#define TAM 3

struct Filas
{
    int dados[TAM];
    int ini;
    int fim;    
};
struct Filas fila1;

void enfileirar(int elemento){
    if(fila1.fim == TAM){
        printf("Fila cheia.\n");
        system("pause");
    }
    else{
        fila1.dados[fila1.fim] = elemento;
        fila.fim++;
    }
}
int desenfileirar(){
    int elemento;
    if(fila1.fim == fila1.ini){
        printf("Fila vazia.\n");
        system("pause");
    }
    else{
        elemento = fila1.dados[fila1.ini];
        for(int i = 0; i < TAM; i++){
            fila1.dados[i] = fila1.dados[i-1];
        }
        fila1.dados[fila1.fim] = 0;
        fila1.fim--;
        return elemento;
    }

    
}
