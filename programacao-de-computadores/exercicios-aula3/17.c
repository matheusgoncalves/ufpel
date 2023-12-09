/* 17. Escreva um programa que leia três números e determine se eles formam uma
progressão aritmética. */

#include <stdio.h>

int main() {
    int valor1, valor2, valor3;
    
    printf("Digite um primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite um segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite um terceiro valor: ");
    scanf("%d", &valor3);

    if (valor1 - valor2 == valor2 - valor3) {
        printf("Os valores formam uma progressao aritmetica.\n");
    } else {
        printf("Os valores nao formam uma progressao aritmetica.\n");
    }

    return 0;
}