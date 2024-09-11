#include <stdio.h>
#include <string.h>

int palindromo(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        if (str[inicio] != str[fim]) {
            return 0;
        }
        inicio++;
        fim--;
    }
    return 1;
}

int main() {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (palindromo(palavra)) {
        printf("E um palindromo.\n");
    } else {
        printf("Nao e um palindromo.\n");
    }
    
    return 0;
}
