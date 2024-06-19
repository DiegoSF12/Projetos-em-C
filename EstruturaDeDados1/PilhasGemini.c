#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define TAM 3;

struct tipoPilha {
  int dados[TAM];
  int ini;
  int topo;
};

struct tipo_pilha pilha;

void empilhar(int elemento) {
  if (pilha.topo == TAM) {
    printf("Pilha cheia\n");
    system("pause");
  } else {
    pilha.dados[pilha.topo] = elemento;
    pilha.topo++;
  }
}

int desempilhar() {
  int elemento;
  if (pilha.topo == pilha.ini) {
    printf("Pilha Vazia\n");
    system("pause");
  } else {
    pilha.topo--;
    elemento = pilha.dados[pilha.topo];
    return elemento;
  }
}

int main() {
  pilha.ini = 0;
  pilha.topo = 0;

  empilhar(8);
  empilhar(16);
  empilhar(49);

  // Verifica se a pilha ainda tem espaço antes de empilhar o quarto elemento
  if (pilha.topo < TAM) {
    empilhar(78);
  } else {
    printf("Pilha cheia\n");
  }

  // Desempilha e armazena o elemento em uma variável
  int elementoDesempilhado = desempilhar();
  printf("Elemento desempilhado: %d\n", elementoDesempilhado);

  return 0;
}
