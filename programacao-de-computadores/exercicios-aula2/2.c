/*
2. Crie um programa que leia um valor em metros e apresente a conversão do mesmo para milímetros, centímetros, decímetros, decâmetros, hectômetros e quilômetros.
*/

#include <stdio.h>

int main() {
    float metros;

    // Leitura do valor
    printf("Digite um valor em metros: ");
    scanf("%.2f", &metros);

    // Conversão e apresentação dos valores
    printf("%.2f metros equivalem a:\n\n", metros); 
    printf("%.2f milimetros\n", metros * 1000); // Conversão para milímetros
    printf("%.2f centimetros\n", metros * 100); // Conversão para centimetros
    printf("%.2f decimetros\n", metros * 10); // Conversão para decímetros
    printf("%.2f decametros\n", metros / 10); // Conversão para decâmetros
    printf("%.2f hectometros\n", metros / 100); // Conversão para hectômetros
    printf("%.2f quilometros\n", metros / 1000); // Conversão para quilômetros

    return 0;
}