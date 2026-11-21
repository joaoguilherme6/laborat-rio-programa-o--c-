#include <stdio.h>

void dobrar(int *num) {
    *num = (*num) * 2;
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    dobrar(&numero);

    printf("Dobro do numero: %d\n", numero);

    return 0;
}