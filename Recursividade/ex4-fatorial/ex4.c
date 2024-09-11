/*Faça uma função recursiva que receba um número inteiro como parâmetro e 
retorne o fatorial desse número.
*/

#include <stdio.h>

int fat(int n){
    if(n == 0){
        return 1;
    }
    return n * fat(n-1);
}

int main() {
    int n, fatorial;

    printf("Digite o numero para obter o fatorial: ");
    scanf("%d", &n);

    fatorial = fat(n);

    printf("%d! = %d", n, fatorial);

    return 0;
}