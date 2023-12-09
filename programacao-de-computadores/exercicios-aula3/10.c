/* 10. Implemente um programa para ler um número inteiro (considere que serão lidos
apenas valores positivos e inteiros) e escrever se é par ou ímpar. */

#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor % 2 != 0) {
        printf("O valor %d e impar.\n", valor);
    } else {
        printf("O valor %d e par.\n", valor);
    }

    return 0;
}