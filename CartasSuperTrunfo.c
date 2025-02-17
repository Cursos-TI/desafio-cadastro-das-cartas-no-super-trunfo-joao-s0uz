#include <stdio.h>

    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.
    //Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Inicialização de Váriaveis
    char estado, estado2;
    char codigo[5], codigo2[5];
    char cidade[20], cidade2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //SCAN CARTA 1

    printf("Cadastro de cartas\nInsira os dados da Carta 1\n");

    //Estado
    printf("Insira a letra que representa o Estado da Carta 1:");
    scanf(" %c", &estado);

    //Codigo
    printf("Insira o codigo que representa a carta 1 (letra + 01 a 04):");
    scanf("%s", &codigo);

    //Nome da Cidade
    printf("Insira o nome da cidade da Carta 1:");
    scanf("%s", &cidade);

    //População
    printf("Insira a população da Carta 1:");
    scanf(" %d", &populacao);

    //Area
    printf("Insira a área da cidade da Carta 1:");
    scanf("%f", &area);

    //PIB
    printf("Insira o PIB da cidade da Carta 1:");
    scanf("%f", &pib);

    //Pontos Turísticos
    printf("Insira quantos pontos turísticos tem a Carta 1:");
    scanf("%d", &pontos_turisticos);

    //SCAN CARTA 2

    printf("Cadastro de cartas\nInsira os dados da Carta 2\n");

    //Estado
    printf("Insira a letra que representa o Estado da Carta 2:");
    scanf(" %c", &estado2);

    //Codigo
    printf("Insira o codigo que representa a carta 2 (letra + 01 a 04):");
    scanf("%s", &codigo2);

    //Nome da Cidade
    printf("Insira o nome da cidade da Carta 2:");
    scanf("%s", &cidade2);

    //População
    printf("Insira a população da Carta 2:");
    scanf(" %d", &populacao2);

    //Area
    printf("Insira a área da cidade da Carta 2:");
    scanf("%f", &area2);

    //PIB
    printf("Insira o PIB da cidade da Carta 2:");
    scanf("%f", &pib2);

    //Pontos Turísticos
    printf("Insira quantos pontos turísticos tem a Carta 2:");
    scanf("%d", &pontos_turisticos2);

    //Calculo Densidade populacional e PIB per capita
    //Carta1

    float densidade_carta1 = populacao / area;
    float pib_capita_carta1 = pib / populacao;

    //Carta 2

    float densidade_carta2 = populacao2 / area2;
    float pib_capita_carta2 = pib2 / populacao2;

    //CALCULO PARA SABER A MELHOR CARTA

    float supercarta_1 = populacao + area + pib + pontos_turisticos + densidade_carta1 + pib_capita_carta1;
    float supercarta_2 = populacao2 + area2 + pib2 + pontos_turisticos2 + densidade_carta2 + pib_capita_carta2;

    //COMPARAÇOES ENTRE AS CARTAS

     int comparacao_pop = populacao > populacao2;
     int comparacao_area = area > area2;
     int comparacao_pib = pib > pib2;
     int comparacao_pontos = pontos_turisticos > pontos_turisticos2;
     int comparacao_dens = densidade_carta1 > densidade_carta2;
     int comparacao_pib_capita = pib_capita_carta1 > pib_capita_carta2;
     int comparacao_supercarta = supercarta_1 > supercarta_2;
        
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //PRINT CARTA 1
    printf(" Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n",cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km2\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %f hab/km2\n", densidade_carta1);
    printf("PIB per Capita: %f\n\n", pib_capita_carta1);

    //PRINT CARTA 2
    printf(" Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km2\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %f hab/km2\n", densidade_carta2);
    printf("PIB per Capita: %f\n\n", pib_capita_carta2);

    // EXIBIR COMPARAÇÕES ENTRE AS CARTAS

    printf("\nComparação de Cartas:\n");
    printf("População: %d\n", comparacao_pop);
    printf("Área: %d\n", comparacao_area);
    printf("PIB: %d\n", comparacao_pib);
    printf("Pontos Turísticos: %d\n", comparacao_pontos);
    printf("Densidade Populacional: %d\n", comparacao_dens);
    printf("PIB per Capita: %d\n", comparacao_pib_capita);
    printf("Super Poder: %d\n", comparacao_supercarta);
    
}   