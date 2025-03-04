#include <stdio.h>

int main(){

    //Variáveis
    char codigo_carta1[30], codigo_carta2[30];// variável do tipo array para armazenar código da cidade.
    unsigned int populacao_carta1, populacao_carta2;
    float area_carta1, area_carta2;
    float pib_carta1, pib_carta2;
    int pontos_turisticos_carta1, pontos_turisticos_carta2;
    float densidade_populacional_carta1, densidade_populacional_carta2;
    float pib_per_capita_carta1, pib_per_capita_carta2;
    float super_poder_carta1, super_poder_carta2;

    //Entrada de dados da carta 1
    printf("\n### SUPER TRUNFO - PAÍSES - MATECHECK ###\n"); //CABEÇALHO
    printf(" \n########## CARTA 1 ###########\n\n");//cabeçalho
    printf("Digite o código da carta 1 (sem espaços): ");
    scanf("%s", &codigo_carta1);// Lê uma string sem espaços e armazena no array 'codigo da carta1'
    printf("Digite a população da carta 1: ");
    scanf("%u", &populacao_carta1);
    printf("Digite a area da carta 1: ");
    scanf("%f", &area_carta1);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib_carta1);
    printf("Digite o numero de pontos turísticos da carta 1: ");
    scanf("%d", &pontos_turisticos_carta1);

    //Entrada de dados da carta 2
    printf(" \n########## CARTA 2 ###########\n\n");//cabeçalho
    printf("Digite o código da carta 2 (sem espaços): ");
    scanf("%s", &codigo_carta2);
    printf("Digite a população da carta 2: ");
    scanf("%u", &populacao_carta2);
    printf("Digite a area da carta 2: ");
    scanf("%f", &area_carta2);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib_carta2);
    printf("Digite o numero de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_turisticos_carta2);

    //Operadores matemáticos carta 1
    densidade_populacional_carta1 = (float)populacao_carta1 / area_carta1;
    pib_per_capita_carta1 = pib_carta1 / populacao_carta1;
    super_poder_carta1 = populacao_carta1 + area_carta1 + pib_carta1 + pontos_turisticos_carta1 + pib_per_capita_carta1 + (1 / densidade_populacional_carta1);
    
    //Operadores matemáticos carta 2
    densidade_populacional_carta2 = (float)populacao_carta2 / area_carta2;
    pib_per_capita_carta2 = pib_carta2 / populacao_carta2;
    super_poder_carta2 = populacao_carta2 + area_carta2 + pib_carta2 + pontos_turisticos_carta2 + pib_per_capita_carta2 + (1 / densidade_populacional_carta2);
   
    //Exibição de dados carta 01
    printf("\n######### EXIBIÇÃO CARTA 01 ###########\n\n ");//cabeçalho
    printf("Código: %s\n", codigo_carta1);// Mostra o código da carta.
    printf("População: %u\n", populacao_carta1);
    printf("Área: %f\n", area_carta1);
    printf("PIB: %f\n", pib_carta1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_carta1);
    printf("Densidade populacional: %f\n", densidade_populacional_carta1);
    printf("PIB per capita: %f\n", pib_per_capita_carta1);
    printf("Super Poder: %f\n", super_poder_carta1);

    //Exibição de dados carta 02
    printf("\n######### EXIBIÇÃO CARTA 02 ###########\n\n ");//cabeçalho
    printf("Código: %s\n", codigo_carta2);
    printf("População: %u\n", populacao_carta2);
    printf("Área: %f\n", area_carta2);
    printf("PIB: %f\n", pib_carta2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_carta2);
    printf("Densidade populacional: %f\n", densidade_populacional_carta2);
    printf("PIB per capita: %f\n", pib_per_capita_carta2);
    printf("Super Poder: %f\n", super_poder_carta2);

    //Comparação de atributos entre as cartas
    printf("\n## Resultado carta1 =(1) carta 2 =(0) #### ESTÁCIO FATALITY ####\n\n"); //cabeçalho
    printf("População: Carta %d venceu\n", populacao_carta1 > populacao_carta2);
    printf("Área: Carta %d venceu\n", area_carta1 > area_carta2);//Exibe e compara se area da carta 1 é maior que área da carta 2
    printf("PIB: Carta %d venceu\n",  pib_carta1 > pib_carta2);
    printf("Pontos turísticos: Carta %d venceu\n",  pontos_turisticos_carta1 > pontos_turisticos_carta2);
    printf("densidade populacional: Carta %d venceu\n", densidade_populacional_carta1 > densidade_populacional_carta2);
    printf("PIB per capita: Carta %d venceu\n", pib_per_capita_carta1 > pib_per_capita_carta2);
    printf("Super Poder: Carta %d venceu\n", super_poder_carta1 > super_poder_carta2);
    printf("\n### SUPER TRUNFO - PAÍSES - MATECHECK ###\n"); // rodapé

    return 0;

}
