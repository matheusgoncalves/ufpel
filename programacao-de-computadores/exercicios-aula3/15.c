/* 15. Crie um programa para ler as coordenadas (𝑥, 𝑦) de um ponto no sistema
cartesiano e escrever o quadrante ao qual o ponto pertence. Considere que o
usuário não informará nenhuma coordenada igual a zero */

#include <stdio.h>

int main() {
    int x, y;

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    printf("Digite um valor para y: ");
    scanf("%d", &y);

    if (x >= 0 && y >= 0) {
        printf("O ponto esta no primeiro quadrante.\n");
    } else if (x <= 0 && y >= 0) {
        printf("O ponto esta no segundo quadrante.\n");
    } else if (x <= 0 && y <= 0) {
        printf("O ponto esta no terceiro quadrante.\n");
    } else {
        printf("O ponto esta no quarto quadrante.\n");
    }

    return 0;
}