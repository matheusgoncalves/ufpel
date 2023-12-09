/* 13. Desenvolva um programa para ler 3 valores e escrever a soma dos 2 maiores.
Considere que o usuário não informará valores iguais. */

#include <stdio.h>

int main() {
    int valor1, valor2, valor3, soma;

    printf("Digite um primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite um segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite um terceiro valor: ");
    scanf("%d", &valor3);

    if (valor1 > valor2 && valor1 > valor3) {
        if (valor2 > valor3) {
            soma = valor1 + valor2;
        } else {
            soma = valor1 + valor3;
        }
    } else if (valor2 > valor1 && valor2 > valor3) {
        if (valor1 > valor3) {
            soma = valor2 + valor1;
        } else {
            soma = valor2 + valor3;
        }
    } else {
        if (valor1 > valor2) {
            soma = valor3 + valor1;
        } else {
            soma = valor3 + valor2;
        }
    }

    printf("A soma dos dois maiores valores e %d.\n", soma);

    return 0;
}