#include <stdio.h>

int calcularFatorial(int n) {
    int fatorial = 1;
    for (int i = 2; i <= n; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int numero;

    printf("Digite um numero entre 0 e 12: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 12) {
        printf("Numero fora do intervalo permitido (0 a 12).\n");
        return 1;
    }

    int resultado = calcularFatorial(numero);
    printf("Fatorial de %d: %d\n", numero, resultado);

    return 0;
}