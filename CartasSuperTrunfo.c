#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Dados da primeira carta
    char estado;
    char codigo[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;

    // Dados da segunda carta
    char estado2;
    char codigo2[3];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Entrada de dados da primeira carta
    printf("Cadastro da Primeia Carta\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]s", cidade);

    printf("Informe a População: ");
    scanf("%d", &populacao);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    densidadePopulacional = populacao / area;
    pibPerCapita = pib * 1000000000.0 / (float)populacao;
    superPoder = (float)populacao + area + pib + pontosTuristicos + pibPerCapita + (1.0f / densidadePopulacional);

    // Entrada de dados da segunda carta
    printf("\nCadastro da segunda carta\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);

    printf("Informe a População: ");
    scanf("%d", &populacao2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000.0 / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    // Exibição dos dados da primeira carta
    printf("\n=============================\n");
    printf("Primeira Carta:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);

    // Exibição dos dados da segunda carta
    printf("\nSegunda Carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Comparação das cartas
    printf("\n=============================\n");
    printf("Comparação de Cartas:\n");
    printf("População: %s venceu (%d)\n", populacao > populacao2 ? "Carta 1" : "Carta 2", populacao > populacao2);
    printf("Área: %s venceu (%d)\n", area > area2 ? "Carta 1" : "Carta 2", area > area2);
    printf("PIB: %s venceu (%d)\n", pib > pib2 ? "Carta 1" : "Carta 2", pib > pib2);
    printf("Pontos Turísticos: %s venceu (%d)\n", pontosTuristicos > pontosTuristicos2 ? "Carta 1" : "Carta 2", pontosTuristicos > pontosTuristicos2);
    printf("Densidade Populacional: %s  venceu (%d)\n", densidadePopulacional < densidadePopulacional2 ? "Carta 1" : "Carta 2", densidadePopulacional < densidadePopulacional2);
    printf("PIB per Capita: %s venceu (%d)\n", pibPerCapita > pibPerCapita2 ? "Carta 1" : "Carta 2", pibPerCapita > pibPerCapita2);
    printf("Super Poder: %s venceu (%d)\n", superPoder > superPoder2 ? "Carta 1" : "Carta 2", superPoder > superPoder2);

    return 0;
}
