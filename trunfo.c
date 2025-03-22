#include <stdio.h>

int main() {

    // Definição de variáveis da carta 1
    char estado_1;
    char codigo_1[4];
    char cidade_1[100];
    float area_1;    
    float pib_1;
    float densidade_populacional_1;
    float pib_per_capita_1;
    float  super_poder_1;
    int populacao_1; 
    int pontos_turisticos_1;

    // Definição de variáveis da carta 2
    char estado_2;
    char codigo_2[4];
    char cidade_2[100];
    float area_2;    
    float pib_2;
    float densidade_populacional_2;
    float pib_per_capita_2;
    float  super_poder_2;
    int populacao_2; 
    int pontos_turisticos_2;

    // Entrada da carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado_1);
    printf("Código da carta: ");
    scanf(" %s", codigo_1);
    printf("Nome da cidade: ");
    scanf(" %s", cidade_1);
    printf("Área (em km²): ");
    scanf(" %f", &area_1);
    printf("PIB em milhões de reais: ");
    scanf(" %f", &pib_1);
    printf("Quantidade de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos_1);
    printf("População: ");
    scanf(" %d", &populacao_1);

    // Entrada da carta 2
    printf("\nDigite os dados da carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado_2);
    printf("Código da carta: ");
    scanf(" %s", codigo_2);
    printf("Nome da cidade: ");
    scanf(" %s", cidade_2);
    printf("Área (em km²): ");
    scanf(" %f", &area_2);
    printf("PIB em milhões de reais: ");
    scanf(" %f", &pib_2);
    printf("Quantidade de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos_2);
    printf("População: ");
    scanf(" %d", &populacao_2);

    // Cálculos da carta 1
    densidade_populacional_1 = populacao_1 / area_1;
    pib_per_capita_1 = pib_1 / populacao_1;
    super_poder_1 = populacao_1 + area_1 + pib_1 + pontos_turisticos_1 + pib_per_capita_1 + (1 / densidade_populacional_1);

    // Cálculos da carta 2
    densidade_populacional_2 = populacao_2 / area_2;
    pib_per_capita_2 = pib_2 / populacao_2;
    super_poder_2 = populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + pib_per_capita_2 + (1 / densidade_populacional_2);

    // Exibição da comparação
    printf("\nComparação de Cartas:\n");

    // Comparação e exibição dos resultados
    if (populacao_1 > populacao_2) 
    printf("População: Carta 1 venceu (1)\n");
    else if (populacao_1 < populacao_2)
    printf("População: Carta 2 venceu (0)\n");
    else printf("População: Empate (0)\n");

    if (area_1 > area_2) 
    printf("Área: Carta 1 venceu (1)\n");
    else if (area_1 < area_2)
    printf("Área: Carta 2 venceu (0)\n");
    else printf("Área: Empate (0)\n");

    if (pib_1 > pib_2)
    printf("PIB: Carta 1 venceu (1)\n");
    else if (pib_1 < pib_2) 
    printf("PIB: Carta 2 venceu (0)\n");
    else printf("PIB: Empate (0)\n");

    if (pontos_turisticos_1 > pontos_turisticos_2) 
    printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    else if (pontos_turisticos_1 < pontos_turisticos_2) 
    printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    else printf("Pontos Turísticos: Empate (0)\n");

    if (densidade_populacional_1 < densidade_populacional_2) 
    printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else if (densidade_populacional_1 > densidade_populacional_2) 
    printf("Densidade Populacional: Carta 2 venceu (0)\n");
    else printf("Densidade Populacional: Empate (0)\n");

    if (pib_per_capita_1 > pib_per_capita_2) 
    printf("PIB per Capita: Carta 1 venceu (1)\n");
    else if (pib_per_capita_1 < pib_per_capita_2) 
    printf("PIB per Capita: Carta 2 venceu (0)\n");
    else printf("PIB per Capita: Empate (0)\n");

    if (super_poder_1 > super_poder_2) 
    printf("Super Poder: Carta 1 venceu (1)\n");
    else if (super_poder_1 < super_poder_2) 
    printf("Super Poder: Carta 2 venceu (0)\n");
    else printf("Super Poder: Empate (0)\n");

    return 0;
}
