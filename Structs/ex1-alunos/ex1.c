/*Crie um tipo de registro que contenha os seguintes campos: Nome, RA, frequencia, notas[3] e media. 
Crie um vetor de variáveis deste registro.

Falta: Faça um programa que permita inserir, remover, visualizar e buscar elementos do registro pelo RA.
*/

#include <stdio.h>

struct registro {
        char nome[30]; int ra; float frequencia; float notas[3]; float media;
};

void main(){
    int n;
    printf("Digite a quantidade de alunos na sala:");
    scanf("%d", &n);

    getchar(); //limpar o buffer

    struct registro aluno[n];

    for(int i = 0; i < n; i++){
        printf("--%do aluno----\nNome: ", i+1);
        fgets(aluno[i].nome, 30, stdin);
        printf("RA: ");
        scanf("%d", &aluno[i].ra);
        printf("Frequencia: ");
        scanf("%f", &aluno[i].frequencia);
        printf("--Notas--\nP1: ");
        scanf("%f", &aluno[i].notas[0]);
        printf("P2: ");
        scanf("%f", &aluno[i].notas[1]);
        printf("P3: ");
        scanf("%f", &aluno[i].notas[2]);

        aluno[i].media = (aluno[i].notas[0] + aluno[i].notas[1] + aluno[i].notas[2]) / 3;
        printf("Media: %.2f", aluno[i].media);
    }

}