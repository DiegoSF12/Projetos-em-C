//FUNCIONA DA MESMA FORMA QUE SUBROTINAS PORÉM NÃO EXISTE A OBRIGATORIEDADE DE SE RETORNAR ALGO 
//SINTAXE:
// void <nome_procedimento> (<parâmentros>){
//     <bloco de comandos>
// }  
#include <stdio.h>
#include <stdlib.h>

void somaDoisNumeros(){
    int x, y, resultado;
    printf("Digite o primeiro valor: \n");
    scanf("%d", &x);
    printf("Digite o segundo valor: \n");
    scanf("%d", &y);
    resultado = x + y;
    printf("Resultado: %d.\n", resultado);
}

int main(){
    somaDoisNumeros();
}