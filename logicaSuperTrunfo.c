#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    printf("Carta 1\n");
    char  estado[2], codigo[1], cidade[1];
    int   populacao, pontosTuristicos, score = 1;
    float area, pib;
    float densidade, pibCapita;

    printf("Digite o estado: ");
    scanf("%s", estado);
    printf("Digite o código da cidade: ");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    printf("Digite a populacao: ");
    scanf("%i", &populacao);
    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    printf("Digite o pib da cidade: ");
    scanf("%f", &pib);
    printf("Digite quantos pontos turisticos tem na cidade: ");
    scanf("%i", &pontosTuristicos);
    densidade = populacao / area;
    pibCapita = pib / populacao;


    printf("Carta 2\n");
    char  estado2[2], codigo2[1], cidade2[1];
    int   populacao2, pontosTuristicos2, score2 = 0;
    float area2, pib2;
    float densidade2, pibCapita2;

    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a populacao: ");
    scanf("%i", &populacao2);
    printf("Digite a area da cidade: ");
    scanf("%f", &area2);
    printf("Digite o pib da cidade: ");
    scanf("%f", &pib2);
    printf("Digite quantos pontos turisticos tem na cidade: ");
    scanf("%i", &pontosTuristicos2);
    densidade2 = populacao2 / area2;
    pibCapita2 = pib2 / populacao2;

    if (area > area2) {
        printf("A carta 1 ganhou da carta 2 na area");
        score++;
    } else {
        printf("A carta 2 ganhou da carta 1 na area");
        score2++;
    }

    if (populacao > populacao2) {
        printf("A carta 1 ganhou da carta 2 na populacao");
        score++;
    } else {
        printf("A carta 2 ganhou da carta 1 na populacao");
        score2++;
    }
    
    if (pibCapita > pibCapita2) {
        printf("A carta 1 ganhou da carta 2 na pib per capita");
        score++;
    } else {
        printf("A carta 2 ganhou da carta 1 na pib per capita");
        score2++;
    }

    if (score > score2) {
        printf("A carta 1 ganhou da carta 2");
    } else {
        printf("A carta 2 ganhou da carta 1");
    }

    return 0;
}
