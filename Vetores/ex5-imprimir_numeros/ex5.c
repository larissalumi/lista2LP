/*Faça um Programa que leia 20 números inteiros e armazene-os num vetor. Armazene os números pares no vetor PAR e os números IMPARES no vetor impar. Imprima os três vetores.
*/

#include <stdio.h>

int main() {
    int vet[20], vetPar[20], vetImpar[20], contImp = 0, contP = 0;
    for(int i = 0; i < 20; i++){
        printf("Digite o %do inteiro: ", i + 1);
        scanf("%d", &vet[i]);

        if(vet[i] % 2 == 0){
            vetPar[contP] = vet[i];
            contP++;
        }
        else{
            vetImpar[contImp] = vet[i];
            contImp++;
        }
    }

    printf("Todos os numeros:\n");
    for(int i = 0; i < 20; i++){
        printf("%d  ", vet[i]);
    }
    printf("\nNumeros pares:\n");
    for(int i = 0; i < contP; i++){
        printf("%d  ", vetPar[i]);
    }
    printf("\nNumeros impares:\n");
    for(int i = 0; i < contImp; i++){
        printf("%d  ", vetImpar[i]);
    }

}