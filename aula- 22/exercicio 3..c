#include <stdio.h>

int main() {
    int valor = 15;
    int *ptr = &valor;

    printf("Valor antes da alteracao: %d\n", valor);

    *ptr = 50;

    printf("Valor depois da alteracao: %d\n", valor);

    return 0;
}