#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // ========================
  // CARTA 1
  // ========================
  char estado1;
  char codigo_carta1 [4];
  char cidade1 [50];
  int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;
  float densidade_populacional1;
  float pib_per_capita1;
  // ========================
  // CARTA 2
  // ========================
  char estado2;
  char codigo_carta2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
  float densidade_populacional2;
  float pib_per_capita2;
  // Área para entrada de dados
  // ========================
  // ENTRADA DE DADOS CARTA 1
  // ========================
  printf("=== Cadastro da Carta 1 ===\n");
  printf("Digite a letra do estado (de 'A' a 'H'): ");
  scanf(" %c", &estado1);
  printf("Digite o código da carta (ex: A01): ");
  scanf("%s", codigo_carta1);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);
  printf("Digite a população da cidade: ");
  scanf("%d", &populacao1);
  printf("Digite a área (em km²) da cidade: ");
  scanf("%f", &area1);
  printf("Digite o PIB (em Reais) da cidade: ");
  scanf("%f", &pib1);
  printf("Digite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &pontos_turisticos1);
  // ========================
  // ENTRADA DE DADOS CARTA 2
  // ========================
  printf("=== Cadastro da Carta 2 ===\n");
  printf("Digite a letra do estado (de 'A' a 'H'): ");
  scanf(" %c", &estado2);
  printf("Digite o código da carta (ex: A01): ");
  scanf("%s", codigo_carta2);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);
  printf("Digite a população da cidade: ");
  scanf("%d", &populacao2);
  printf("Digite a área (em km²) da cidade: ");
  scanf("%f", &area2);
  printf("Digite o PIB (em Reais) da cidade: ");
  scanf("%f", &pib2);
  printf("Digite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &pontos_turisticos2);
  // ========================
  // CÁLCULOS CARTA 1
  // ========================
  densidade_populacional1 = (float) populacao1 / area1;
  pib_per_capita1 = (pib1 * 1000000000) / (float) (populacao1);
  // ========================
  // CÁLCULOS CARTA 2
  // ========================
  densidade_populacional2 = (float) populacao2 / area2;
  pib_per_capita2 = (pib2 * 1000000000) / (float) (populacao2);
  // Área para exibição dos dados da cidade
  // ========================
  // EXIBIÇÃO CARTA 1
  // ========================
  printf("\n=== CARTAS CADASTRADAS ===\n");
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código da carta: %s\n", codigo_carta1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Pontos turísticos: %d\n", pontos_turisticos1);
  printf("Densidade populacional: %.2f por km²\n", densidade_populacional1);
  printf("PIB per capita: %.2f reais\n", pib_per_capita1);
  // ========================
  // EXIBIÇÃO CARTA 2
  // ========================
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código da carta: %s\n", codigo_carta2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Pontos turísticos: %d\n", pontos_turisticos2);
  printf("Densidade populacional: %.2f por km²\n", densidade_populacional2);
  printf("PIB per capita: %.2f reais\n", pib_per_capita2);
return 0;
} 
