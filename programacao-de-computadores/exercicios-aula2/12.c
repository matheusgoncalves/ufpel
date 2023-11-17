/*
12. Escreva um programa para ler as dimensões de uma cozinha retangular (comprimento, largura e altura), calcular e escrever a quantidade de caixas de azulejos para se colocar em todas as suas paredes (considere que não será descontado a área ocupada por portas e janelas). Cada caixa de azulejos possui 1,5 m² em azulejos.
*/

#include <stdio.h>

int main() {
    float comprimento, largura, altura, volumeDoRetangulo;
    int quantidadeDeCaixas;

    // Leitura das dimensões
    printf("Digite o comprimento, a largura e a altura de uma cozinha retangular, respectivamente: ");
    scanf("%f %f %f", &comprimento, &largura, &altura);

    // Cálculo e escrita
    volumeDoRetangulo = comprimento * largura * altura;
    quantidadeDeCaixas = (volumeDoRetangulo / 1.5) + 1;
    printf("Serao necessarias %d caixas de azulejos para revestir todas as paredes.", quantidadeDeCaixas);

    return 0;
}