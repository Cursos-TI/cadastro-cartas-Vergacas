#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variaveis Carta 1
  char estado;
  char codigoCarta[3];
  char cidade[20];
  int populacao;
  int nPontosTuristicos;
  float area;
  float pib;

  // Variaveis Carta 2
  char estado2;
  char codigoCarta2[3];
  char cidade2[20];
  int populacao2;
  int nPontosTuristicos2;
  float area2;
  float pib2;

  // Área para entrada de dados
  // Entrada de informções da Carta 1
  printf("\n --Dados da Carta Numero um -- \n");
  printf("Informe o Estado: ");
  scanf("%c", &estado);
  printf("Informe o Codigo da carta: ");
  scanf("%3s", &codigoCarta);
  while (getchar() != '\n'); //Limpar o buffer para envitar le uma linha vazia
  printf("Informe o Nome da cidade: ");
  fgets(cidade, sizeof(cidade), stdin);
  printf("Informe a população da cidade: ");
  scanf("%d", &populacao);
  printf("Informe a Area da cidade(em km²): ");
  scanf("%f", &area);
  printf("Informe o PIB da cidade: ");
  scanf("%f", &pib);
  printf("Informe o numero de pontos turisticos: ");
  scanf("%d", &nPontosTuristicos);

  // Entrada de informções da Carta 2
  printf("\n --Dados da Carta Numero Dois -- \n");
  while (getchar() != '\n'); //Limpar o buffer para envitar le uma linha vazia
  printf("Informe o Estado: ");
  scanf("%c", &estado2);
  printf("Informe o Codigo da carta: ");
  scanf("%3s", &codigoCarta2);
  while (getchar() != '\n'); //Limpar o buffer para envitar le uma linha vazia
  printf("Informe o Nome da cidade: ");
  fgets(cidade2, sizeof(cidade2), stdin);
  printf("Informe a população da cidade: ");
  scanf("%d", &populacao2);
  printf("Informe a Area da cidade(em km²): ");
  scanf("%f", &area2);
  printf("Informe o PIB da cidade: ");
  scanf("%f", &pib2);
  printf("Informe o numero de pontos turisticos: ");
  scanf("%d", &nPontosTuristicos2);

  // Área para exibição dos dados da cidade

  return 0;
}
