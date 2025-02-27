#include <stdio.h>
int main () {
    char estado[01];
    char codigocarta[03];
    char nomecidade[20];
    int populacao;
    float areakm2;
    float pib;
    int pontosturisticos;

//.explicação rápida de como funciona a criacao

    printf("Seja bem vindo a criacao de cartas de super trunfo baseadas em cidades \n");
    printf("Escolha um pais, oito estados deste pais serao representados por uma letra de A ate H \n");
    printf("4 cidades serao numeradas de 1 a 4, junte-as em um codigo como por exemplo: A01, B02, C03 \n");

//.perguntas para o preenchimento da carta 1

    printf("Crie a primeira carta : \n");
    printf("Para comecar digite a letra do Estado escolhido: \n");
    scanf("%s", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigocarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade);

    printf("Digite quantas pessoas habitam nessa cidade: \n");
    scanf("%d", &populacao);

    printf("Digite qual tamanho da cidade em km2: \n");
    scanf("%f", &areakm2);

    printf("Digite o p.i.b. da cidade: \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turisticos ha nesta cidade: \n");
    scanf("%d", &pontosturisticos);

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigocarta);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("Populacao: %d\n", populacao);
    printf("Area em km2: %.2f km2 \n", areakm2);
    printf("P.I.B.: %.2f reais \n", pib);
    printf("Pontos Turisticos: %d\n", pontosturisticos);

    //.criação da segunda carta
    
    printf("Agora crie sua segunda carta : \n");

    printf("Letra do Estado escolhido: \n");
    scanf("%s", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigocarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade);

    printf("Digite quantas pessoas habitam nessa cidade: \n");
    scanf("%d", &populacao);

    printf("Digite qual tamanho da cidade em km2: \n");
    scanf("%f", &areakm2);

    printf("Digite o p.i.b. da cidade: \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turisticos ha nesta cidade: \n");
    scanf("%d", &pontosturisticos);

    printf("Carta 2 : \n");
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigocarta);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("Populacao: %d\n", populacao);
    printf("Area em km2: %.2f km2 \n", areakm2);
    printf("P.I.B.: %.2f reais \n", pib);
    printf("Pontos Turisticos: %d\n", pontosturisticos);
   
    return 0;

}

