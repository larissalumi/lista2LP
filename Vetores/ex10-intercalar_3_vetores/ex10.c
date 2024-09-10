/*Altere o programa anterior, intercalando 3 vetores de 10 elementos cada.
*/

#include <stdio.h>
#define NUM 4

int main () {
    int vet1[NUM], vet2[NUM], vet3[NUM], vetor[NUM*3], aux1 = 0, aux2 = 0, aux3 = 0;

    //construção dos vetores:
    for(int i = 0; i < NUM; i++){
        printf("Digite um numero para o primeiro vetor: ");
        scanf("%d", &vet1[i]);
    }
    for(int i = 0; i < NUM; i++){
        printf("Digite um numero para o segundo vetor: ");
        scanf("%d", &vet2[i]);
    }
    for(int i = 0; i < NUM; i++){
        printf("Digite um numero para o terceiro vetor: ");
        scanf("%d", &vet3[i]);
    }

    //construção do vetor intercalado:
    for(int i = 0; i < NUM*3; i++){
        if(i % 3 == 0){
            vetor[i] = vet1[aux1];
            aux1 ++;
        }
        else if(i % 3 == 1){
            vetor[i] = vet2[aux2];
            aux2 ++;
        }
        else if(i % 3 == 2) {
            vetor[i] = vet3[aux3];
            aux3 ++;
        }
    }

    //display:
    for(int i = 0; i < NUM * 3; i++){
        printf("%d  ", vetor[i]);
    }

    return 0;
}