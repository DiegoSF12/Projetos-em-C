#include <stdio.h>
#include <stdbool.h>

int main(){
    //
    bool x = true;
    int i = 0;
    int count = 0; //Caso seja da minha vontade eu posso declarar a variavel contadora dentro dos parametros do laço de repetição, como no Java

    for(int count = 0; count <= 100; count++){
        printf("Aguarde...%d\n",count);
    }
    
    while(i <= 100){  //Se faz necessário a inicialização da variavel de controle no momento em que ela for declarada  
        printf("Aguardee...%d\n", i);
        i = i + 2;

    }
}

