/*
14. Faça um programa que receba os valores da base menor, da base maior e da altura de um trapézio isósceles (figura abaixo), calcule e apresente os valores da área e perímetro desse trapézio. 
*/

#include <stdio.h>
#include <math.h>

int main() {
    float bezinho, bezao, altura, area, cateto, hipotenusa, perimetro;

    // Leitura das dimensoes
    printf("Digite a base menor, a base maior e a altura de um trapezio isosceles, respectivamente: ");
    scanf("%f %f %f", &bezinho, &bezao, &altura);

    // Cálculo
    area = ((bezao + bezinho) * altura) / 2;
    cateto = (bezao - bezinho) / 2;
    hipotenusa = sqrt(pow(cateto, 2) + pow(altura, 2));
    perimetro = bezinho + bezao + hipotenusa * 2;

    // Escrita dos resultados
    printf("Area do trapezio: \t %.2fm2\n", area);
    printf("Perimetro do trapezio: \t %.2fm\n", perimetro);

    return 0;
}