/* 2. Implemente um programa para ler 2 valores (considere que não serão informados 
valores iguais) e escrever o maior deles. */

#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Digite um primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite um segundo valor: ");
    scanf("%d", &valor2);   
    
    if (valor1 > valor2) {
        printf("%d e maior que %d.\n", valor1, valor2);
    } else {
        printf("%d e maior que %d.\n", valor2, valor1);
    }
    
    return 0;
}