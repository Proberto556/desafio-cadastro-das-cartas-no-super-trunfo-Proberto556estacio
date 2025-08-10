#include <stdio.h>

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



    int main() {
    // Variáveis definidas - Super Trunfo - Países 
    char estado1, estado2;
    char codcar1[4], codcar2[4];
    char nomecid1[40], nomecid2[40]; 
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto1, ponto2; 
      
    // Título para exibição do projeto
    printf("Desafio Super Trunfo - Paises \n\n");

    // Definição dos Estados x Letras
    printf("Letras definidas para cada Estado:\n\n");
    printf("A = Alagoas \n");
    printf("B = Bahia \n");
    printf("C = Espirito Santo \n");
    printf("D = Minas Gerais \n");
    printf("E = São Paulo \n");
    printf("F = Rio de Janeiro\n");
    printf("G = Sergipe \n");
    printf("H = Roraima \n\n");
    
    // Entrada de dados - Carta1
    printf("Digite abaixo as informações para Carta1\n");

    printf("Uma letra de 'A' a 'H' representando um Estado: \n");
    scanf(" %c", &estado1);

    printf("A letra que representa o Estado seguida de um número entre 01 a 04 (ex: C02, F04): \n");
    scanf("%3s", codcar1);

    printf("O nome da cidade: \n");
    scanf(" %39[^\n]", nomecid1); 

    printf("A população ref. a cidade: \n");
    scanf("%d", &populacao1);

    printf("A área ref. a cidade: \n");
    scanf("%f", &area1);

    printf("O PIB ref. a cidade: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos ref. a cidade: \n");
    scanf("%d", &ponto1);
 
    //Cálculo da Densidade populacional carta1 (Utilizando conversão explicita e proteção Contra divisão por Zero) 
    float densipop1;
        if (area1 != 0.0f) {
            densipop1 =(float) populacao1 / area1;
        } else {
            densipop1 = 0.0f; //Define um valor padrão seguro
            printf("Atenção: Área da Carta1 é zero. Densidade populacional definida como 0.\n");
        }

    //Cálculo Pib per Capita carta1 (Utilizando conversão explicita e proteção Contra divisão por Zero)
    float pibper1;
        if (populacao1 != 0.0f) {
        pibper1 = pib1 * 1000000000.0 / (float) populacao1;
        } else {
            pibper1 = 0.0f; //Define um valor padrão seguro
            printf("Atenção: População da carta 1 é zero. Pib per Capita definido como 0\n");        
        } 
    
    // Saida de dados - Carta1
    printf("Carta1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %3s \n", codcar1);
    printf("Nome da Cidade: %s \n", nomecid1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", ponto1);
    printf("Densidade populacional: %.2f hab/km² \n", densipop1);
    printf("PIB per Capita: %.2f reais \n\n", pibper1);
      
    //Entrada de dados - Carta2
    printf("Digite abaixo as informações para Carta2 \n");
    
    printf("Uma letra de 'A' a 'H' (representando um Estado): \n"); 
    scanf(" %c", &estado2); 

    printf("A letra que representa o Estado seguida de um número entre 01 a 04 (ex: C02, F04): \n");
    scanf("%3s", codcar2);

    printf("O nome da cidade: \n");
    scanf(" %39[^\n]", nomecid2);

    printf("A população ref. a cidade: \n");
    scanf("%d", &populacao2);

    printf("A área ref. a cidade: \n");
    scanf("%f", &area2);

    printf("O PIB ref. a cidade: \n");
    scanf("%f", &pib2);

    printf("O número de Pontos Turísticos ref. a cidade: \n");
    scanf("%d", &ponto2);

    //Cálculo da Densidade populacional carta2 (Utilizando conversão explicita e proteção Contra divisão por Zero) 
    float densipop2;
        if (area2 != 0.0f) {
            densipop2 =(float) populacao1 / area1;
        } else {
            densipop2 = 0.0f; //Define um valor padrão seguro
            printf("Atenção: Área da Carta 2 é zero. Densidade populacional definida como 0.\n");
        }

    //Cálculo Pib per Capita carta2 (Utilizando conversão explicita e proteção Contra divisão por Zero)
    float pibper2;
        if (populacao2 != 0.0f) {
        pibper2 = pib2 * 1000000000.0 / (float) populacao1;
        } else {
            pibper2 = 0.0f; //Define um valor padrão seguro
            printf("Atenção: População da carta 2 é zero. Pib per Capita definido como 0\n");        
        } 

    //Saida de dados - Carta2
    printf("Carta2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %3s \n", codcar2);
    printf("Nome da Cidade: %s \n", nomecid2);
    printf("População: %i \n", populacao2);
    printf("Área (em Km²): %.2f \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %i \n", ponto2);
    printf("Densidade Populacional: %.2f hab/km² \n", densipop2);
    printf("PIB per Capita: %.2f reais\n", pibper2);
      
      
    
    return 0;
}
