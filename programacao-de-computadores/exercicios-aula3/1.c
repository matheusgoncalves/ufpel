/* 1. Escreva um programa para ler um valor e escrever se é positivo ou negativo.
Considere o valor zero como positivo. */

#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor < 0) {
        printf("O valor %d e negativo.\n", valor);
    } else {
        printf("O valor %d e positivo.\n", valor);
    }

    return 0;
}