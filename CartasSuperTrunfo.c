#include <stdio.h>

int main () {
    char estado1[01], estado2[01];
    char codigocarta1[03], codigocarta2[03];
    char nomecidade1[20], nomecidade2[20];
    unsigned long int populacao1, populacao2;
    float areakm1, areakm2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepop1, densidadepop2;
    float pibpc1, pibpc2;
    float superpoder1;
    float superpoder2;

//. ciração da primeira carta

    printf("Crie a primeira carta : \n");
    printf("Para comecar digite a letra do Estado escolhido: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigocarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade1);

    printf("Digite quantas pessoas habitam nessa cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite qual tamanho da cidade em km2: \n");
    scanf("%f", &areakm1);

    printf("Digite o p.i.b. da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turisticos ha nesta cidade: \n");
    scanf("%d", &pontosturisticos1);

//. calculo da densidade e o pib per capta da primeira carta

    densidadepop1 = (float) populacao1 / areakm1;

    pibpc1 = (float) pib1 / populacao1;
    
//. ciração da segunda carta

    printf("\n");
    printf("Agora crie sua segunda carta : \n");
    printf("\n");

    printf("Letra do Estado escolhido: \n");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigocarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade2);

    printf("Digite quantas pessoas habitam nessa cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite qual tamanho da cidade em km2: \n");
    scanf("%f", &areakm2);

    printf("Digite o p.i.b. da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos ha nesta cidade: \n");
    scanf("%d", &pontosturisticos2);

//. calculo da densidade e o pib per capta da segunda carta

    densidadepop2 = (float) populacao2 / areakm2;

    pibpc2 = (float) pib2 / populacao2;
    
//. resultado de criação de ambas as cartas
    printf("\n");
    printf("+---Carta 1---+ \n");
    printf("\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", codigocarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area em km2: %.2f km2 \n", areakm1);
    printf("P.I.B.: %.2f reais \n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade populacional : %.2f hab/km2\n", densidadepop1);
    printf("PIB per capita : %.2f reais \n", pibpc1);
    printf("\n");

    printf("+---Carta 2---+  \n");
    printf("\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area em km2: %.2f km2 \n", areakm2);
    printf("P.I.B.: %.2f reais \n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade populacional : %.2f hab/km2\n", densidadepop2);
    printf("PIB per capita : %.2f reais \n", pibpc2);
    printf("\n");

//. calculo de super poder, somar todos os atributos numéricos
//. quanto menor a densidade populacional maior o poder da carta. tem que ser armazenado como float

float densidadepop1c = 1 / densidadepop1;
float densidadepop2c = 1 / densidadepop2;

superpoder1 = populacao1 + areakm1 + pib1 + pontosturisticos1 + pibpc1 + densidadepop1c;
superpoder2 = populacao2 + areakm2 + pib2 + pontosturisticos2 + pibpc2 + densidadepop2c;

printf("O super poder da carta 1 e : %.2f\n", superpoder1);
printf("O super poder da carta 2 e : %.2f\n", superpoder2);
printf("\n");

//. comparar as cartas, a carta com maior valor vence
//. tem que ser usado todos os atributos menos o estado, codigo e nome
//. a carta com o menor valor de densidade populacional vence

long int populacao = populacao1 > populacao2;
float area = areakm1 > areakm2;
float pib = pib1 > pib2;
int pontosturisticos = pontosturisticos1 > pontosturisticos2;
float densidadepop = densidadepop1 < densidadepop2;
float pibpc = pibpc1 > pibpc2;
int superpoder = superpoder1 > superpoder2;


//. para cada atributo, o usuário deve saber qual carta venceu
//. 1 para verdadeiro - carta 1 vence ---- 0 para falso, carta 2 vence

printf("\n");
printf("O numero 1 representa que a carta 1 ganhou.\n");
printf("O numero 0 representa que a carta 2 ganhou.\n");
printf("\n");
printf("+-----------------------------------------+\n");
printf("|                                         |\n");
printf("|                RESULTADO                |\n");
printf("|                                         |\n");
printf("+-----------------------------------------+\n");
printf("|         Populacao : %lu venceu            |\n", populacao);
printf("|            Area : %.0f venceu              |\n", area);
printf("|            Pib :%.0f venceu                |\n", pib);
printf("|      Pontos Turisticos : %d venceu       |\n", pontosturisticos);
printf("|   Densidade Populacional : %.0f venceu     |\n", densidadepop);
printf("|      P.I.B. per capita : %.0f venceu       |\n", pibpc);
printf("|         Super poder : %d venceu          |\n", superpoder);
printf("+-----------------------------------------+");


 return 0;

}

