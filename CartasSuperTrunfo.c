#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Super Trunfo - Paises \n");
    char estado1;
    char codcar1[20];
    char nomecid1[40];
    int populacao1;
    float area1;
    float pib1;
    int ponto1;

    printf("Digite abaixo as informações para Carta1\n");

    printf("Uma letra de 'A' a 'H' (representando um Estado): \n");
    scanf("%c", &estado1);

    printf("A letra que representa o Estado seguida de um número entre 01 a 04 (ex: C02, F04): \n");
    scanf("%s", codcar1);

    printf("Nome da cidade: \n");
    scanf("%s", nomecid1);

    printf("A população ref. a cidade: \n");
    scanf("%d", &populacao1);

    printf("A área ref. a cidade: \n");
    scanf("%f", &area1);

    printf("O PIB ref. a cidade: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &ponto1);
    
    printf("Carta1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codcar1);
    printf("Nome da Cidade: %s \n", nomecid1);
    printf("População: %f \n", populacao1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", ponto1);
    
        
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
