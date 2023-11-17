/*
3. Implemente um programa que leia um determinado valor de velocidade em milhas por hora e compute o seu equivalente em quilômetros por hora.
*/

#include <stdio.h>

int main() {
    int milhasPorHora, quilometrosPorHora;

    // Leitura da velocidade
    printf("Digite uma velocidade em milhas por hora: ");
    scanf("%d", &milhasPorHora);

    // Conversão e escrita
    quilometrosPorHora = milhasPorHora * 1.6;

    printf("%d milhas/h equivalem a %d km/h", milhasPorHora, quilometrosPorHora);

    return 0;
}