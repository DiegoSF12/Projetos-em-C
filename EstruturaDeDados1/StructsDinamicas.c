#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _aluno{
    char nome[50];
    int codAluno;
}Aluno;

int main(){
    
    Aluno *aluno2 = (Aluno*)malloc(sizeof(Aluno));
    strcpy(aluno2->nome, "Anderson");
    aluno2 -> codAluno = 78;


    Aluno Diego;
    strcpy(Diego.nome, "Diego Francisco de souza");
    Diego.codAluno = 46;


    printf("sizeof(Alunos): %d\n\n", sizeof(Aluno));
    printf("Aluno: %s \nCodigo: %d\n", Diego.nome,Diego.codAluno);
    printf("Aluno: %s \nCodigo: %d\n", aluno2->nome, aluno2->codAluno);

    free(aluno2);
    
}