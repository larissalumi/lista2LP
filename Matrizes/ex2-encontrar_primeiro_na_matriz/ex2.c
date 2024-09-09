/*Ler uma matriz m de números inteiros com 20x20 posições. Ler mais um número inteiro x. Buscar o número x na matriz m e imprimir todas as posições em que ele foi encontrado. Caso o número x não seja encontrado, imprimir a mensagem “Valor não encontrado”.
*/

#include <stdio.h>

int main () {
    int m[20][20], x, existe = 0;

    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            printf("Digite o numero na posicao %dX%d: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("Digite o numero que voce deseja encontrar: ");
    scanf("%d", &x);

    printf("Encontrando a primeira posicao com o numero %d...\n", x);
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            if(m[i][j] == x){
                printf("%dX%d\n", i, j);
                return 0;
            }
        }
    }
    if(existe != 1){
        printf("O numero %d nao foi encontrado.", x);
    }
    return 0;
}