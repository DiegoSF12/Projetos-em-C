#include <stdio.h>
#include <stdlib.h>

float convPeso(float q) //PASSAGEM DE PARAMETRO FORMAL && PASSAGEM DE PARAMETRO POR VALOR, DEFINIDO NO INCIO DA CRIAÇÃO DA SUBROTINA
{
    float g = q * 1000;
    return g;
}

//float convPeso2(float *x)
{
   x = x * 1000;

}

int main()
{
    float quilo = 10;
    float pes = convPeso(quilo); //PASSAGEM DE PARAMETRO REAL && PASSAGEM DE PARAMETRO POR VALOR, QUANDO A FUNÇÃO É INVOCADA (ARGUMENTOS)
    printf("Gramas: %f.", pes);
}

