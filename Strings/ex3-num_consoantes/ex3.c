/*Para as duas questões a seguir, faça as seguintes funções: 
uma função que recebe um caracter como parâmetro e retorne 1 se for letra ae 0 caso contrário; 
uma função que receba um caracter como parâmetro e retorne 1 se for vogal e 0 caso contrário; 
uma função que receba um caracter como parâmetro e retorne 1 se for consoante e 0 caso contrário.

Faça uma função que receba uma string como parâmetro e retorne o número de consoantes que existem na string.
*/

#include <stdio.h>
#include <string.h>

int ehLetra(char n) {
    if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z')) {
        return 1; //letra
    } 
    return 0; //não é letra
}

char viraMinuscula(char n) {
    if (n >= 'A' && n <= 'Z') {
        return n + ('a' - 'A'); //se a letra for maiúscula, ela vira minúscula
    }
    return n;
}


int ehVogal(char n) {
    if (!ehLetra(n)) {
        return 0; //se não é letra, não é vogal
    }

    n = viraMinuscula(n); //converte para minúscula se for maiúscula

    //verificação:
    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u') {
        return 1; //vogal
    } 
    return 0; //não é vogal
}


int ehConsoante(char n) {
    if (ehLetra(n) && !ehVogal(n)) {
        return 1; //se é letra, mas não é vogal, é consoante
    }
    return 0; //não é consoante
}

int contaConsoantes(char str[]) {
    int cont = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (ehConsoante(str[i])) {
            cont++;
        }
    }
    return cont;
}

int main() {
    char palavra[100];

    printf("Digite uma string: ");
    scanf("%s", palavra); 

    int totalConsoantes = contaConsoantes(palavra);
    printf("A palavra '%s' tem %d consoantes.\n", palavra, totalConsoantes);

    return 0;
}

