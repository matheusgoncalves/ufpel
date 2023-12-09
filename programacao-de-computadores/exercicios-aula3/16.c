/* 16. Modifique o programa anterior para o caso em que o usuário informar um ponto
localizado na origem ou sobre os eixos cartesianos. Nesse caso, imprima uma
mensagem indicando que o ponto não está em nenhum quadrante. */

#include <stdio.h>

int main() {
    int x, y;

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    printf("Digite um valor para y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("O ponto esta no primeiro quadrante.\n");
    } else if (x < 0 && y > 0) {
        printf("O ponto esta no segundo quadrante.\n");
    } else if (x < 0 && y < 0) {
        printf("O ponto esta no terceiro quadrante.\n");
    } else if (x > 0 && y < 0) {
        printf("O ponto esta no quarto quadrante.\n");
    } else {
        printf("O ponto nao esta em nenhum quadrante.\n");
    }

    return 0;
}