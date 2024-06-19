#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct livro{
    int codLivro;
    int qtdPag;
    char titulo[30];
    char autor[50];
}Livro;
typedef struct _Aluno{
    int codAluno;
    char nomeAluno[50];
    

}Aluno;


int main(){
    //Aluno *Aluno01 = (Aluno*) malloc (sizeof(Aluno));
    //Aluno01 -> codAluno = 01;

    char nome[15];
    setlocale(LC_ALL,"");
    printf("Antes de iniciarmos, por favor me informe o seu nome: ");
    scanf("%s",nome);
    printf("Seja bem vindo ao meu primeiro programa em C, %s",nome);
    printf("Oque deseja fazer agora?");
    printf("| 1 - usar a calculadora| 2 -");

}
