/* 4. Crie um programa para ler 2 valores (considere que não serão lidos valores iguais)
e escrevê-los em ordem crescente. */

#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Digite dois valores quaisquer (Ex: 1 7): ");
    scanf("%d %d", &valor1, &valor2);

    printf("Em ordem crescente:\n");
    if (valor1 > valor2) {
        printf("%d, %d.\n", valor2, valor1);
    } else {
        printf("%d, %d.\n", valor1, valor2);
    }

    return 0;
}