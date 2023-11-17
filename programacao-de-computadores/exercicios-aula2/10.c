/*
10. Modifique o programa anterior para que o usuário informe o preço do combustível e o volume do tanque de automóvel. Após, apresente o consumo em km/l, o lucro e a quantidade de paradas para reabastecimento que foram realizadas durante o dia.
*/

#include <stdio.h>

int main() {
    float marcacaoInicio, marcacaoFinal, combustivelGasto, valorTotal, mediaDoConsumo, lucroLiquido;
    float precoCombustivel, volumeTanque;
    int paradasReabastecimento;

    // Leitura
    printf("Digite a marcacao do odometro (km) no inicio do dia: ");
    scanf("%f", &marcacaoInicio);

    printf("Digite a marcacao do odometro (km) no final do dia: ");
    scanf("%f", &marcacaoFinal);

    printf("Digite o numero de litros de combustivel gasto: ");
    scanf("%f", &combustivelGasto);

    printf("Digite o valor total recebido dos passageiros: ");
    scanf("%f", &valorTotal);

    printf("Digite o preco do combustivel por litro: ");
    scanf("%f", &precoCombustivel);

    printf("Digite o volume do tanque do automovel (litros): ");
    scanf("%f", &volumeTanque);

    // Cálculo e escrita
    mediaDoConsumo = (marcacaoFinal - marcacaoInicio) / combustivelGasto;
    lucroLiquido = valorTotal - (combustivelGasto * precoCombustivel);
    paradasReabastecimento = (int) (combustivelGasto / volumeTanque) + 1;  // Arredonda para cima

    printf("Media do consumo: \t %.2f km/l\n", mediaDoConsumo);
    printf("Lucro liquido = \t R$ %.2f\n", lucroLiquido);
    printf("Paradas para reabastecimento: %d\n", paradasReabastecimento);

    return 0;
}
