/*
4. Crie um programa para ler uma temperatura em graus Fahrenheit, calcular e
escrever o valor correspondente em graus Celsius. 
*/

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Leitura da temperatura em Fahrenheit
    printf("Digite uma temperatura em F: ");
    scanf("%f", &fahrenheit);

    // Conversão para Celsius e escrita
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2fF equivalem a %.2fC", fahrenheit, celsius);

    return 0;
}