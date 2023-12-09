/* 6. Desenvolva um programa que leia dois números inteiros e verifique se o primeiro
é múltiplo do segundo. */

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois numeros inteiros (Ex: 1 4): ");
    scanf("%d %d", &num1, &num2);

    if (num1 % num2 == 0) {
        printf("%d e multiplo de %d.\n", num1, num2);
    } else {
        printf("%d nao e multiplo de %d.\n", num1, num2);
    }

    return 0;
}