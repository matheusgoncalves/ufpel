/* 18. Crie um programa que leia a idade de 2 homens e 2 mulheres (considere que a
idade dos homens será sempre diferente, assim como das mulheres). Calcule e
escreva a soma das idades do homem mais velho com a mulher mais nova, e o
produto das idades do homem mais novo com a mulher mais velha */

#include <stdio.h>

int main() {
    int homem1, mulher1, homem2, mulher2, soma, produto;

    soma = 0;
    produto = 1;

    printf("Digite a idade do primeiro homem: ");
    scanf("%d", &homem1);

    printf("Digite a idade do segundo homem: ");
    scanf("%d", &homem2);

    printf("Digite a idade da primeira mulher: ");
    scanf("%d", &mulher1);

    printf("Digite a idade da segunda mulher: ");
    scanf("%d", &mulher2);

    if (homem1 > homem2) {
        soma += homem1;
        produto *= homem2;
    } else {
        soma += homem2;
        produto *= homem1;
    }

    if (mulher1 > mulher2) {
        soma += mulher2;
        produto *= mulher1;
    } else {
        soma += mulher1;
        produto *= mulher2;
    }

    printf("Soma: %d\nProduto: %d", soma, produto);

    return 0;
}