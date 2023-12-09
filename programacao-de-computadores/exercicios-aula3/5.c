/* Escreva um programa que verifique a validade de uma senha fornecida pelo
usuário. A senha válida é o número 1234. Deve ser impressa uma das seguintes
mensagens:
• “Acesso permitido”, caso a senha seja válida.
• “Acesso negado”, caso a senha seja inválida. */

#include <stdio.h>

int main() {
    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    if (senha == 1234) {
        printf("Acesso permitido.\n");
    } else {
        printf("Acesso negado.\n");
    }

    return 0;
}