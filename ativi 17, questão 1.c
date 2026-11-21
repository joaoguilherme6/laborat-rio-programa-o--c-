#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char perfil[20];
    char nomeConfirmacao[50];
    char mensagemBoasVindas[100];
    int qtdCaracteres;

    printf("===== CADASTRO DE USUARIOS =====\n\n");

    // 1. Solicitar o primeiro nome do usuário
    printf("Digite seu nome: ");
    scanf("%s", nome);

    // 2. Solicitar o perfil de acesso (ADMIN ou COMUM)
    printf("Digite seu perfil: ");
    scanf("%s", perfil);

    // 3. Utilizar strlen() para informar a quantidade de caracteres do nome
    qtdCaracteres = strlen(nome);

    // 5. Utilizar strcpy() para copiar o nome para uma variável de confirmação
    strcpy(nomeConfirmacao, nome);

    // 6. Utilizar strcat() para montar uma mensagem de boas-vindas
    strcpy(mensagemBoasVindas, "Bem-vindo(a), ");
    strcat(mensagemBoasVindas, nomeConfirmacao);
    strcat(mensagemBoasVindas, "!");

    // 7. Exibir os dados cadastrados e a mensagem final
    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", nomeConfirmacao);
    printf("Quantidade de caracteres: %d\n", qtdCaracteres);

    // 4. Utilizar strcmp() para identificar o perfil informado
    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil: Administrador\n");
    } else if (strcmp(perfil, "COMUM") == 0) {
        printf("Perfil: Usuario Comum\n");
    } else {
        printf("Perfil: Invalido\n");
    }

    printf("\n%s\n", mensagemBoasVindas);
    printf("Cadastro realizado com sucesso.\n");

    return 0;
}