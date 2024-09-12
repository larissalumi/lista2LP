/*Dada uma matriz MAT de inteiros com 4 x 5 elementos, 
faça um algoritmo para somar os elementos de cada linha gerando o vetor SOMALINHA. 
Em seguida, some os valores dos elementos do vetor em uma variável TOTAL, 
que deve ser impressa ao final.
*/

#include <stdio.h>

int main () {
    int mat[4][5], somalinha[5], aux = 0, total = 0;

    //nomear elementos
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            printf("Digite um valor %dX%d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    //somalinha
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            aux += mat[i][j]; 
        }
        somalinha[i] = aux;
        aux = 0;
    }

    //total
    for(int i = 0; i < 4; i++){
        total += somalinha[i];
    }

    //display:
    printf("Total: %d", total);
    return 0;
}
