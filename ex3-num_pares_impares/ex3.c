#include <stdio.h>

int main() {
    int v[100], contP = 0, contI = 0;

    for(int i = 0; i < 100; i++){
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &v[i]);

        if(v[i] % 2 == 0){
            contP++;
        }
        else {
            contI++;
        }
    }
    printf("Existem %d numeros impares e %d numeros pares.\n", contI, contP);

    return 0;
}