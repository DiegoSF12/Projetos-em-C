#include <stdio.h>
#include <string.h> //BIBLIOTECA QUE NOS PERMITE MANIPULAR STRINGS

int main(){
    char string[6]; //POSSUI UM TAMANHO UTILIZAVEL DE N-1 
    char str [6] = {"Teste"}; //OUTRA FORMA DE INICIALIZAR O VETOR
    char str1[6] = {'T','e','s','t','e'}; //UMA TERCEIRA FORMA DE SE INICIALIZAR
    char str2 [10];
    char str3 [10];

    string[0] = 'D'; 
    string[1] = 'i';
    string[2] = 'e';
    string[3] = 'g';
    string[4] = 'o';
    string[5] = '\0'; //TODO VETOR DE CARACTERE DEVE TER O \0 PARA FINALIZAR A STRING

    for(int i = 0; i < 6; i++){
        printf("%c",str[i]);
    }
    printf("\n");

    //OUTROS METODOS QUE PODEMOS USAR COM A BIBLIOTECA STRING.H
    //USANDO SCANF
    printf("Digite a frase com 10 caracteres\n");
    scanf("%s",str2); //ESSE METODO PERMITE SOMENTE FRASES SEM O USO DE ESPAÇO E TAMBÉM DISPENSA O USO DO "&"  PARA IDENTIDICAR UMA VARIAVEL
    fflush(stdin); //FUNÇÃO PARA LIMPAR O BUFFER DO TECLADO

    //USANDO O GETS
    printf("Agora digite uma outra frase\n");
    gets(str3); //DIFERENTE DO SCANF ESSE METODO NOS PERMITE O USO DE ESPAÇOS NAS STRINGS, CUIDADO, NÃO EXISTE LIMITADOR DE TAMANHO 
    fflush(stdin); //FUNÇÃO PARA LIMPAR O BUFFER DO TECLADO
    

}   