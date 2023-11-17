/* 
1. Implemente um programa para ler o número total de eleitores de um município e o número de votos brancos, nulos e válidos na última eleição. Após, o programa deve calcular e escrever o percentual que cada grupo representa em relação ao total de eleitores.
*/

#include <stdio.h>

int main() {
    int total, brancos, nulos, validos;
    float percentualBrancos, percentualNulos, percentualValidos;

    // Realizando a leitura dos dados
    printf("Digite o numero total de eleitores do municipio: ");
    scanf("%d", &total);

    printf("Digite o numero de votos brancos: ");
    scanf("%d", &brancos);

    printf("Digite o numero de votos nulos: ");
    scanf("%d", &nulos);

    printf("Digite o numero de votos validos: ");
    scanf("%d", &validos);

    // Calculando e escrevendo os respectivos percentuais
    percentualBrancos = 100 * (float)brancos / total;
    percentualNulos = 100 * (float)nulos / total;
    percentualValidos = 100 * (float)validos / total;

    printf("%d eleitores no total.\n", total);
    printf("%.2f%% de votos brancos.\n", percentualBrancos);
    printf("%.2f%% de votos nulos.\n", percentualNulos);
    printf("%.2f%% de votos validos.\n", percentualValidos);

    return 0;
}