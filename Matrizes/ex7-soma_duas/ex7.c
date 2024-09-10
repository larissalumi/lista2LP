/*Escreva um algoritmo que leia duas matrizes reais de dimensão 3 x 5, 
calcule e imprima a soma das matrizes.
*/

#include <stdio.h>

int main () {
    int mat1[3][5], mat2[3][5], soma[3][5];

    for(int i = 0; i < 3; i++){
        for(int j = 0 ; j < 5; j++){
            printf("Digite o valor da primeira matriz: ");
            scanf("%d", &mat1[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0 ; j < 5; j++){
            printf("Digite o valor da segunda matriz: ");
            scanf("%d", &mat2[i][j]);
        }
    }

    //soma
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            soma[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    //display:
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            printf("%d  ", soma[i][j]);
        }
        printf("\n");
    }
    return 0;
}