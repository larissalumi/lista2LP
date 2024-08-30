/* Ler um vetor v de números inteiros com 100 posições. Imprimir quantos números ímpares e quantos números pares existem
 no vetor.
*/

#include <stdio.h>

int main() {
    int vPares[99], vImpares[99], contP = 0, contI = 0;
    int v[] = {57, 3, 89, 22, 67, 11, 94, 38, 44, 74, 16, 2, 82, 28, 51, 76, 9, 41, 33, 85, 49, 60, 5, 96, 19, 71, 30, 62, 18, 54, 90, 6, 25, 98, 13, 80, 46, 1, 64, 23, 55, 36, 97, 4, 78, 20, 84, 14, 53, 45, 29, 92, 17, 58, 7, 73, 32, 68, 86, 40, 47, 35, 10, 50, 26, 83, 91, 42, 88, 66, 81, 61, 99, 12, 24, 93, 34, 63, 59, 95, 27, 77, 15, 87, 8, 48, 21, 65, 70, 79, 31, 75, 56, 43, 39, 52, 72, 37, 0, 69};

    for(int i=0; i < 100; i++){
        if(v[i] % 2 == 0){
            vPares[contP] = v[i];
            contP++;
        }
        else {
            vImpares[contI] = v[i];
            contI++;
        }
    }

    printf("Existem %d numeros impares e sao eles:\n", contI);
    for(int i = 0; i < contI; i++){
        printf("%d  ", vImpares[i]);
    }
    printf("\nExistem %d numeros pares e sao eles:\n", contP);
    for(int i = 0; i < contP; i++){
        printf("%d  ", vPares[i]);
    }
}