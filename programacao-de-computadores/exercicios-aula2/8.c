/*
8. Crie um programa que receba o volume de um tanque de combustível (em litros) veicular e o seu consumo médio (em litros por quilômetro) e apresente a distância passível de ser percorrida por esse veículo considerando a situação de tanque cheio ao partir. 
*/

#include <stdio.h>

int main() {
    float volume, consumoMedio, distancia;

    // Leitura
    printf("Digite o volume de um tanque de combustivel (em litros): ");
    scanf("%f", &volume);

    printf("Digite o consumo medio do veiculo (em litros/km): ");
    scanf("%f", &consumoMedio);

    // Cálculo e escrita
    distancia = volume / consumoMedio;
    printf("A distancia passivel de ser percorrida pelo veiculo e de %.2f km.\n", distancia);

    return 0;
}