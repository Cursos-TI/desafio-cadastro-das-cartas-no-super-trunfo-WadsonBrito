#include <stdio.h>

// Desafio Super Trunfo - Países
//  Cadastro das Cartas

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int pontosturisticos1, pontosturisticos2, pontaturistico;
    char codigo1[10], codigo2[10], cidade1[30], cidade2[30], estado1[30], estado2[30];
    int atributo1, atributo2, comparacao1, comparacao2;
    float area, area1, area2, pib, pib1, pib2, SuperPoder, SuperPoder1, SuperPoder2;
    unsigned int populacao, populacao1, populacao2;
    float densidade, densidade1, densidade2, pibpercapita, pibpercapita1, pibpercapita2;

    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastro carta 1

    printf("***** Super Trunfo *****\n      Wadson Brito\n\n");
    printf("Carta 1\n\n");

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

    printf("\nCarta 2\n\n");

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

    densidade1 = (populacao1 / area1);
    densidade2 = (populacao2 / area2);
    pibpercapita1 = (pib1 / populacao1);
    pibpercapita2 = (pib2 / populacao2);
    
    // Menu de interação com o usuário
    // Escolha da primeira comparação

    printf("\n#### Menu comparção de cartas ####\n\n");
    printf("Escolha a primeira comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade demográfica:\n");
    printf("Escolha sua comparação: ");
    scanf("%d", &atributo1);

  switch (atributo1)
  {
  case 1:
    printf("##### VOCÊ ESCOLHEU A COMPARAÇÃO POPULAÇÃO #####\n");
    comparacao1 = populacao1 > populacao2 ? 1 : 0;
    break;
  case 2:
    printf("##### VOCÊ ESCOLHEU A COMPARAÇÃO ÁREA #####\n");
    comparacao1 = area1 > area2 ? 1 : 0;
    break;
  case 3:
    printf("##### VOCÊ ESCOLHEU A COMPARAÇÃO PIB #####\n");
    comparacao1 = pib1 > pib2 ? 1 : 0;
  break;
  case 4:
    printf("##### VOCÊ ESCOLHEU A COMPARAÇÃO PONTOS TURISTICOS #####\n");
    comparacao1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
    break;
  case 5:
    printf("##### VOCÊ ESCOLHEU A COMPARAÇÃO DENSIDADE DEMOGRAFICA #####\n");
    comparacao1 = densidade1 < densidade2 ? 1 : 0;
    break;
  default:
    printf("##### OPÇÃO INVÁLIDA #####\n");
    break;
  }
    // Escolha da segunda comparação

  printf("#### Menu comparção de cartas ####\n\n");
  printf("Escolha a segunda comparação:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turisticos\n");
  printf("5. Densidade demográfica:\n");
  printf("Escolha sua comparação: \n");
  scanf("%d", &atributo2);

  if (atributo1 == atributo2){
    printf("##### VOCÊ ESCOLHEU A MESMA COMPARAÇÃO #####\n");
  } else {
      switch (atributo2)
      {
      case 1:
        printf("##### VOCÊ ESCOLHEU A COMPARAÇÃO POPULAÇÃO #####\n");
        comparacao2 = populacao1 > populacao2 ? 1 : 0;
        break;
      case 2:
        printf("##### VOCÊ ESCOLHEU A COMPARAÇÃO ÁREA #####\n");
        comparacao2 = area1 > area2 ? 1 : 0;
        break;
      case 3:
        printf("##### VOCÊ ESCOLHEU A COMPARAÇÃO PIB #####\n");
        comparacao2 = pib1 > pib2 ? 1 : 0;
        break;
      case 4:
        printf("##### VOCÊ ESCOLHEU A COMPARAÇÃO PONTOS TURISTICOS #####\n");
        comparacao2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
        break;
      case 5:
        printf("##### VOCÊ ESCOLHEU A COMPARAÇÃO DENSIDADE DEMOGRAFICA #####\n");
        comparacao2 = densidade1 < densidade2 ? 1 : 0;
        break;
      default:
      printf("##### OPÇÃO INVÁLIDA #####\n");
      break;
      }
    }
      if (comparacao1 && comparacao2){
        printf("##### CARTA 1 VENCEU #####\n");
      } else if (comparacao1 != comparacao2){
        printf("##### EMPATE #####\n");
      } else {
        printf("##### CARTA 2 VENCEU #####\n");
      }
  
      // Exibição de comparação
printf("##### RESULTADO DA COMPARAÇÃO #####\n");
printf("Carta 1 - Estado: %s\nCarta 2 - Estado: %s\n", estado1, estado2);
printf("Atributos selecionados para comparação Carta 1 - %d\nCarta 2 - %d\n", atributo1, atributo2);
printf("Valor de cada comparação Carta 1 - %d\nCarta 2 - %d\n", comparacao1, comparacao2);

    /*printf("Carta 1 - Estado: %s, População: %u\n", estado1, populacao1);
    printf("Carta 2 - Estado: %s, População: %u\n", estado2, populacao2); 

     populacao = populacao1 > populacao2;
     area = area1 > area2;
     pib = pib1 > pib2;
     pontaturistico = pontosturisticos1 > pontosturisticos2;
     densidade = densidade1 < densidade2;
     pibpercapita = pibpercapita1 > pibpercapita2;

     SuperPoder1 = (1 / densidade1) + (populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1);
     SuperPoder2 = (1 / densidade2) + (populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2);
     SuperPoder = SuperPoder1 > SuperPoder2; */
            
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
        //Exebição Carta 1
    //printf("Carta 1\n\n");
    //printf("Estado: %s\n", estado1);
    //printf("Código da Carta: %s\n", codigo1);
    //printf("Nome da Cidade: %s\n", cidade1);
    //printf("Polupação: %u\n", populacao1);
    //printf("Aréa (em KM²): %.2f\n", area1);
    //printf("PIB: %.2f bilhoes de reais\n", pib1);
    //printf("Número de pontos turísticos: %d\n", pontosturisticos1);
    //printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    //printf("PIB per capita: %f reais\n\n", pibpercapita1);

     //Exebição Carta 2
     //printf("Carta 2\n\n");
     //printf("Estado: %s\n", estado2);
     //printf("Código da Carta: %s\n", codigo2);
     //printf("Nome da Cidade: %s\n", cidade2);
     //printf("Polupação: %u\n", populacao2);
     //printf("Aréa (em KM²): %.2f\n", area2);
     //printf("PIB: %.2f bilhoes de reais\n", pib2);
     //printf("Número de pontos turísticos: %d\n", pontosturisticos2);
     //printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
     //printf("PIB per capita: %f reais\n\n", pibpercapita2);
     
     // Resultado
     /* printf(" Comparação das Cartas:\n\n");
     printf("População carta 1 venceu (%d)\n", (int)populacao);
     printf("Aréa carta 1 venceu (%d)\n", (int)area);
     printf("PIB carta 1 venceu (%d)\n", (int)pib);
     printf("Pontos Turisticos carta 1 venceu (%d)\n", pontaturistico);
     printf("Densidade Populacional carta 1 venceu (%d)\n", (int)densidade);
     printf("PIB per capita carta 1 venceu (%d)\n", (int)pibpercapita);
     printf("Super poder carta 1: (%d)\n", (int)SuperPoder); */
     
  return 0;
}
