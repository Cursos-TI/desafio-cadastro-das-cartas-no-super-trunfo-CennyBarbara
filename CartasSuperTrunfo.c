#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1 [10], estado2 [10];
    char codigocarta [10];
    char nomecidade [20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int numeros;
    float densidade1, densidade2;
    float PIBpc1, PIBpc2;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", codigocarta);

    printf("Nome da cidade: ");
    scanf("%s", nomecidade);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Número de pontos turisticos: ");
    scanf("%d", &numeros);

    densidade1 = (float) populacao1 / area1;
    PIBpc1 = (float) PIB1 / populacao1;

    printf("A densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", PIBpc1);
    
    printf("\n");
    printf("Agora vamos ler a carta 2:\n");

    printf("Carta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", codigocarta);

    printf("Nome da cidade: ");
    scanf("%s", nomecidade);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Número de Pontos Túristicos: ");
    scanf("%d", &numeros);

    densidade2 = (float) populacao2 / area2;
    PIBpc2 = (float) PIB2 / populacao2;

    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBpc2);

    printf("\n");
    printf("Muito bem, as cartas foram lidas com sucesso.");
    

    return 0;
}
