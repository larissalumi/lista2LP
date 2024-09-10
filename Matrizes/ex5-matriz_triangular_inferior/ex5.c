/*Ler uma matriz 8 x 8 e transformá-la em uma matriz triangular inferior, 
atribuindo zero a todos os elementos acima da diagonal principal 
(ou seja, dada uma matriz A, para qualquer i > j, A[i,j] = 0). 

Imprimir a matriz no final.
*/

#include <stdio.h>
#define NUM 3

int main() {
    int matriz[NUM][NUM];

    //ler a matriz
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            printf("Digite um numero para a posicao %dX%d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //transformação:
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            if(i < j){
                matriz[i][j] = 0;
            }
        }
    }

    //display:
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}