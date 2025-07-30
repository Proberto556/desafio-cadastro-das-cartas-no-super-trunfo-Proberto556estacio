#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Super Trunfo - Paises \n");
    printf("Informações Carta1\n");
    char estado1;
    char codcar1[10];
    char nomecid1[30];
    int populacao1;
    float area1;
    float pib1;
    int ponto1;


    printf("Digite uma letra de 'A' a 'H' (representando um estado): \n");
    scanf("%c", &estado1);

    printf("Digite a letra do Estado seguida de um número de 01 a 04 (ex: C02, F04: \n");
    scanf("%s", &codcar1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomecid1);

    printf("Digite a população: \n");
    scanf("%s", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("f", &pib1);

    



    
        
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
