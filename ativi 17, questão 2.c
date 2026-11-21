#include <stdio.h>
#include <string.h>

int main() {
    char produto[50];
    char categoria[20];
    char descricaoEstoque[120];
    int qtdCaracteres;

    printf("===== CADASTRO DE PRODUTOS =====\n\n");

    // 1. Solicitar o nome de um produto
    printf("Digite o nome do produto: ");
    scanf("%s", produto);

    // 2. Solicitar sua categoria (HARDWARE ou PERIFERICO)
    printf("Digite a categoria (HARDWARE ou PERIFERICO): ");
    scanf("%s", categoria);

    // 3. Utilizar strlen() para verificar a quantidade de caracteres do nome
    qtdCaracteres = strlen(produto);

    // Montando a descrição para identificação no estoque com strcpy() e strcat()
    strcpy(descricaoEstoque, "Produto: ");
    strcat(descricaoEstoque, produto);
    strcat(descricaoEstoque, " | Setor: ");

    // 4. Utilizar strcmp() para identificar a categoria
    if (strcmp(categoria, "HARDWARE") == 0) {
        strcat(descricaoEstoque, "Componentes e Hardware");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        strcat(descricaoEstoque, "Acessorios e Perifericos");
    } else {
        strcat(descricaoEstoque, "Categoria Nao Identificada");
    }

    // Exibição dos resultados
    printf("\n===== DADOS DO ESTOQUE =====\n");
    printf("Nome do produto: %s\n", produto);
    printf("Quantidade de caracteres: %d\n", qtdCaracteres);
    printf("Identificacao: %s\n", descricaoEstoque);

    return 0;
}