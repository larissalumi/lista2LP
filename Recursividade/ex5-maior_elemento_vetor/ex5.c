/*Faça uma função recursiva que receba um vetor como parâmetro e retorne o maior elemento do vetor.
*/

#include <stdio.h>

int maiorElemento(int vetor[], int n){
    if(n == 1){
        return vetor[0];
    }
    int maior = maiorElemento(vetor, n-1);
    if (vetor[n - 1] > maior) {
        return vetor[n - 1];
    }
    return maior;
}

int main() {
    int n;
    printf("Digite o tamanho do seu vetor: ");
    scanf("%d", &n);

    int vetor[n]; //criação:
    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    int maior = maiorElemento(vetor, n);
    printf("O maior elemento do vetor e %d.", maior);
}