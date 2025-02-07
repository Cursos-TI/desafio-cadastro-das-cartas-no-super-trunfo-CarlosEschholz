#include <stdio.h>

int main() {
    //variáveis da primeira carta
    char codigoCidade1[] = "A01";
    char nome1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //pegando as informações do usário
    //Nome
    printf("Qual o nome da primeira cidade: ");
    scanf("%s",nome1);
    //População
    printf("Qual a populacao da primeira cidade: ");
    scanf("%d",&populacao1);
    //Área
    printf("Qual a area da primeira cidade (em quilometros quadrados): ");
    scanf("%f",&area1);
    //PIB
    printf("Qual o PIB da primeira cidade: ");
    scanf("%f",&pib1);
    //Pontos turísticos
    printf("Quantos pontos turisticos a primeira cidade tem para visitar: ");
    scanf("%d",&pontosTuristicos1);
    //calculando a densidade populacional e o pib per capto
    float densidadePopulacional1 = populacao1 / area1;
    float pibPercapto1 = pib1 / populacao1;
    //super poder da primeira cidade
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + densidadePopulacional1 + pibPercapto1;
    //imprimindo os dados
    printf("---------------------------------------------------------------------------\n");
    printf("Os dados da primeira cidade sao:\n");
    printf("O codigo da carta e: %s\n",codigoCidade1);
    printf("O nome da cidade e: %s\n",nome1);
    printf("A populacao e: %d habitantes\n",populacao1);
    printf("A area e: %.2f quilometros quadrados\n",area1);
    printf("O PIB da cidade e: %.2f\n",pib1);
    printf("A cidade tem : %d pontos turisticos\n",pontosTuristicos1);
    printf("A densidade populacional e de: %.2f pessoas por quilometros quadrados\n",densidadePopulacional1);
    printf("O PIB percapto da cidade e: %.2f reais por habitantes\n",pibPercapto1);
    printf("O superpoder da cidade e: %.2f reais por habitantes\n",superPoder1);
    printf("---------------------------------------------------------------------------\n");
    //variáveis da segunda ciade
    char codigoCidade2[] = "A02";
    char nome2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //Nome
    printf("Qual o nome da segunda cidade: ");
    scanf("%s",nome2);
    //População
    printf("Qual a populacao da segunda cidade: ");
    scanf("%d",&populacao2);
    //Área
    printf("Qual a area da segunda cidade (em quilometros quadrados): ");
    scanf("%f",&area2);
    //PIB
    printf("Qual o PIB da segunda cidade: ");
    scanf("%f",&pib2);
    //Pontos turísticos
    printf("Quantos pontos turisticos a segunda cidade tem para visitar: ");
    scanf("%d",&pontosTuristicos2);
    //calculando a densidade populacional e o pib per capto
    float densidadePopulacional2 = populacao2 / area2;
    float pibPercapto2 = pib2 / populacao2;
    //super poder da segunda cidade
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + densidadePopulacional2 + pibPercapto2;

    //imprimindo dados da segunda
    printf("---------------------------------------------------------------------------\n");
    printf("Os dados da segunda cidade sao:\n");
    printf("O codigo da carta e: %s\n",codigoCidade2);
    printf("O nome da cidade e: %s\n",nome2);
    printf("A populacao e: %d habitantes\n",populacao2);
    printf("A area e: %.2f quilometros quadrados\n",area2);
    printf("O PIB da cidade e: %.2f\n",pib2);
    printf("A cidade tem : %d pontos turisticos\n",pontosTuristicos2);
    printf("A densidade populacional e de: %.2f pessoas por quilometros quadrados\n",densidadePopulacional2);
    printf("O PIB percapto da cidade e: %.2f reais por habitantes\n",pibPercapto2);
    printf("O superpoder da cidade e: %.2f reais por habitantes\n",superPoder2);
    printf("---------------------------------------------------------------------------\n");
    //verificações
    printf("A densidade populacional da primeira cidade e: %.2f e o da segunda cidade e: %.2f (vence a cidade com menor valor)\n",densidadePopulacional1,densidadePopulacional2);
    if(densidadePopulacional1 < densidadePopulacional2){
        printf("A vencedora foi... %s\n",nome1);
    } else{
        printf("A vencedora foi... %s\n",nome2);
    }
    printf("O super poder da primeira cidade e: %.2f e o da segunda e: %.2f (vence a cidade com maior valor)",superPoder1,superPoder2);
    if(superPoder1 > superPoder2){
        printf("A cidade vencedora foi...%s",nome1);
    }else{
        printf("A cidade vencedora foi...%s",nome2);
    }

    return 0;
}
