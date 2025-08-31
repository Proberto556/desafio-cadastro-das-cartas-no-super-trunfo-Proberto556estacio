#include <stdio.h>

// Desafio Super Trunfo - Países //
// Tema 1 - Cadastro das Cartas - Início //

    int main() {
    // Variáveis definidas - Super Trunfo - Nível Novato - Tema 2 //
    char estado1[3], estado2[3];
    char codcar1[4], codcar2[4];
    char nomecid1[40], nomecid2[40]; 
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto1, ponto2; 
    
    // Variáveis definidas - Super Trunfo - Nível Aventureiro - Tema 2 //
    float densipop1, densipop2;
    float pibper1, pibper2;

    // Variável de controle definida - Super Trunfo - Nível Aventureiro - Tema 3 //
    int escolhaJogador;

    // Acrescimo variáveis - Nível Mestre - Tema 3
    int resultado1, resultado2, resultadofinal;
    char primeiroAtributo, segundoAtributo;
                    
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
    
    scanf("%*c");

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
 
    //Cálculo da Densidade populacional carta1 (Utilizando conversão explicita e proteção Contra divisão por Zero) - Nível Aventureiro - Tema 2
    
        if (area1 != 0.0f) {
            densipop1 = (float) populacao1 / area1;
        }   
        else {
        densipop1 = 0.0f; //Define um valor padrão seguro
        printf("Atenção: Área da Carta1 é zero. Densidade populacional definida como 0.\n\n");
        }


    //Cálculo Pib per Capita carta1 (Utilizando conversão explicita e proteção Contra divisão por Zero) - Nível Aventureiro - Tema 2
    
        if (populacao1 != 0.0f) {
            pibper1 = pib1 * 1000000000.0 / (float) populacao1;
        }
        else {
        pibper1 = 0.0f; //Define um valor padrão seguro
        printf("Atenção: População da carta 1 é zero. Pib per Capita definido como 0\n\n");        
        } 
    

    //Cálculo inverso_densidade1 - Superpoder Carta1 - Nível Mestre - Tema 2
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
    printf("PIB per Capita: %.2f reais \n", pibper1);
    printf("Superpoder: %.2f \n\n", superpoder1);
          
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

        //Cálculo da Densidade populacional carta2 (Utilizando conversão explicita e proteção Contra divisão por Zero) - Nível Aventureiro - Tema 2
    
        if (area2 != 0.0f) {
            densipop2 =(float) populacao2 / area2;
        }   else {
            densipop2 = 0.0f; //Define um valor padrão seguro
            printf("Atenção: Área da Carta 2 é zero. Densidade populacional definida como 0.\n\n");
        }

    
        //Cálculo Pib per Capita carta2 (Utilizando conversão explicita e proteção Contra divisão por Zero) - Nível Aventureiro - Tema 2
    
        if (populacao2 != 0.0f) {
            pibper2 = pib2 * 1000000000.0 / (float) populacao2;
        }   else {
            pibper2 = 0.0f; //Define um valor padrão seguro
            printf("Atenção: População da carta 2 é zero. Pib per Capita definido como 0\n\n");        
        } 


        //Cálculo inverso_densidade2 - Superpoder Carta1 - Nível Mestre  - Tema 2
        float inverso_densidade2 = 0.0f;
        if (densipop2 != 0.0f) {
            inverso_densidade2 = 1.0f / densipop2;}
            else {
            //Pode-se definir um valor padrão para o inverso da densidade quando a densidade é zero,
            //ou simplesmente manter 0.0f, dependendo da regra do jogo.
            //Ex: inverso_densidade2 = valor_muito_alto_ou_0;}
        }  
    

    //Cálculo Superpoder das Carta2 - Nível Mestre  - Tema 2
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
    printf("PIB per Capita: %.2f reais\n", pibper2); 
    printf("Superpoder: %.2f \n\n", superpoder2);
        
                
    //Definição do Atributo - Comparação Carta Vencedora - Desafio Nível Novato - Tema 3 
    printf("Comparação de Cartas (Atributo: Densidade Populacional):\n\n");
    printf("Carta1 - %s (%s): %.2f \n", nomecid1, estado1, densipop1);
    printf("Carta2 - %s (%s): %.2f \n", nomecid2, estado2, densipop2);
        if(densipop1 < densipop2){
        printf("Resultado: Carta1 (%s) venceu! \n\n", nomecid1);    
    }   else { 
        printf("Resultado: Carta2 (%s) venceu! \n\n", nomecid2);
    } 
      
    //Comparação Utilizando - Switch Case - Desafio Nível Aventureiro - Tema 3 

    //Menu - Definição Escolha dos Atributos
    printf("Carta1: %s e Carta2: %s *** \n", nomecid1, nomecid2);
    printf("Escolha um Atributo para comparar as Cartas\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Populacional\n");
    scanf("%d", &escolhaJogador);

    
    switch (escolhaJogador)  
    {
    case 1: 
        printf("Nome das cidades (Carta1): %s  (Carta2): %s \n", nomecid1, nomecid2);
        printf("Atributo: População\n");
        printf("Carta1 - %lu\n", populacao1);
        printf("Carta2 - %lu\n", populacao2);
        if(populacao1 > populacao2) {
        printf("Resultado: Carta1 (%s) venceu! \n\n", nomecid1);    
        } else if (populacao1 < populacao2) {
        printf("Resultado: Carta2 (%s) venceu! \n\n", nomecid2);
        } else {
        printf("Resultado: Empate entre %s e %s! \n\n", nomecid1, nomecid2);
        }
        break;
    case 2:
        printf("Nome das cidades (Carta1): %s  (Carta2): %s \n", nomecid1, nomecid2);
        printf("Atributo: Área\n");
        printf("Carta1 - %.2f\n", area1);
        printf("Carta2 - %.2f\n", area2);
        if(area1 > area2) {
        printf("Resultado: Carta1 (%s) venceu! \n\n", nomecid1);    
        } else if (area1 < area2) {   
        printf("Resultado: Carta2 (%s) venceu! \n\n", nomecid2);
        } else {   
        printf("Resultado: Empate entre %s e %s! \n\n", nomecid1, nomecid2);
        }
        break;
    case 3:
        printf("Nome das cidades (Carta1): %s  (Carta2): %s \n", nomecid1, nomecid2);
        printf("Atributo: PIB\n");
        printf("Carta1 - %.2f\n", pib1);
        printf("Carta2 - %.2f\n", pib2);
        if(pib1 > pib2){
        printf("Resultado: Carta1 (%s) venceu! \n\n", nomecid1);    
        } else if (pib1 < pib2) { 
        printf("Resultado: Carta2 (%s) venceu! \n\n", nomecid2);
        } else {
        printf("Resultado: Empate entre %s e %s! \n\n", nomecid1, nomecid2);
        }
        break;
    case 4:
        printf("Nome das cidades (Carta1): %s  (Carta2): %s \n", nomecid1, nomecid2);
        printf("Atributo: Número de pontos turísticos\n");
        printf("Carta1 - %d\n", ponto1);
        printf("Carta2 - %d\n", ponto2);
        if(ponto1 > ponto2){
        printf("Resultado: Carta1 (%s) venceu! \n\n", nomecid1);    
        } else if (ponto1 < ponto2) { 
        printf("Resultado: Carta2 (%s) venceu! \n\n", nomecid2);
        } else {
        printf("Resultado: Empate entre %s e %s! \n\n", nomecid1, nomecid2);
        }
        break;
    case 5:
        printf("Nome das cidades (Carta1): %s  (Carta2): %s \n", nomecid1, nomecid2);
        printf("Atributo: Densidade populacional\n");
        printf("Carta1 - %.2f\n", densipop1);
        printf("Carta2 - %.2f\n", densipop2);
        if(densipop1 < densipop2){
        printf("Resultado: Carta1 (%s) venceu! \n\n", nomecid1);    
        } else if (densipop1 > densipop2) { 
        printf("Resultado: Carta2 (%s) venceu! \n\n", nomecid2);
        } else {
        printf("Resultado: Empate entre %s e %s! \n\n", nomecid1, nomecid2);
        }
        break;
    default:
        printf("Opção invalida\n");
        break;
    }
    
    //DESAFIO - TEMA 3 - NÍVEL MESTRE

    // Definição valores verdadeiro e falso
    populacao1 = 1;
    populacao2 = 0;
    area1 = 1;
    area2 = 0;
    pib1 = 1;
    pib2 = 0;
    ponto1 = 1;
    ponto2 = 0;
    densipop1 = 1;
    densipop2 = 0;
    pibper1 = 1;
    pibper2 = 0;
    superpoder1 = 1;
    superpoder2 = 0;

    //Menu Início do jogo - Para Primeiro Atributo
    printf("Menu - Atributo - Jogo da Comparação\n");
    printf("Escolha o primeiro attributo.\n");
    printf("A. População\n");
    printf("B. Área\n");
    printf("C. PIB\n");
    printf("D. Número de Pontos Turísticos\n");
    printf("E. Densidade Populacional\n");
    printf("F. PIB Per cápita)\n");

    //Definição - Primeiro Atributo
    printf("Escolha a comparação:\n");
    scanf(" %c", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 'A':
    case 'a':
         printf("Você escolheu atributo População\n");
         printf("Escolha o segundo atributo\n");
         resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 'B':
    case 'b':
         printf("Você escolheu atributo Área\n");
         printf("Escolha o segundo atributo\n");
         resultado1 = area1 > area2 ? 1 : 0;
         break;
    case 'C':
    case 'c':
         printf("Você escolheu atributo PIB\n");
         printf("Escolha o segundo atributo\n");
         resultado1 = pib1 > pib2 ? 1 : 0;
         break;
    case 'D':
    case 'd':
         printf("Você escolheu atributo Número de Pontos Turísticos\n");
         printf("Escolha o segundo atributo\n");
         resultado1 = ponto1 > ponto2 ? 1 : 0;
         break;
    case 'E':
    case 'e':
         printf("Você escolheu atributo Densidade Populacional\n");
         printf("Escolha o segundo atributo\n");
         resultado1 = densipop1 < densipop2 ? 1 : 0;
         break;
    case 'F':
    case 'f':
         printf("Voce escolheu atributo PIB Per Cápita\n\n");
         printf("Escolha o segundo atributo\n\n");
         resultado1 = pibper1 > pibper2 ? 1 : 0;   
    break;
    default:
        printf("Opção de jogo invalida\n");
        break;
    }

    //Menu Início do jogo - Para Segundo Atributo
    printf("Escolha o segundo atributo.\n");
    printf("Lembresse!! Não pode ser o mesmo atributo do primeiro.\n");
    printf("A. População\n");
    printf("B. Área\n");
    printf("C. PIB\n");
    printf("D. Número de Pontos Turísticos\n");
    printf("E. Densidade Populacional\n");
    printf("F. PIB Per cápita)\n");

    printf("Escolha a comparação:\n");
    scanf(" %c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo!\n");
    }   else {
    switch (segundoAtributo)
    {
    case 'A':
    case 'a':
         printf("Você escolheu atributo População\n");
         resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 'B':
    case 'b':
         printf("Você escolheu atributo Área\n");
         resultado2 = area1 > area2 ? 1 : 0;
         break;
    case 'C':
    case 'c':
         printf("Você escolheu atributo PIB\n");
         resultado2 = pib1 > pib2 ? 1 : 0;
         break;
    case 'D':
    case 'd':
         printf("Você escolheu atributo Número de Pontos Turísticos\n");
         resultado2 = ponto1 > ponto2 ? 1 : 0;
         break;
    case 'E':
    case 'e':
         printf("Você escolheu atributo Densidade Populacional\n");
         resultado2 = densipop1 < densipop2 ? 1 : 0;
         break;
    case 'F':
    case 'f':
         printf("Voce escolheu atributo PIB Per Cápita\n");
         resultado2 = pibper1 > pibper2 ? 1 : 0;  
    break; 
    default:
        printf("Opção de jogo invalida\n");
        break;
    }
    }
    
//Lógica do jogo comparação atributos
    if (resultado1 && resultado2)
    {
        printf("Que alegria, vocé é o grande vencedor! \n");
    } else if (resultado1 != resultado2) {
        printf("O jogo empatou! \n");
    } else {
        printf("Que pena, você perdeu!\n");
    }   

//Soma dos atributos escolhidos
    if (resultadofinal = ((populacao1 + area1)) || (populacao2 + area2))
    {
        printf("Você ganhou o jogo\n");
    }



/*Cálculo Superpoder das Carta1 - Nível Mestre  
    float superpoder1 = (float) populacao1 +  area1 + pib1 + (float) ponto1 + inverso_densidade1 + pibper1; 
    printf("Superpoder Carta1 = %.2f \n", superpoder1);
*/
    






    return 0;
}
