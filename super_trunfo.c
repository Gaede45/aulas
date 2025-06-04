#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado_1, estado_2;
    char codigo_1[4], codigo_2[4], cidade_1[30], cidade_2[30];
    int populacao_1, populacao_2, pontos_turisticos_1, pontos_turisticos_2;
    float area_1, area_2, pib_1, pib_2;

    // Entrada de dados para o primeiro trunfo
    printf("Digite o estado do primeiro trunfo: ");
    scanf(" %c", &estado_1);
    printf("Digite o código do primeiro trunfo: ");
    scanf("%s", codigo_1);
    printf("Digite a cidade do primeiro trunfo: ");
    scanf("%s", cidade_1); // Não aceita cidades com nome composto
    printf("Digite a população do primeiro trunfo: ");
    scanf("%d", &populacao_1);
    printf("Digite a área do primeiro trunfo: ");
    scanf("%f", &area_1);
    printf("Digite o PIB do primeiro trunfo: ");
    scanf("%f", &pib_1);
    printf("Digite o número de pontos turísticos do primeiro trunfo: ");
    scanf("%d", &pontos_turisticos_1);

    // Entrada de dados para o segundo trunfo
    printf("Digite o estado do segundo trunfo: ");
    scanf(" %c", &estado_2);
    printf("Digite o código do segundo trunfo: ");
    scanf("%s", codigo_2);
    printf("Digite a cidade do segundo trunfo: ");
    scanf("%s", cidade_2); // Não aceita cidades com nome composto
    printf("Digite a população do segundo trunfo: ");
    scanf("%d", &populacao_2);
    printf("Digite a área do segundo trunfo: ");
    scanf("%f", &area_2);
    printf("Digite o PIB do segundo trunfo: ");
    scanf("%f", &pib_2);
    printf("Digite o número de pontos turísticos do segundo trunfo: ");
    scanf("%d", &pontos_turisticos_2);

    // Exibição dos dados dos trunfos
    printf("\nTrunfo 1:\n");
    printf("Estado: %c\n", estado_1);  
    printf("Código: %s\n", codigo_1);
    printf("cidade: %s\n", cidade_1);
    printf("Número: %d\n", populacao_1);
    printf("area: %.2f\n", area_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_1);

    printf("\nTrunfo 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("cidade: %s\n", cidade_2);
    printf("Número: %d\n", populacao_2);
    printf("area: %.2f\n", area_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_2);

    return 0;
}