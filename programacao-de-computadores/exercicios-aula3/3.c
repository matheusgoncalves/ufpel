/* 3. Desenvolva um programa para ler o ano de nascimento de uma pessoa e escrever 
uma  mensagem  que  diga  se  ela  poderá  ou  não  votar  este  ano  (não  é  necessário 
considerar o mês em que ela nasceu). */

#include <stdio.h>

int main() {
    int anoDeNascimento;

    printf("Digite seu ano de nascimento:");
    scanf("%d", &anoDeNascimento);

    if (anoDeNascimento <= 2003) {
        printf("Voce pode votar este ano.\n");
    } else {
        printf("Voce nao pode votar este ano.\n");
    }
    
    return 0;
}