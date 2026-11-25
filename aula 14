
#include <stdio.h>

int main() {

    // EXERCICIO 1 - Matriz 2x2 com valores definidos no codigo
    int matriz1[2][2] = {
        {1, 2},
        {3, 4}
    };

    printf("=== EXERCICIO 1 ===\n");
    printf("Matriz 2x2:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%4d", matriz1[i][j]);
        }
        printf("\n");
    }


    // EXERCICIO 2 - Ler valores digitados pelo usuario
    int matriz2[2][2];

    printf("\n=== EXERCICIO 2 ===\n");

    printf("Digite 4 valores para a matriz 2x2:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("\nMatriz digitada:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%4d", matriz2[i][j]);
        }
        printf("\n");
    }


    // EXERCICIO 3 - Matriz 3x3 e soma dos elementos
    int matriz3[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int soma = 0;

    printf("\n=== EXERCICIO 3 ===\n");
    printf("Matriz 3x3:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", matriz3[i][j]);
            soma += matriz3[i][j];
        }
        printf("\n");
    }

    printf("\nSoma de todos os elementos: %d\n", soma);

    return 0;
}
