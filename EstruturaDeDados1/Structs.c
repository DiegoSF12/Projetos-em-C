//AS STUCTS OU REGISTROS, SÃO UMA FORMA DE CRIAMOS AGRUPAMENTO DE DADOS HETEROGENEOS
//SUPONDO QUE VAMOS CRIAR UM SISTEMA PARA GERIR UM ESTOQUE DE UM SUPER MERCADO, SERI ANECESSÁRIO QUE CRIASSEMOS "NOVOS" TIPOS DE DADOS
// E O MESMO PODE SER FEITO DA SEGUINTE FORMA

#include <stdio.h>
#include <string.h>

int main(){
    struct superMercado {
        int codigo;
        char nome [50];
        int quantidade;
        float valorCompra;
        float valorVenda;
    };
    struct superMercado p1;
    p1.codigo = 1006;
    strcpy(p1.nome, "Turbina Garret .50");
    p1.quantidade = 05;
    p1.valorCompra = 1785.79;
    p1.valorVenda = 2500.00;
    printf("--------------------------------------------------\n");
    printf("%d - %s - %d - %0.2f - %0.2f", p1.codigo, p1.nome, p1.quantidade, p1.valorCompra, p1.valorVenda);
    printf("\n--------------------------------------------------\n");
}
