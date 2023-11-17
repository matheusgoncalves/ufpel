/*
9. Um motorista de táxi deseja calcular o rendimento de seu carro na praça. Sabendo-se que o preço do combustível é de R$ 5,55, escreva um programa para ler: a marcação do odômetro (km) no início do dia, a marcação (km) no final do dia, o número de litros de combustível gasto e o valor total (R$) recebido dos passageiros. Após, calcule e escreva a média do consumo em km/l e o lucro (líquido) do dia.
*/

#include <stdio.h>

int main() {
    float marcacaoInicio, marcacaoFinal, combustivelGasto, valorTotal, mediaDoConsumo, lucroLiquido;

    // Leitura
    printf("Digite a marcacao do odometro (km) no inicio do dia: ");
    scanf("%f", &marcacaoInicio);

    printf("Digite a marcacao do odometro (km) no final do dia: ");
    scanf("%f", &marcacaoFinal);

    printf("Digite o numero de litros de combustivel gasto: ");
    scanf("%f", &combustivelGasto);

    printf("Digite o valor total recebido dos passageiros: ");
    scanf("%f", &valorTotal);

    // Calculo e escrita
    mediaDoConsumo = (marcacaoFinal - marcacaoInicio) / combustivelGasto;
    lucroLiquido = valorTotal - (mediaDoConsumo * 5.55);

    printf("Media do consumo: \t %.2f km/l\n", mediaDoConsumo);
    printf("Lucro liquido = \t R$ %.2f\n", lucroLiquido);

    return 0;
}