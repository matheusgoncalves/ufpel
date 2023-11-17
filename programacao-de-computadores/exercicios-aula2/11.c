/*
11. Escreva um programa para ler o raio de um círculo, calcular e escrever a sua área.
*/

#include <stdio.h>

int main() {
    float raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    area = 3.14 * raio * raio;

    printf("A area do circulo de raio %.2fm e %.2fm2", raio, area);

    return 0;
}