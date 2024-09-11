/*Faça uma função recursiva que receba um inteiro N como parâmetro e retorne o N-ésimo
 termo da sequência de Fibonacci.
*/

#include <stdio.h>

int fibo(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n, nTermo;
    printf("Digite o n-esimo termo de fibonacci desejado: ");
    scanf("%d", &n);

    nTermo = fibo(n);

    printf("O %do termo e %d.\n", n, nTermo);

    return 0;
}