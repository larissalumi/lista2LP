/*Leia um vetor de 20 posições. Imprima a soma dos elementos do vetor; a média dos elementos do vetor; e quantos elementos são maiores do que a média dos elementos do vetor.
*/

#include <stdio.h>
#define NUM 20

int main () {
    int vet1[NUM], vet2[NUM], vetor[NUM*2], aux1 = 0, aux2 = 0;

    //construção dos vetores:
    for(int i = 0; i < NUM; i++){
        printf("Digite um numero para o primeiro vetor: ");
        scanf("%d", &vet1[i]);
    }
    for(int i = 0; i < NUM; i++){
        printf("Digite um numero para o segundo vetor: ");
        scanf("%d", &vet2[i]);
    }

    //construção do vetor intercalado:
    for(int i = 0; i < NUM*2; i++){
        if(i % 2 == 0){
            vetor[i] = vet1[aux1];
            aux1++;
        }
        else {
            vetor[i] = vet2[aux2];
            aux2++;
        }
    }

    //display:
    for(int i = 0; i < NUM * 2; i++){
        printf("%d  ", vetor[i]);
    }

    return 0;
}