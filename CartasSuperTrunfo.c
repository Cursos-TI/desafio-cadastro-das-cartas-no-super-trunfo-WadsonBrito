#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int pontosturisticos1, pontosturisticos2, pontaturistico;
    char codigo1[10], codigo2[10], cidade1[30], cidade2[30], estado1[30], estado2[30];
    float area, area1, area2, pib, pib1, pib2, SuperPoder, SuperPoder1, SuperPoder2;
    unsigned long int populacao, populacao1, populacao2;
    float densidade, densidade1, densidade2, pibpercapita, pibpercapita1, pibpercapita2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastro carta 1

    printf("***** Super Trunfo *****\n      Wadson Brito\n\n");
    printf("Carta 1\n");

    printf("Digite o Estado: ");
    scanf("%s", &estado1);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", &codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", &cidade1);
    printf("Digite a polupação: ");
    scanf("%u", &populacao1);
    printf("Digite a Aréa (em KM²): ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    // Cadastro Carta 2

    printf("Carta 2\n");

    printf("Digite o Estado: ");
    scanf("%s", &estado2);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", &codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", &cidade2);
    printf("Digite a polupação: ");
    scanf("%u", &populacao2);
    printf("Digite a Aréa (em KM²): ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);  

    densidade1 = (float)(populacao1 / area1);
    densidade2 = (float)(populacao2 / area2);
    pibpercapita1 = (float)(pib1 / populacao1);
    pibpercapita2 = (float)(pib2 / populacao2);

    populacao = populacao1 > populacao2;
    area = area1 > area2;
    pib = pib1 > pib2;
    pontaturistico = pontosturisticos1 > pontosturisticos2;
    densidade = densidade1 < densidade2;
    pibpercapita = pibpercapita1 > pibpercapita2;

    SuperPoder1 = (1 / densidade1) + (populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1);
    SuperPoder2 = (1 / densidade2) + (populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2);
    SuperPoder = SuperPoder1 > SuperPoder2; 
            
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
        //Exebição Carta 1
    printf("Carta 1\n\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Polupação: %u\n", populacao1);
    printf("Aréa (em KM²): %.2f\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %f reais\n\n", pibpercapita1);

     //Exebição Carta 2
     printf("Carta 2\n\n");
     printf("Estado: %s\n", estado2);
     printf("Código da Carta: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", cidade2);
     printf("Polupação: %u\n", populacao2);
     printf("Aréa (em KM²): %.2f\n", area2);
     printf("PIB: %.2f bilhoes de reais\n", pib2);
     printf("Número de pontos turísticos: %d\n", pontosturisticos2);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
     printf("PIB per capita: %f reais\n\n", pibpercapita2);
     
     // Resultado
     printf(" Comparação das Cartas:\n");
     printf("População carta 1 venceu (%d)\n", (int)populacao);
     printf("Aréa carta 1 venceu (%d)\n", (int)area);
     printf("PIB carta 1 venceu (%d)\n", (int)pib);
     printf("Pontos Turisticos carta 1 venceu (%d)\n", pontaturistico);
     printf("Densidade Populacional carta 1 venceu (%d)\n", (int)densidade);
     printf("PIB per capita carta 1 venceu (%d)\n", (int)pibpercapita);
     printf("Super poder carta 1: (%d)\n", (int)SuperPoder);
     
  return 0;
}
