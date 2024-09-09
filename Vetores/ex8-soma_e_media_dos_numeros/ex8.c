/*Leia um vetor de 20 posições. Imprima a soma dos elementos do vetor; a média dos elementos do vetor; e quantos elementos são maiores do que a média dos elementos do vetor.
*/
#include <stdio.h>

int sum(int vet[]){
    int soma = 0;
    for(int i = 0; i < 20; i++){
        soma += vet[i];
    }
    return soma;
}

int main () {
    int vet[20];

    //leitura
    for(int i = 0; i < 20; i++){
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &vet[i]);
    }

    //calculo da soma e média
    int soma = sum(vet);
    float media = soma / 20.0;

    //display da soma, média e elementos maiores que a média
    printf("A soma dos elementos e %d, e a media e %.2f.\nOs elementos maiores que a media sao:\n", soma, media);
    for(int i = 0; i < 20; i++){
        //elementos maiores que a media são impressos
        if(vet[i] > media){
            printf("%d   ", vet[i]); 
        }
    }
    return 0;
}
