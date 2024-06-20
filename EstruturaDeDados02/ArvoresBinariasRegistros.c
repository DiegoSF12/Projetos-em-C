/* Arvore binária em vetor estático:
 * Estrutura(Registro em C):
   * Referência á posição do filho esquerdo;
   * Referência á posição do filho direiro;
   * Referência ao NÓ pai:
   * Valor ou rótulo;

 * Arvore binária dinâmica:
   * Mesma estrutura recém citada(Registro similar).
   * Cada NÓ da estrutura é alocado dinamincamente
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct str_No{
    int dado;
    str_No *esq;
    str_No *dir;
    str_No *pai;
}Arvore;
s
InsereNoArvore(Arvore pai, int dado);
