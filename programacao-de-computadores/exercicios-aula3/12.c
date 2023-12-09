/* 12. Escreva um programa para ler 3 valores e escrever o maior deles. Considere que
o usuário não informará valores iguais. */

#include <stdio.h>

int main() {
    int valor1, valor2, valor3;
    
    printf("Digite um primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite um segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite um terceiro valor: ");
    scanf("%d", &valor3);

    if (valor1 > valor2 && valor1 > valor3) {
        printf("%d e o maior valor.\n", valor1);
    } else if (valor2 > valor1 && valor2 > valor3) {
        printf("%d e o maior valor.\n", valor2);
    } else {
        printf("%d e o maior valor.\n", valor3);
    }

    return 0;
}