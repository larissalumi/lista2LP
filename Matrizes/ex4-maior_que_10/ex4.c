/*Ler uma matriz 6 x 6, contar e escrever quantos valores maiores que 10 ela possui.*/

#include <stdio.h>

int main () {
    int matriz[6][6], cont = 0;

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            printf("Digite um numero: ");
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] > 10){
                cont++;
            }
        }
    }

    printf("Existem %d numeros maiores que 10.", cont);
    return 0;
}