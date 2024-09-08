#include <stdio.h>
 int main () {
    int vetor[19], x, exist=0;
    for(int i = 0; i < 19; i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero que voce quer buscar:");
    scanf("%d", &x);

    for(int i = 0; i < 19; i++){
        if(vetor[i] == x && exist == 0){
            printf("O seu numero existe em:\n   %d  |  ", i+1);
            exist = 1;
            continue;
        }
        if(vetor[i] == x){
            printf("%d  |  ", i+1);
            exist = 1;
        }
    }
    if(exist==0){
        printf("Valor nao encontrado");
    }
 }
