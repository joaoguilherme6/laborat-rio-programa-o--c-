#include <stdio.h>

int dobro(int quantidade) {
    return quantidade * 2;
}

int main() {
    int quantidadeInicial, quantidadeFinal;

    printf("----- CONTROLE DE ESTOQUE -----\n\n");
    printf("Digite a quantidade inicial: ");
    scanf("%d", &quantidadeInicial);

    quantidadeFinal = dobro(quantidadeInicial);

    printf("\nQuantidade inicial: %d\n", quantidadeInicial);
    printf("Quantidade apos duplicacao: %d\n", quantidadeFinal);

    return 0;
}