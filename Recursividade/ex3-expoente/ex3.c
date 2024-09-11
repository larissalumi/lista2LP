/*Faça uma função recursiva que receba dois inteiros como parâmetro BASE E EXPOENTE, 
e retorne a potência de .BASEEXPOENTE.
*/
#include <stdio.h>

int expo(int base, int expoente){
    if (expoente == 0){
        return 1;
    }
    if(expoente == 1){
        return base;
    }
    return base * expo(base, expoente - 1);
}

int main() {
    int base, expoente, total;

    printf("Digite a base da potencia: ");
    scanf("%d", &base);
    printf("Digite o expoente da potencia: ");
    scanf("%d", &expoente);

    total = expo(base, expoente);
    printf("%d elevado a %d e igual a %d", base, expoente, total);

    return 0;
}