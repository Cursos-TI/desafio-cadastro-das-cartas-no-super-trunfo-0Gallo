#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado;
    char codigocarta[32];
    char nomecidade[32];
    int populacao;
    float areakm2;
    float pib;
    int pontosturisticos;
    float densidadepop;
    float pibpc;

//.explicação rápida de como funciona a criacao
    printf("Seja bem vindo a criacao de cartas de super trunfo baseadas em cidades \n");
    printf("Escolha um pais, oito estados deste pais serao representados por uma letra de A ate H \n");
    printf("4 cidades serao numeradas de 1 a 4, junte-as em um codigo como por exemplo: A01, B02, C03 \n");
//.perguntas para o preenchimento da carta
    printf("Para comecar digite a letra do Estado escolhido: \n");
    scanf("%c", &estado);

    printf("Digite o codigo da carta (letra do estado + numero da cidade): \n");
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

    densidadepop = (float) populacao / areakm2;

    pibpc = (float) pib / populacao;

//.resultado final da demonstracao da carta
    printf("Estado: %c\n", estado);
    printf("Codigo da carta: %s\n", codigocarta);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("Populacao: %d\n", populacao);
    printf("Area em km2: %.2f\n", areakm2);
    printf("P.I.B.: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosturisticos);
    printf("Densidade populacional : %.0f\n", densidadepop);
    printf("PIB per capita : %.2f\n", pibpc);
//agradecimento
    printf("Parabens, sua carta ficou incrivel, obrigado por testar meu program

    return 0;
}
