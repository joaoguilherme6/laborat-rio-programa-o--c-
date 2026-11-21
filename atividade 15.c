
#include <stdio.h>

int main() {

    int assentos[3][4] = {
        {0, 1, 0, 0},
        {1, 1, 0, 1},
        {0, 0, 1, 0}
    };

    int ocupados = 0;
    int disponiveis = 0;

    // Percorrer todos os assentos da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {

            if (assentos[i][j] == 1) {
                ocupados++;
            } else {
                disponiveis++;
            }

        }
    }

    // Exibir o resultado
    printf("=== RESERVA DE ASSENTOS NO CINEMA ===\n\n");

    printf("Mapa de assentos:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", assentos[i][j]);
        }
        printf("\n");
    }

    printf("\nQuantidade de assentos ocupados: %d\n", ocupados);
    printf("Quantidade de assentos disponiveis: %d\n", disponiveis);

    return 0;
}
