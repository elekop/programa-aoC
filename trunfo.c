#include <stdio.h>

int main () { 
    //definiçao de variaveis da carta 1
    char estado_1;  
    char codigo_1[4];
    char cidade_1[100];
    float area_1;
    float pib_1;
    int pontos_turisticos_1;
    int populacao_1;

    //definiçao de variaveis da carta 2
    char estado_2;
    char codigo_2[4];
    char cidade_2[100];
    float area_2;
    float pib_2;
    int pontos_turisticos_2;
    int populacao_2;

//entrada da carta 1

printf("digite os dados da carta 1: \n");

    printf("estado (letra de A a H): ");
    scanf( " %c", &estado_1);

    printf("código da carta: ");
    scanf(" %s", codigo_1);

    printf("nome da cidade: ");
    scanf(" %s", cidade_1);

    printf("área (em km²):");
    scanf(" %f", &area_1);

    printf("população: ");
    scanf(" %d", &populacao_1);

    printf(" pib em milhoes de reais:");
    scanf(" %f", &pib_1 );

    printf(" quantidade de pontos turísticos:");
    scanf(" %d", &pontos_turisticos_1);


// entrada da carta 2

printf("digite os dados da carta2: \n");

    printf("estado (letra de A a H):");
    scanf(" %c", &estado_2);

    printf("código da carta:");
    scanf(" %s", codigo_2);

    printf("nome da cidade:");
    scanf(" %s", cidade_2);

    printf("área (em km²) :");
    scanf(" %f", &area_2);

    printf("população:");
    scanf(" %d", &populacao_2);

    printf("PIB (milhoes de reais):");
    scanf(" %f", &pib_2);

    printf("quantidade de pontos turísticos:");
    scanf(" %d", &pontos_turisticos_2);

   // exibiçao da carta 1 

   printf("\ncarta1: \n " );
   printf("estado: %c \n ",estado_1);
   printf("codigo: %s \n ",codigo_1);
   printf("nome da cidade: %s \n ",cidade_1);
   printf("area: %.2f km² \n ",area_1);
   printf("populacao: %d \n ",populacao_1);
   printf("pib: %.2f bilhoes de reais \n ",pib_1);
   printf("pontos turisticos: %d \n ",pontos_turisticos_1);


 // exibiçao da carta 2

 printf("\ncarta2: \n ");
 printf("estado: %c \n ",estado_2);
 printf("codigo: %s \n ",codigo_2);
 printf("nome da cidade :%s \n ",cidade_2);
 printf("area: %.2f km² \n ",area_2);
 printf("populacao: %d \n ",populacao_2);
 printf("pib: %.2f bilhoes de reais \n ",pib_2);
 printf("pontos turisticos: %d \n ",pontos_turisticos_2);
 
   return 0;
}