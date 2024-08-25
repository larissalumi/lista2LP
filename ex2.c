/* Ler um vetor v de números inteiros com 20 posições. Ler mais um número inteiro x. Buscar o número x no vetor v e imprimir apenas a primeira posição em que ele foi encontrado. Caso o número x não seja encontrado, imprimir a mensagem “Valor não encontrado”.
*/

#include <stdio.h>
 int main () {
    int vetor[19], x, exist=0;
    for(int i=0; i<19; i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero que voce quer buscar:");
    scanf("%d", &x);

    for(int i = 0; i < 19; i++){
        if(vetor[i] == x){
            printf("O seu numero existe na posicao %d", i+1);
            exist++;
            break;
        }
        if(exist==0){
            printf("Valor nao encontrado");
        }
    }
 }
