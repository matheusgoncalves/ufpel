/* 7. Implemente um programa que leia um valor e informe se ele está dentro ou fora
do intervalo [25,50]. */

#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor >= 25 && valor <= 50) {
        printf("%d esta dentro do intervalo [25,50].", valor);
    } else {
        printf("%d nao esta dentro do intervalo [25,50]", valor);
    }

    return 0;
}