#include <stdio.h>

int main () {

    printf("Batalha de cartas!\n");

    char estado1, estado2;
    char codigo[20];
    char Nomedacidade [50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int numeros1, numeros2;
    float densidade1, densidade2;
    float PIBpc1, PIBpc2;
    float superpoder1, superpoder2;
    int ResultadoSuper;

    printf("Carta 1:\n");
    printf("Estado: ");
    scanf("%s", &estado1);

    printf("Código: \n");
    scanf(" %s", codigo);

    printf("Nome da cidade: \n");
    scanf("%s", &Nomedacidade);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &numeros1);

    densidade1 = (float) populacao1 / area1;
    PIBpc1 = (float) PIB1 / populacao1;

    printf("A densidade populacional é: %.2f\n", densidade1);

    printf("O PIB per capita é: %.2f\n", PIBpc1);

    printf("Carta 2:\n");
    printf("Estado: ");
    scanf("%d", &estado2);

    printf("Código: \n");
    scanf(" %s", codigo);

    printf("Nome da Cidade: \n");
    scanf("%s", &Nomedacidade);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área:  \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &numeros2);  

    densidade2 = (float) populacao2 / area2;
    PIBpc2 = (float) PIB2 / populacao2;

    printf("A densidade populacional é: %.2f\n", densidade2);
    
    printf("O PIB per capita é: %.2f\n", PIBpc2);

    superpoder1 = (float)(populacao1 + area1 + PIB1 + numeros1+ PIBpc1 + densidade1);
    superpoder2 = (float)(populacao2 + area2 + PIB2 + numeros2+ PIBpc2 + densidade2);
   
    printf("O super poder da carta A é: %.2f\n", superpoder1);
    printf("O super poder da carta B é: %.2f\n", superpoder2);

    ResultadoSuper = (int)(superpoder1 > superpoder2);

    printf("O Superpoder da carta A foi maior? Se sim imprima 1, Se não imprima 0:%d\n", ResultadoSuper);
    printf("A população da carta A foi maior? Se sim imprima 1, Se não imprima 0:%d\n", populacao1 > populacao2);
    printf("O PIB da carta A foi maior? Se sim imprima 1, Se não imprima 0:%d\n", PIB1 > PIB2);

}