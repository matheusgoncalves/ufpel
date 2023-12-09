/* 11. Crie um programa que, ao ler dois valores, informe se a soma dos valores é par
ou ímpar (como no convencional jogo de par-ou-ímpar). */

#include <stdio.h>

int main() {
    int valor1, valor2, soma;

    printf("Digite um primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite um segundo valor: ");
    scanf("%d", &valor2);

    soma = valor1 + valor2;   
    
    if (soma % 2 != 0) {
        printf("%d + %d = %d. A soma e impar.\n", valor1, valor2, soma);
    } else {
        printf("%d + %d = %d. A soma e par.\n", valor1, valor2, soma);
    }
    
    return 0;
}