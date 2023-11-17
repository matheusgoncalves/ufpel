/*
6. Crie um programa que receba um número e mostre o seu valor elevado ao quadrado e ao cubo.
*/

#include <stdio.h>

int main() {
    int numero;

    // Lendo o número
    printf("Digite um numero para elevar ao quadrado e ao cubo: ");
    scanf("%d", &numero);

    // Realizando os cálculos e escrevendo
    printf("%d ao quadrado e %d\n", numero, numero * numero); // Número ao quadrado
    printf("%d ao cubo e %d", numero, numero * numero * numero); // Número ao cubo

    return 0;
}