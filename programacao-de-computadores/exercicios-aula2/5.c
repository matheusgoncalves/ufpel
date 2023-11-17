/*
5. Faça um programa que leia dois números e apresente a soma, subtração, multiplicação e divisão dos mesmos.
*/

#include <stdio.h>

int main() {
    int numero1, numero2, soma, subtracao, multiplicacao, divisao;

    // Lendo os números
    printf("Digite dois numeros: ");
    scanf("%d %d", &numero1, &numero2);

    // Realizando operações
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    // Escrevendo os resultados
    printf("\nSoma: \t\t %2d", soma);
    printf("\nSubtracao: \t %2d", subtracao);
    printf("\nMultiplicacao: \t %2d", multiplicacao);
    printf("\nDivisao: \t %2d", divisao);

    return 0;
}