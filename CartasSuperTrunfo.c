#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

struct Carta {
    int codigoCidade;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {

    struct Carta carta1;
    struct Carta carta2;

    printf("Bem-vindo ao Jogo Super Trunfo - Países\n");
    printf("\n");
    printf("Vamos começar cadastrando as cartas do jogo.\n");
    printf("\n");


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta. Por favor insira os dados a seguir.\n");
    printf("\n");

    printf("- Código da cidade: ");
    scanf("%d", &carta1.codigoCidade);

    printf("- Nome da cidade: ");
    fgets(carta1.nome, sizeof(carta1.nome), stdin);

    printf("- População: ");
    scanf("%d", &carta1.populacao);

    printf("- Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("- PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("- Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n");

    // Cadastro da segunda carta
    printf("Cadastro da segunda carta. Por favor insira os dados a seguir.\n");

    printf("- Código da cidade: ");
    scanf("%d", &carta2.codigoCidade);

    printf("- Nome da cidade: ");
    fgets(carta2.nome, sizeof(carta2.nome), stdin);

    printf("- População: ");
    scanf("%d", &carta2.populacao);

    printf("- Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("- PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("- Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição dos dados da primeira carta
    printf("Dados da primeira carta:\n");
    printf("Código da cidade: %d\n", carta1.codigoCidade);
    printf("Nome: %s", carta1.nome);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);
    printf("\n");

    // Exibição dos dados da segunda carta
    printf("Dados da segunda carta:\n");
    printf("Código da cidade: %d\n", carta2.codigoCidade);
    printf("Nome: %s", carta2.nome);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
