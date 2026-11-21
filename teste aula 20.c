#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

int main(void) {
    Aluno aluno1;

    printf("Digite o nome do aluno: ");
    scanf(" %49[^\n]", aluno1.nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno1.idade);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno1.nota);

    printf("\n--- DADOS DO ALUNO ---\n");
    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Nota: %.1f\n", aluno1.nota);

    return 0;
}