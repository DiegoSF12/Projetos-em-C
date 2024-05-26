#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ponteiro;
    int n = 5;
    int i;
    
    // Alocação dinâmica de memória para o array
    ponteiro = (int *)malloc(sizeof(int) * n);
    if (ponteiro == NULL) {
        printf("Falha na alocação de memória!\n");
        return 1;
    }
    
    // Preenchendo o array
    for (i = 0; i < n; i++) {
        ponteiro[i] = i;
    }
    
    // Imprimindo o array
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ponteiro[i]);
    }
    
    // Liberando a memória alocada
    free(ponteiro);
    
    return 0;
}
