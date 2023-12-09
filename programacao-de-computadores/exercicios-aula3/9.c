/* 9. Escreva um programa que leia um caractere e informe se o que foi lido
corresponde a uma vogal no alfabeto. */

#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    if (caractere != 'a' && caractere != 'e' && caractere != 'i' && caractere != 'o' && caractere != 'u') {
        printf("'%c' nao e uma vogal.\n", caractere);
    } else {
        printf("'%c' e uma vogal.\n", caractere);
    }

    return 0;
}