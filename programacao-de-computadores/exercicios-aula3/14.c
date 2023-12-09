/* 14. Escreva um programa para ler 3 valores e escrevê-los em ordem crescente.
Considere que o usuário não informará valores iguais. */

#include <stdio.h>

int main() {
    int valor1, valor2, valor3;

    printf("Digite um primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite um segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite um terceiro valor: ");
    scanf("%d", &valor3);

    printf("Os valores em ordem crescente sao: ");
    if (valor1 > valor2 && valor1 > valor3) {
        if (valor2 > valor3) {
            printf("%d, %d e %d.\n", valor3, valor2, valor1);
        } else {
            printf("%d, %d e %d.\n", valor2, valor3, valor1);
        }
    } else if (valor2 > valor1 && valor2 > valor3) {
        if (valor1 > valor3) {
            printf("%d, %d e %d.\n", valor3, valor1, valor2);
        } else {
            printf("%d, %d e %d.\n", valor1, valor3, valor2);
        }
    } else {
        if (valor1 > valor2) {
            printf("%d, %d e %d.\n", valor2, valor1, valor3);
        } else {
            printf("%d, %d e %d.\n", valor1, valor2, valor3);
        }
    }
    
    return 0;
}