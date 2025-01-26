// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

#include <stdio.h>

// Funçao do código
int main() {
    char codigo[4]; // variável do tipo array para armazenar código da cidade.
    int populacao;  // variável do tipo inteiro para armazenar a população.
    float area;     // variável do tipo ponto flutuante para armazenar area da cidade.
    float pib;      // variável do tipo ponto flutuante para armazenar PIB da cidade.
    int pontos_turisticos; // variável do tipo interio para armazenar os pontos turísticos.

    // Solicitações de entradas do código
    printf("Digite o código da carta (Exemplo:B03,A02,etc..): ");
    scanf("%s", codigo); // // Lê uma string sem espaços e armazena no array 'codigo'

    printf("Digite a população da cidade (digite sem utilizar pontos para separar milhares): ");
    scanf("%d", &populacao); //Lê um número inteiro e armazena na variável 'populacao'.
    
    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area); // Lê um número de ponto flutuante e armazena na variável 'area'.

    printf("Digite o Pib da cidade (R$ Bilhões): ");
    scanf("%f", &pib); // Lê um número de ponto flutuante e armazena na variável 'pib'.

    printf("Digite o numero de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos); // Lê um número inteiro e armazena na variável 'pontos_turisticos'.

    // Exibição dos dados do código
    printf("\n######### DADOS DA SUA CARTA ########### \n");
    printf("\nCódigo da carta: %s\n", codigo); // Mostra o código da carta.
    printf("População: %d \n", populacao);   // Mostra a população da cidade.
    printf("Área: %f km²\n", area);          // Mostra a área da cidade
    printf("PIB: R$ %f Bilhões\n", pib);     // Mostra o PIB da cidade
    printf("Pontos Turísticos: %d\n", pontos_turisticos);  // Mostra o número de pontos turísticos.
    printf("\n### SUPER TRUNFO - PAÍSES - MATECHECK ###\n");

    return 0; // Indica que o programa terminou com sucesso

}

