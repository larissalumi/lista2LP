/*Faça uma função recursiva que receba um inteiro N como parâmetro e imprima a sequência de Fibonacci.
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
    printf("Digite o n-esimo termo de fibonacci desejado (comecando do 0): ");
    scanf("%d", &n);

    printf("A sequencia ate o %do termo e:\n", n+1);
    for(int i = 0; i <= n; i++){
        nTermo = fibo(i);
        printf("%d   ", nTermo);
    }
    
    return 0;
}