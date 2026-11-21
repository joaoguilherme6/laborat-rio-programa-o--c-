#include <stdio.h>

int main() {
    int vetor[5];
    int *ptr = vetor;

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nElementos do vetor acessados via ponteiro:\n");
    for (int i = 0; i < 5; i++) {
        printf("Posicao %d: %d\n", i, *(ptr + i));
    }

    return 0;
}