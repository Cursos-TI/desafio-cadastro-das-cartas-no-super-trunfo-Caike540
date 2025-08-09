#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    printf("Desafio Super Trunfo!\n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
 
    char nome1[40], codigo1[30];
    int populacao1, numero1;
    float area1, pib1;

    char nome2[40], codigo2[30];
    int populacao2, numero2;
    float area2, pib2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Carta 1

    printf("Carta 1\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero1);

    //Carta 2

    printf("Carta 2\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1:\n");
    printf("O código da cidade é: %s - Nome: %s\n", codigo1, nome1);
    printf("População: %d - Área: %.2f km²\n", populacao1, area1);
    printf("PIB em bilhões de reais: %.2f - Número de pontos turísticos: %d\n", pib1, numero1);
 
    printf("X\n");

    printf("Carta 2:\n");
    printf("O código da cidade é: %s - Nome: %s\n", codigo2, nome2);
    printf("População: %d - Área: %.2f km²\n", populacao2, area2);
    printf("PIB em bilhões de reais: %.2f - Número de pontos turísticos: %d\n", pib2, numero2);

    return 0;
}