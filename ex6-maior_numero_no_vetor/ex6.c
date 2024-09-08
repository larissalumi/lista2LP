#include <stdio.h>

int maiorElemento(int vet[], int n){
    int maior = vet[0];
    for(int i = 1; i < n; i++){
        if(maior < vet[i]){
            maior = vet[i];
        }
    }
    return maior;
}

int main() {
    int n;
    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);
    while(n <= 0){
        printf("\nNumero invalido. Tente novamente: ");
        scanf("%d", &n);
    }

    int vet[n];
    for(int i = 0; i < n; i++){
        printf("Digite o %do elemento: ", i+1);
        scanf("%d", &vet[i]);
    }

    printf("O maior elemento e %d\n", maiorElemento(vet, n));

    return 0;
}