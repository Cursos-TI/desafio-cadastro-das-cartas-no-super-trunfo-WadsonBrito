#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    int pontosturisticos1, populacao1;
    char codigo1[20], cidade1[50], estado1[50];
    float area1, pib1;
    
    printf("Super Trunfo - Wadson Brito \n");
    printf("Digite o Estado: \n");
    scanf("%s", &estado1);
    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigo1);
    prinft("Digite o Nome da Cidade: \n");
    scanf("%s", &cidade1);
    printf("Digite a pulupação: \n");
    scanf("%d", &populacao1);
    printf("Digite a Aréa (em KM²): \n");
    scanf("%e", &area1);
    printf("Digite o PIB: \n");
    scanf("%e", &pib1);
    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &pontosturisticos1);

    

    return 0;
}
