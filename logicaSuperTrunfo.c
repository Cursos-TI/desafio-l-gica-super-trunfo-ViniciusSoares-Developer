#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado, estado2;
  char codigoCarta[3], codigoCarta2[3];
  char cidade[50], cidade2[50];
  int populacao, populacao2;
  int pontosTuristicos, pontosTuristicos2;
  float area, densidadeDemografica, area2, densidadeDemografica2;
  float pib, pibCapita, pib2, pibCapita2, superPoder, superPoder2;

  // Área para entrada de dados
  // Entrada de dados da carta 1
  printf("Digite a 1° carta\n");
  printf("Estado (A - H): ");
  scanf("%s", &estado);
  printf("Codigo da carta (ex: A01): ");
  scanf("%s", &codigoCarta);
  printf("Nome da cidade: ");
  scanf("%s", cidade);
  printf("Populacao: ");
  scanf("%i", &populacao);
  printf("Area (km²): ");
  scanf("%f", &area);
  printf("PIB (R$): ");
  scanf("%f", &pib);
  printf("Numero de pontos turisticos: ");
  scanf("%i", &pontosTuristicos);
  pibCapita = pib / populacao;
  densidadeDemografica = populacao / area;
  superPoder = (float) populacao + area + pib + pontosTuristicos + pibCapita + densidadeDemografica;

  // Entrada de dados da carta 2
  printf("Digite a 2° carta\n");
  printf("Estado (A - H): ");
  scanf("%s", &estado2);
  printf("Codigo da carta (ex: A01): ");
  scanf("%s", &codigoCarta2);
  printf("Nome da cidade: ");
  scanf("%s", &cidade2);
  printf("Populacao: ");
  scanf("%i", &populacao2);
  printf("Area (km²): ");
  scanf("%f", &area2);
  printf("PIB (R$): ");
  scanf("%f", &pib2);
  printf("Numero de pontos turisticos: ");
  scanf("%i", &pontosTuristicos2);
  pibCapita2 = pib2 / populacao2;
  densidadeDemografica2 = populacao2 / area2;
  superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibCapita2 + densidadeDemografica2;

  // Área para exibição dos dados da cidade
  // Exibição dos dados da carta 1
  printf("Carta 1: ");
  printf("Estado: %c\n", estado);
  printf("Codigo da carta: %s\n", codigoCarta);
  printf("Cidade: %s\n", cidade);
  printf("Populacao: %i\n", populacao);
  printf("Area: %.2f km²\n", area);
  printf("PIB: R$ %.2f bilhões de reais\n", pib);
  printf("Pontos turisticos: %i\n", pontosTuristicos);
  printf("Densidade Populacional: %.2f hab/km²\n", populacao / area);
  printf("PIB per Capita: %.2f reais\n\n", pib / populacao);

  // Exibição dos dados da carta 2
  printf("Carta 2: ");
  printf("Estado: %c\n", estado2);
  printf("Codigo da carta: %s\n", codigoCarta2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %i\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: R$ %.2f bilhões de reais\n", pib2);
  printf("Pontos turisticos: %i\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²", populacao2 / area2);
  printf("PIB per Capita: %.2f reais\n\n", pib2 / populacao2);

  int option, option2; // reservando espaço na memoria para as variaveis de escolha
  // Seleção do primeiro atributo a se comparar
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Número de pontos turísticos\n");
  printf("5 - Densidade demográfica\n");
  printf("Escolha um atributo para comparar: ");
  scanf("%d", &option);
  print("\n"); //Quebra de linha para melhor leitura

  // Seleção do segundo atributo a se comparar (esconde o atributo ja escolhido anteriormente)
  printf(option == 1 ? "" : "1 - População\n");
  printf(option == 2 ? "" : "2 - Área\n");
  printf(option == 3 ? "" : "3 - PIB\n");
  printf(option == 4 ? "" : "4 - Número de pontos turísticos\n");
  printf(option == 5 ? "" : "5 - Densidade demográfica\n");
  printf("Escolha um segundo atributo para comparar:");
  scanf("%d", &option2);

  // opções com os mesmos valores avisa ao usuario e não permiti realizar a rodada
  if (option == option2) {
    printf("As suas opções devem ser diferentes");
  } else {
    printf("comparação entre as cartas %s VS %s\n", codigoCarta, codigoCarta2);
    
    //Ação da opção 1 escolhida
    printf("Primeiro atributo:\n");
    switch(option) {
      // Comparação de população
      case 1: {
        printf("Atributo população escolhido\n");
        if (populacao == populacao2) {
          printf("Deu empate");
        } else {
          printf("%s ganhou!", populacao > populacao2 ? estado : estado2);
        }
        break;
      }
      // Comparação de Aréa
      case 2: {
        printf("Atributo área escolhido\n");
        if (area == area2) {
          printf("Deu empate");
        } else {
          printf("%s ganhou!", area > area2 ? estado : estado2);
        }
        break;
      }
      // Comparação de PIB
      case 3: {
        printf("Atributo PIB escolhido\n");
        if (pib == area2) {
          printf("Deu empate");
        } else {
          printf("%s ganhou!", area > area2 ? estado : estado2);
        }
        break;
      }
      // Comparação de número de pontos turísticos
      case 4: {
        printf("Atributo número de pontos turísticos escolhido\n");
        if (pontosTuristicos == pontosTuristicos2) {
          printf("Deu empate");
        } else {
          printf("%s ganhou!", pontosTuristicos > pontosTuristicos2 ? estado : estado2);
        }
        break;
      }
      // Comparação de densidade demográfica
      case 5: {
        printf("Atributo densidade demográfica escolhido\n");
        if (densidadeDemografica == densidadeDemografica2) {
          printf("Deu empate");
        } else {
          printf("%s ganhou!", densidadeDemografica > densidadeDemografica2 ? estado : estado2);
        }
        break;
      }
      // Entra caso seja uma opção que não seja pre configurada
      default: printf("Opção digitada invalida!");
    }
    
    //Ação da opção 2 escolhida
    printf("\nSegundo atributo:\n");
    switch(option2) {
      // Comparação de população
      case 1: {
        printf("Atributo população escolhido\n");
        if (populacao == populacao2) {
          printf("Deu empate");
        } else {
          printf("%s ganhou!", populacao > populacao2 ? estado : estado2);
        }
        break;
      }
      // Comparação de Aréa
      case 2: {
        printf("Atributo área escolhido\n");
        if (area == area2) {
          printf("Deu empate");
        } else {
          printf("%s ganhou!", area > area2 ? estado : estado2);
        }
        break;
      }
      // Comparação de PIB
      case 3: {
        printf("Atributo PIB escolhido\n");
        if (pib == area2) {
          printf("Deu empate");
        } else {
          printf("%s ganhou!", area > area2 ? estado : estado2);
        }
        break;
      }
      // Comparação de número de pontos turísticos
      case 4: {
        printf("Atributo número de pontos turísticos escolhido\n");
        if (pontosTuristicos == pontosTuristicos2) {
          printf("Deu empate");
        } else {
          printf("%s ganhou!", pontosTuristicos > pontosTuristicos2 ? estado : estado2);
        }
        break;
      }
      // Comparação de densidade demográfica
      case 5: {
        printf("Atributo densidade demográfica escolhido\n");
        if (densidadeDemografica == densidadeDemografica2) {
          printf("Deu empate");
        } else {
          printf("%s ganhou!", densidadeDemografica > densidadeDemografica2 ? estado : estado2);
        }
        break;
      }
      // Entra caso seja uma opção que não seja pre configurada
      default: printf("Opção digitada invalida!");
    }
    
    //Quem tem o superpoder maior ganha a rodada se for igual da empate
    if (superPoder == superPoder2) {
      printf("Deu empate!");
    } else {
      printf("%s ganhou a rodada!", superPoder > superPoder2 ? estado : estado2);
    }
  }


  return 0;
} 
