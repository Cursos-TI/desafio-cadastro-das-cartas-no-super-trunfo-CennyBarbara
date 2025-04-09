#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado [10];
    char codigocarta [10];
    char nomecidade [20];
    int populacao;
    float area;
    float PIB;
    int numeros;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado);

    printf("Código: ");
    scanf("%s", codigocarta);

    printf("Nome da cidade: ");
    scanf("%s", nomecidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Número de pontos turisticos: ");
    scanf("%d", &numeros);

    printf("Agora vamos lar a carta 2:\n");

    printf("Carta 2:\n");
    printf("Estado: ");
    scanf("%s", estado);

    printf("Código: ");
    scanf("%s", codigocarta);

    printf("Nome da cidade: ");
    scanf("%s", nomecidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área:  km²");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Número de Pontos Túristicos: ");
    scanf("%d", &numeros);

    

    return 0;
}
