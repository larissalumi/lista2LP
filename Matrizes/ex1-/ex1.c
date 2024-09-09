/*Ler uma matriz m de números inteiros com 20x20 posições. Ler mais um número inteiro x. Buscar o número x na matriz m e imprimir todas as posições em que ele foi encontrado. Caso o número x não seja encontrado, imprimir a mensagem “Valor não encontrado”.
*/

#include <stdio.h>

int main () {
    int matriz[20][20], n, existe = 0;

    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            printf("Digite o numero na posicao %dX%d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o numero que voce deseja encontrar: ");
    scanf("%d", &n);

    printf("Encontrando as posicoes com o numero %d...\n", n);
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            if(matriz[i][j] == n){
                printf("%dX%d\n", i, j);
                existe = 1;
            }
        }
    }
    if(existe != 1){
        printf("O numero %d nao foi encontrado.", n);
    }
    return 0;
}