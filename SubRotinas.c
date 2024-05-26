#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//FUNÇÕES EM C GERAM RETORNOS, TODAS ELAS
//AS MESMAS DEVEM SER DECLARADAS ANTES DA FUNÇÃO MAIN, PORÉM EXISTE A POSSIBLIDADE DE SE USAR O PROTÓTIPO DE FUNÇÕES PARA QUE SE POSSA 
//DECLARAR AS FUNÇÕES EM QUALQUER LUGAR DO CODIGO
//SINTAXE PARA CHAMAR NO PROTOTIPO: <tipo> <nome_da_função> ([<parâmetros>]);
//SINTAXE DE DECLARAÇÃO DE UMA FUNÇÃO: 
//<tipo> <nome_da_função> (
//   [<parâmetros>]) { <bloco_de_comandos>}

float convertePeso(float quilos){
    float gramas;
    gramas = quilos * 1000;
    return gramas;
}

int main(){
    float qui, gram;
    printf("Digite seu peso em quilos: \n");
    scanf("%f", &qui);
    gram = convertePeso(qui);
    printf("O peso é de %.1f gramas. \n", gram);
}