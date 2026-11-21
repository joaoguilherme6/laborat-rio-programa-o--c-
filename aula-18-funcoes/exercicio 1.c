#include <stdio.h>

void exibirMenu(void) {
    printf("----- CALCULADORA -----\n\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n\n");
}

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        exibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nPrimeiro numero: ");
                scanf("%f", &num1);
                printf("Segundo numero: ");
                scanf("%f", &num2);
                resultado = somar(num1, num2);
                printf("\nResultado: %.2f\n\n", resultado);
                break;

            case 2:
                printf("\nPrimeiro numero: ");
                scanf("%f", &num1);
                printf("Segundo numero: ");
                scanf("%f", &num2);
                resultado = subtrair(num1, num2);
                printf("\nResultado: %.2f\n\n", resultado);
                break;

            case 3:
                printf("\nPrimeiro numero: ");
                scanf("%f", &num1);
                printf("Segundo numero: ");
                scanf("%f", &num2);
                resultado = multiplicar(num1, num2);
                printf("\nResultado: %.2f\n\n", resultado);
                break;

            case 4:
                printf("\nPrimeiro numero: ");
                scanf("%f", &num1);
                printf("Segundo numero: ");
                scanf("%f", &num2);
                if (num2 == 0) {
                    printf("\nErro: divisao por zero nao permitida.\n\n");
                } else {
                    resultado = dividir(num1, num2);
                    printf("\nResultado: %.2f\n\n", resultado);
                }
                break;

            case 0:
                printf("\nA sair...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}