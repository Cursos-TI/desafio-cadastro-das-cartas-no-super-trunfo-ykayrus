    #include <stdio.h>

    // Funçao do código
    int main() {
        
        char codigo[4]; // variável do tipo array para armazenar código da cidade.
        int populacao;  // variável do tipo inteiro para armazenar a população.
        float area;     // variável do tipo ponto flutuante para armazenar area da cidade.
        float pib;      // variável do tipo ponto flutuante para armazenar PIB da cidade.
        int pontos_turisticos; // variável do tipo interio para armazenar os pontos turísticos.
        
        float densidade_pop; // variável do tipo ponto flutuante para amazenar a densidade populacional.
        float pib_per_cap;   // variável do tipo ponto flutuante para amazenar o PIB per capita.
    
        // Solicitações de entradas do código
        printf("Digite o código da carta (Exemplo:B03,A02,etc..): ");
        scanf("%s", codigo); // // Lê uma string sem espaços e armazena no array 'codigo'
    
        printf("Digite a população da cidade (digite sem utilizar pontos para separar milhares): ");
        scanf("%d", &populacao); //Lê um número inteiro e armazena na variável 'populacao'.
        
        printf("Digite a área da cidade (km²): ");
        scanf("%f", &area); // Lê um número de ponto flutuante e armazena na variável 'area'.
    
        printf("Digite o Pib da cidade: ");
        scanf("%f", &pib); // Lê um número de ponto flutuante e armazena na variável 'pib'.
    
        printf("Digite o numero de pontos turísticos da cidade: ");
        scanf("%d", &pontos_turisticos); // Lê um número inteiro e armazena na variável 'pontos_turisticos'.

        // Operadores matemáticos
        densidade_pop = (float) populacao / area; // Calcula a densidade populacional.
        pib_per_cap = (float) pib / populacao;    // Calcula o PIB per capita.
    
        // Exibição dos dados do código
        printf("\n######### DADOS DA SUA CARTA ########### \n"); // Cabeçalho
        
        printf("\nCódigo da carta: %s\n", codigo); // Mostra o código da carta.
        printf("População: %d \n", populacao);   // Mostra a população da cidade.
        printf("Área: %f km²\n", area);          // Mostra a área da cidade.
        printf("PIB: R$ %f \n", pib);     // Mostra o PIB da cidade.
        printf("Pontos Turísticos: %d\n", pontos_turisticos);  // Mostra o número de pontos turísticos.
        printf("Densidade Populacional: %f \n", densidade_pop); // Mostra o numero da densidade populacional.
        printf("PIB per capita: %f \n", pib_per_cap); // Mostra o valor PIB per capita por habitante.
       
        printf("\n### SUPER TRUNFO - PAÍSES - MATECHECK ###\n"); // rodapé
        
        return 0; // Indica que o programa terminou com sucesso
    
    }
    
    
    
