#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Inicialização de Váriaveis

    char estado1, estado2, codigo1[2], codigo2[2], nome1[50], nome2[50];
    int populacao1, populacao2, pontos1, pontos2, escolha;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpc1, pibpc2, supercarta1, supercarta2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //SCAN CARTA 1

    printf("Digite o estado da cidade 1: ");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade 1 (R01): ");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade 1: ");
    scanf("%s", &nome1);
    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontos1);
    
    //SCAN CARTA 2

    printf("Digite o estado da cidade 2: ");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade 2 (R02): ");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade 2: ");
    scanf("%s", &nome2);
    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontos2);

    //Calculo Densidade populacional e PIB per capita
    //Carta1

    densidade1 = populacao1/area1;
    pibpc1 = pib1/populacao1;

    //Carta 2

    densidade2 = populacao2/area2;
    pibpc2 = pib2/populacao2;

    //Calculo Super Trunfo

    supercarta1 = populacao1 + area1 + pib1 + pontos1 + densidade1 + pibpc1;
    supercarta2 = populacao2 + area2 + pib2 + pontos2 + densidade2 + pibpc2;

    //Menu interativo para escolher qual atributo comparar.
    
    printf("Escolha o atributo que deseja comparar: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    scanf("%d", &escolha);

    switch (escolha)    
    {
    case 1:
        printf("População cidade 1: %d\n", populacao1);
        printf("População cidade 2: %d\n", populacao2);
        if (populacao1 > populacao2)
        {
            printf("A cidade 1 tem a maior população\n");
        }
        else if (populacao1 == populacao2)
        {
            printf("As cidades tem a mesma população\n");
        }
        else
        {
            printf("A cidade 2 tem a maior população\n");
        }
        break;
    case 2:
        printf("Área cidade 1: %.2f\n", area1);
        printf("Área cidade 2: %.2f\n", area2);
        if (area1 > area2)
        {
            printf("A cidade 1 tem a maior área\n");
        }
        else if (area1 == area2)
        {
            printf("As cidades tem a mesma área\n");
        }
        else
        {
            printf("A cidade 2 tem a maior área\n");
        }
        break;
    case 3: 
        printf("PIB cidade 1: %.2f\n", pib1);
        printf("PIB cidade 2: %.2f\n", pib2);
        if (pib1 > pib2)
        {
            printf("A cidade 1 tem o maior PIB\n");
        }
        else if (pib1 == pib2)
        {
            printf("As cidades tem o mesmo PIB\n");
        }
        else
        {
            printf("A cidade 2 tem o maior PIB\n");
        }
        break;
    case 4:
        printf("Pontos turísticos cidade 1: %d\n", pontos1);
        printf("Pontos turísticos cidade 2: %d\n", pontos2);
        if (pontos1 > pontos2)
        {
            printf("A cidade 1 tem o maior número de pontos turísticos\n");
        }
        else if (pontos1 == pontos2)
        {
            printf("As cidades tem o mesmo número de pontos turísticos\n");
        }
        else
        {
            printf("A cidade 2 tem o maior número de pontos turísticos\n");
        }
        break; 
    case 5:
        printf("Densidade populacional cidade 1: %.2f\n", densidade1);
        printf("Densidade populacional cidade 2: %.2f\n", densidade2);
        if (densidade1 > densidade2)
        {
            printf("A cidade 1 tem a maior densidade populacional\n");
        }
        else if (densidade1 == densidade2)
        {
            printf("As cidades tem a mesma densidade populacional\n");
        }
        else
        {
            printf("A cidade 2 tem a maior densidade populacional\n");
        }
        break;
    case 6:
        printf("PIB per capita cidade 1: %.2f\n", pibpc1);
            printf("PIB per capita cidade 2: %.2f\n", pibpc2);
        if (pibpc1 > pibpc2)
        {
            printf("A cidade 1 tem o maior PIB per capita\n");
        }
        else if (pibpc1 == pibpc2)
        {
            printf("As cidades tem o mesmo PIB per capita\n");
        }
        else
        {
            printf("A cidade 2 tem o maior PIB per capita\n");
        }
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    

}   