//FORMA DE SE CRIAR VETORES PARA UTILIZAR STUCTS

#include <stdio.h>
#include <string.h>

int main(){
    struct produto
    {
        int cod;
        float preco;
        char descr [50];
    };
    
    struct produto lista[10];
    for(int i = 0; i < 10; i++){
        lista[i].cod = i;

        printf("Digite o valor do produto %d: \n",i+1);
        scanf("%0.2f", lista[i].preco);
        fflush(stdin);

        printf("Agora digite a descrição do produto %d: \n", i + 1);
        gets(lista[i].descr);
        fflush(stdin);
    }
    return 0;
}