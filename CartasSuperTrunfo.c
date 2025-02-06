#include <stdio.h>

int main() {
    //variáveis
    char codigoCidade[] = "A01";
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    //pegando a idade do usário
    //Nome
    printf("Qual o nome da cidade: ");
    scanf("%[^\n]",nome);
    //População
    printf("Qual a populacao: ");
    scanf("%d",&populacao);
    //Área
    printf("Qual a area dela (em quilometros quadrados): ");
    scanf("%f",&area);
    //PIB
    printf("Qual o PIB da cidade: ");
    scanf("%f",&pib);
    //Pontos turísticos
    printf("Quantos pontos turisticos para visitar: ");
    scanf("%d",&pontosTuristicos);
    //calculando a densidade populacional e o pib per capto
    float densidadePopulacional = populacao / area;
    float pibPercapto = pib / populacao;

    //imprimindo os dados
    printf("-----------------------------\n");
    printf("O codigo da carta e: %s\n",codigoCidade);
    printf("O nome da cidade e: %s\n",nome);
    printf("A populacao e: %d habitantes\n",populacao);
    printf("A area e: %.2f quilometros quadrados\n",area);
    printf("O PIB da cidade e: %.2f\n",pib);
    printf("A cidade tem : %d pontos turisticos\n",pontosTuristicos);
    printf("A densidade populacional e de: %.2f pessoas por quilometros quadrados\n",densidadePopulacional);
    printf("O PIB percapto da cidade e: %.2f reais por habitantes",pibPercapto);

    return 0;
}
