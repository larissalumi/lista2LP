#include <stdio.h>

int menorElemento(int vet[], int n){
    int menor = vet[0];
    for(int i = 1; i < n; i++){
        if(menor > vet[i]){
            menor = vet[i];
        }
    }
    return menor;
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

    printf("O menor elemento e %d\n", menorElemento(vet, n));

    return 0;
}