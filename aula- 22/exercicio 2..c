#include <stdio.h>

int main() {
    int x = 20;
    int *ptr = &x;

    printf("Valor da variavel: %d\n", x);
    printf("Endereco de memoria: %p\n", (void*)&x);
    printf("Endereco armazenado no ponteiro: %p\n", (void*)ptr);
    printf("Valor acessado pelo ponteiro: %d\n", *ptr);

    return 0;
}