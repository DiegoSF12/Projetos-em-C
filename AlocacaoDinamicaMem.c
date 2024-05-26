//A ALOCAÇÃO DINAMICA DE MEMORIA SERVE PARA QUE O PROGRAMADOR ESPECIFIQUE O TAMANHO QUE A VARIAVEL EM QUESYÃO VAI ASSUMIR
//A SUA SINTAXE É DA SEGUINTE FORMA: <ponteiro> = (<tipo de dado de retonrno*) malloc (<tamanho do espaço em memoria que será alocado>);
//CASO NÃO SEJA POSSIVEL SABE DE ANTEMÃO QUAL O TAMANHO DO ESPAÇO NECESSARIO PODEMOS USAR A FUNÇÃO SIZEOF
//SINTAXE SIZEOF: <ponteiro> = (<tipo de dado de retonrno*) malloc (<sizeof(<tipo de dado>)>);

#include <stdio.h>
#include <stdli>
int main(){
    int tam = 0;
    int *p;
    int *vetor;
    p = (int*) malloc(4);
    vetor = (int*) malloc (sizeof(int)*10); //ESSA É A FORMA DE ALOCAR MEMORIA DE FORMA DINAMICA PARA UM VETOR 

    if(p == NULL){ //ESSE É O CENARIO POSSIVEL CASO TODA A MEMORIA ESTIVESSE OCUPADA POR OUTRAS VARIAVEIS
        printf("ERRO!\n");
    } 
    else{
        *p = 10;
        printf("p: %d\n", *p);
        free(p);//TODAS AS VEZES QUE FOR ALOCADA A MEMORIA DE FORMA DINAMICA VOCÊ DEVE USAR O FREE() PARA LIBERAR A MEMORIA ALOCADA
    }
    tam = sizeof(double);
    printf("%d", tam);
    return 0;
}      