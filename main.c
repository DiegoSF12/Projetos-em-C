#include <stdio.h>

int main(){
       int idade = 0;
       float alturaMin = 1.70;
       float alturaPessoa;
       printf("Seja bem vindo ao Beto Carreiro");
       printf("Qual a sua altura?\n");
       scanf("%f", &alturaPessoa);
       printf("Agora informe a sua idade");
       scanf("%d",&idade);
       if(idade < 12 && alturaPessoa < alturaMin){
              printf("Acesso restrito devido a sua idade ou altura");
       }
       else{
              printf("Se divirta");
       }
       printf("Hello, World");
       return 0;
}

