#include <stdio.h>

int main () {

//.cadastro da carta 1 feito diretamente no codigo
    char estado1[10] = "A";
    char codigocarta1[20] = "A01";
    char nomecidade1[20] = "Rio de Janeiro";
    int populacao1 = 6748000;
    float areakm1 = 1200.25;
    float pib1 = 300499992576.00;
    int pontosturisticos1 = 30;
    float densidadepopulacional1;
    float pibpc1;

 //.calculo densidade populacional e pib per capita da primeira carta

    densidadepopulacional1 = populacao1 / areakm1;
    pibpc1 = pib1 / populacao1;

//.cadastro da carta 2 feito diretamente no codigo
    char estado2[10] = "B";
    char codigocarta2[20] = "B01";
    char nomecidade2[20] = "Sao Paulo";
    int populacao2 = 12325000;
    float areakm2 = 1521.11;
    float pib2 = 699279998976.00;
    int pontosturisticos2 = 50;
    float densidadepopulacional2 = 8102.47;
    float pibpc2 = 56724.32;

//.calculo densidade populacional e pib per capita da segunda carta

    densidadepopulacional2 = populacao2 / areakm2;
    pibpc2 = pib2 / populacao2;

//. demonstração da primeira carta ja registrada
    printf("+--Carta 1--+ \n");
    printf("Estado : %s\n", estado1);
    printf("Codigo da carta : %s\n", codigocarta1);
    printf("Nome da Cidade : %s\n", nomecidade1);
    printf("Populacao : %d\n", populacao1);
    printf("Aream em KM2 : %.2f\n", areakm1);
    printf("P.I.B. : %.2f\n", pib1);
    printf("Quantidade de Pontos Turisticos : %d\n", pontosturisticos1);
    printf("Densidade Populacional : %.2f\n", densidadepopulacional1);
    printf("P.I.B. per capita : %.2f\n", pibpc1);
    printf("\n");

//. demonstração da segunda carta ja registrada
    printf("+--Carta 2--+ \n");
    printf("Estado : %s\n", estado2);
    printf("Codigo da carta : %s\n", codigocarta2);
    printf("Nome da Cidade : %s\n", nomecidade2);
    printf("Populacao : %d\n", populacao2);
    printf("Aream em KM2 : %.2f\n", areakm2);
    printf("P.I.B. : %.2f\n", pib2);
    printf("Quantidade de Pontos Turisticos : %d\n", pontosturisticos2);
    printf("Densidade Populacional : %.2f\n", densidadepopulacional2);
    printf("P.I.B. per capita : %.2f\n", pibpc2);
    printf("\n");

    printf("Atributo comparado : Populacao\n");
    printf("Carta 1 - Rio de Janeiro (RJ) : %d\n", populacao1);
    printf("Carta 2 - Sao Paulo (SP) : %d\n", populacao2);
    if (populacao1 > populacao2){
        printf("Resultado . \n");
        printf("Carta 1 - (Rio de Janeiro) venceu!\n");
    } else {
        printf("Resultado . \n");
        printf("Carta 2 - (Sao Paulo) venceu!\n");
    }

    return 0;
}
