#include <stdio.h>

int main() {
    char nome[10], consoante[10];
    int contador = 0;
    for (int i = 0; i < 10; i++){
        printf("Digite o %d caractere: ", i+1);
        scanf(" %c", &nome[i]);

        if(nome[i] !='a'&& nome[i] !='e' && nome[i] != 'i' && nome[i] != 'o' && nome[i] != 'u' && nome[i] != 'A'&& nome[i] !='E' && nome[i] != 'I' && nome[i] != 'O' && nome[i] != 'U') {
            consoante[contador] = nome[i];
            contador++;
        }
    }
    printf("Foram lidas %d consoantes, sao elas:\n", contador);
            for(int i = 0; i < contador; i++){
                printf("%c  ", consoante[i]);
            }

}