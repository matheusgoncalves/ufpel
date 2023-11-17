/*
7. Escreva um programa para ler o salário mensal e o percentual de reajuste. Após, calcule e escreva o valor do novo salário.
*/

#include <stdio.h>

int main() {
    float salario, reajuste, novoSalario;

    // Leitura
    printf("Digite o salario mensal: ");
    scanf("%f", &salario);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &reajuste);

    // Cálculo e escrita
    novoSalario = salario + (salario * (reajuste / 100));
    printf("Salario apos o reajuste: %.2f", novoSalario);

    return 0;
}