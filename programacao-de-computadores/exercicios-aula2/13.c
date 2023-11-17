/*
13. Modifique o programa anterior para que o usuário informe a quantidade de azulejos e as dimensões (comprimento e altura) dos azulejos na caixa.
*/

#include <stdio.h>

int main() {
    float comprimento, largura, altura, volumeDoRetangulo, comprimentoAzulejo, larguraAzulejo, alturaAzulejo, metragemDeAzulejosPorCaixa;
    int quantidadeDeCaixas, quantidadeDeAzulejos;

    // Leitura das dimensões
    printf("Digite o comprimento, a largura e a altura de uma cozinha retangular, respectivamente: ");
    scanf("%f %f %f", &comprimento, &largura, &altura);

    printf("Digite a quantidade de azulejos na caixa: ");
    scanf("%d", &quantidadeDeAzulejos);

    printf("Digite as dimensoes dos azulejos na caixa: ");
    scanf("%f %f %f", &comprimentoAzulejo, &larguraAzulejo, &alturaAzulejo);

    // Cálculo e escrita
    volumeDoRetangulo = comprimento * largura * altura;
    metragemDeAzulejosPorCaixa = (comprimentoAzulejo * larguraAzulejo * alturaAzulejo) * quantidadeDeAzulejos;
    quantidadeDeCaixas = (int)(volumeDoRetangulo / metragemDeAzulejosPorCaixa) + 1;
    printf("Serao necessarias %d caixas de azulejos para revestir todas as paredes.", quantidadeDeCaixas);

    return 0;
}