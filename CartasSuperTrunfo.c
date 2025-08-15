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
    // Variáveis definidas - Super Trunfo - Nível Novato
    char estado1[3], estado2[3];
    char codcar1[4], codcar2[4];
    char nomecid1[40], nomecid2[40]; 
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto1, ponto2; 

    // Variáveis definidas - Super Trunfo - Nível Aventureiro
    float densipop1, densipop2;
    float pibper1, pibper2;
        
    //Variável Resultado - comparação dos valores dos produtos das cartas 1 e carta2 - Nível Mestre
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPonto;
    int resultadoDensipop;
    int resultadoPibpercapita;
    int resultadoSuperpoder;
          
    // Título para exibição do projeto
    printf("Desafio Super Trunfo - Paises \n\n");

    // Definição dos Estados x Letras
    printf("Letras definidas para cada Estado:\n\n");
    printf("AL = Alagoas \n");
    printf("BA = Bahia \n");
    printf("ES = Espirito Santo \n");
    printf("MG = Minas Gerais \n");
    printf("SP = São Paulo \n");
    printf("RJ = Rio de Janeiro\n");
    printf("SE = Sergipe \n");
    printf("RO = Roraima \n\n");
    
    // Entrada de dados - Carta1
    printf("Digite abaixo as informações para Carta1\n");

    printf("Digite as siglas do Estado (ex: MG, SP): \n");
    scanf(" %2s", estado1);

    printf("A letra que representa o Estado seguida de um número entre 1 a 4 (ex: DF2, CE4): \n");
    scanf("%3s", codcar1);

    printf("O nome da cidade: \n");
    scanf(" %39[^\n]", nomecid1); 

    printf("A população ref. a cidade: \n");
    scanf("%lu", &populacao1);

    printf("A área ref. a cidade: \n");
    scanf("%f", &area1);

    printf("O PIB ref. a cidade: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos ref. a cidade: \n");
    scanf("%d", &ponto1);
 
    //Cálculo da Densidade populacional carta1 (Utilizando conversão explicita e proteção Contra divisão por Zero) - Nível Aventureiro
    
        if (area1 != 0.0f) {
            densipop1 = (float) populacao1 / area1;
        }   else {
            densipop1 = 0.0f; //Define um valor padrão seguro
            printf("Atenção: Área da Carta1 é zero. Densidade populacional definida como 0.\n");
        }


    //Cálculo Pib per Capita carta1 (Utilizando conversão explicita e proteção Contra divisão por Zero) - Nível Aventureiro
    
        if (populacao1 != 0.0f) {
            pibper1 = pib1 * 1000000000.0 / (float) populacao1;
        }   else {
            pibper1 = 0.0f; //Define um valor padrão seguro
            printf("Atenção: População da carta 1 é zero. Pib per Capita definido como 0\n");        
        } 
    

    //Cálculo inverso_densidade1 - Superpoder Carta1 - Nível Mestre 
        float inverso_densidade1 = 0.0f;
        if (densipop1 != 0.0f) {
            inverso_densidade1 = 1.0f / densipop1;    
        }   else {
            // Pode-se definir um valor padrão para o inverso da densidade quando a densidade é zero,
            // ou simplesmente manter 0.0f, dependendo da regra do jogo.
            // Ex: inverso_densidade1 = valor_muito_alto_ou_0;
        }
      

    //Cálculo Superpoder das Carta1 - Nível Mestre  
    float superpoder1 = (float) populacao1 +  area1 + pib1 + (float) ponto1 + inverso_densidade1 + pibper1; 
    printf("Superpoder Carta1 = %.2f \n", superpoder1);
     
    // Saida de dados - Carta1
    printf("Carta1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %3s \n", codcar1);
    printf("Nome da Cidade: %s \n", nomecid1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", ponto1);
    printf("Densidade populacional: %.2f hab/km² \n", densipop1);
    printf("PIB per Capita: %.2f reais \n\n", pibper1);
          
    //Entrada de dados - Carta2
    printf("Digite abaixo as informações para Carta2 \n");
    
    printf("Digite as siglas do Estado (ex: MG, SP): \n"); 
    scanf(" %2s", estado2); 

    printf("A letra que representa o Estado seguida de um número entre 1 a 4 (ex: DF2, CE4): \n");
    scanf("%3s", codcar2);

    printf("O nome da cidade: \n");
    scanf(" %39[^\n]", nomecid2);

    printf("A população ref. a cidade: \n");
    scanf("%lu", &populacao2);

    printf("A área ref. a cidade: \n");
    scanf("%f", &area2);

    printf("O PIB ref. a cidade: \n");
    scanf("%f", &pib2);

    printf("O número de Pontos Turísticos ref. a cidade: \n");
    scanf("%d", &ponto2);

        //Cálculo da Densidade populacional carta2 (Utilizando conversão explicita e proteção Contra divisão por Zero) - Nível Aventureiro
    
        if (area2 != 0.0f) {
            densipop2 =(float) populacao2 / area2;
        }   else {
            float densipop2 = 0.0f; //Define um valor padrão seguro
            printf("Atenção: Área da Carta 2 é zero. Densidade populacional definida como 0.\n");
        }

    
        //Cálculo Pib per Capita carta2 (Utilizando conversão explicita e proteção Contra divisão por Zero) - Nível Aventureiro
    
        if (populacao2 != 0.0f) {
            pibper2 = pib2 * 1000000000.0 / (float) populacao2;
        }   else {
            float pibper2 = 0.0f; //Define um valor padrão seguro
            printf("Atenção: População da carta 2 é zero. Pib per Capita definido como 0\n");        
        } 


        //Cálculo inverso_densidade2 - Superpoder Carta1 - Nível Mestre 
        float inverso_densidade2 = 0.0f;
        if (densipop2 != 0.0f) {
            inverso_densidade2 = 1.0f / densipop2;}
            else {
            //Pode-se definir um valor padrão para o inverso da densidade quando a densidade é zero,
            //ou simplesmente manter 0.0f, dependendo da regra do jogo.
            //Ex: inverso_densidade2 = valor_muito_alto_ou_0;}
        }  
    

    //Cálculo Superpoder das Carta2 - Nível Mestre  
    float superpoder2 = (float) populacao2 +  area2 + pib2 + (float) ponto2 + inverso_densidade2 + pibper2; 
    printf("Superpoder Carta2 = %.2f \n\n", superpoder2);
   
    //Saida de dados - Carta2
    printf("Carta2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %3s \n", codcar2);
    printf("Nome da Cidade: %s \n", nomecid2);
    printf("População: %lu \n", populacao2);
    printf("Área (em Km²): %.2f \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", ponto2);
    printf("Densidade Populacional: %.2f hab/km² \n", densipop2);
    printf("PIB per Capita: %.2f reais\n\n", pibper2); 
   
    
    //Cálculo comparação das Cartas 1 e 2 - Nível Mestre
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPonto = ponto1 > ponto2;
    resultadoDensipop = densipop1 < densipop2;
    resultadoPibpercapita = pibper1 > pibper2;
    resultadoSuperpoder = superpoder1 > superpoder2;
    
    //Exibir valores comparação das cartas 1 e 2 -Nível Mestre
    printf("Comparação de Cartas com valor dos atributos:\n");
    printf("População           : Carta1 é %lu          - Carta2 é %lu          - Resultado vencedor %d \n", populacao1, populacao2, resultadoPopulacao);
    printf("Área1               : Carta1 é %.2f         - Carta2 é %.2f         - Resultado vencedor %d\n", area1, area2, resultadoArea);
    printf("Pib1                : Carta1 é %.2f         - Carta2 é %.2f         - Resultado vencedor %d\n", pib1, pib2, resultadoPib);
    printf("Pontos Turísticos   : Carta1 é %d           - Carta2 é %d           - Resultado vencedor: %d \n", ponto1, ponto2, resultadoPonto);
    printf("Densidade Populacional: Carta1 é %.2f       - Carta2 é %.2f         - Resultado vencedor %d\n", densipop1, densipop2, resultadoDensipop);
    printf("Pib per Capita      : Carta1 é %.2f         - Carta2 é %.2f         - Resultado vencedor %d\n", pibper1, pibper2, resultadoPibpercapita);
    printf("Superpoder          : Carta1 é %.2f         - Carta2 é %.2f         - Resultado vencedor %d\n", superpoder1, superpoder2, resultadoSuperpoder);

    //Exibir resultado se Carta1 ou Carta2 venceu
    printf("Comparação de Cartas:\n");
    printf("População: %s venceu (%d)\n", resultadoPopulacao ? "Carta1" : "Carta2", resultadoPopulacao);
    printf("Área: %s venceu (%d)\n", resultadoArea ? "Carta1" : "Carta2", resultadoArea);
    printf("Pib: %s venceu (%d)\n", resultadoPib ? "Carta1" : "Carta2", resultadoPib);
    printf("Pontos Turísticos: %s venceu (%d)\n", resultadoPonto ? "Carta1" : "Carta2", resultadoPonto);
    printf("Densidade Populacional: %s venceu (%d)\n", resultadoDensipop ? "Carta1" : "Carta2", resultadoDensipop);
    printf("Pib per Capita: %s venceu (%d)\n", resultadoPibpercapita ? "Carta1" : "Carta2", resultadoPibpercapita);
    printf("Superpoder: %s venceu (%d)\n", resultadoSuperpoder ? "Carta1" : "Carta2", resultadoSuperpoder);
    
    
    return 0;
}
