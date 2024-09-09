/*Declarar uma matriz 5 x 5 e preencher com 1s a diagonal principal e com 0s os demais elementos. No final, escreva a matriz obtida.
*/

#include <stdio.h>

int main () {
    int matriz[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == j){
                matriz[i][j] = 1;
            }
            else {
                matriz[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
}