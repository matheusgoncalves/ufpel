/* 8. Modifique o programa anterior para que o usuário informe o intervalo fechado a
ser verificado. */

#include <stdio.h>

int main() {
    int valor, menorValorIntervalo, maiorValorIntervalo;

    printf("Digite o menor e o maior valor de um intervalo fechado, respectivamente (Ex: 1 5): ");
    scanf("%d %d", &menorValorIntervalo, &maiorValorIntervalo);

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor >= menorValorIntervalo && valor <= maiorValorIntervalo) {
        printf("%d esta dentro do intervalo [%d,%d].", valor, menorValorIntervalo, maiorValorIntervalo);
    } else {
        printf("%d nao esta dentro do intervalo [%d,%d]", valor, menorValorIntervalo, maiorValorIntervalo);
    }

    return 0;
}