#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Declaracao de variaveis
    char estado1, estado2;
    char codigo1[20], cidade1[20], codigo2[20], cidade2[20];
    int  pontostur1, pontostur2, escolhajogador, escolhajogador2;
    int resultado1 = 0;
    int resultado2 = 0;
    unsigned long int populacao1, populacao2;
    float area1, pib1, area2, pib2, densidade1, pibcapita1, densidade2, pibcapita2, superpoder1, superpoder2; 

    //Apresentacao
    printf("Bem Vindos ao Jogo Super Trunfo\n\n");

    //Cadastro da primeira carta, recebendo dados do usuario.
    printf("Vamos começar cadastrando a sua primeira carta!\n\n");

    printf("Digite o Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Cidade: ");
    scanf(" %3s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %30[^\n]", cidade1);

    printf("Digite a População da Cidade: ");
    scanf(" %lu", &populacao1);

    printf("Digite a Área da Cidade: ");
    scanf(" %f", &area1);

    printf("Digite o PIB da Cidade: ");
    scanf(" %f", &pib1);

    printf("Digite o Número de Pontos Turisticos: ");
    scanf(" %d", &pontostur1);

    //Calculando densidade poplacionar e PIB per capita
    densidade1 = (float) populacao1/area1;
    pibcapita1 = (float) (pib1*1e9f)/populacao1;


    // Apresentando primeira carta
    printf("\n\nOtimo. Sua primeira carta é!\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pontostur1);
    

    // Apresentando Densidade populacional e pib per capita
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita:  %.2f reais\n\n", pibcapita1);


    //Cadastro da segunda carta, recebendo dados do usuario.
    printf("\nAgora vamos cadastrar a segunda carta!\n\n");

    printf("Digite o Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Cidade: ");
    scanf(" %3s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %30[^\n]", cidade2);

    printf("Digite a População da Cidade: ");
    scanf(" %lu", &populacao2);

    printf("Digite a Área da Cidade: ");
    scanf(" %f", &area2);

    printf("Digite o PIB da Cidade: ");
    scanf(" %f", &pib2);

    printf("Digite o Número de Pontos Turisticos: ");
    scanf(" %d", &pontostur2);

     //Calculando densidade populacional e PIB per capita
    densidade2 = (float) populacao2/area2;
    pibcapita2 = (float) (pib2*1e9f)/populacao2;


    // Apresentando segunda carta
    printf("\n\nOtimo. Sua segunda carta é!\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontostur2);

    // Apresentando Densidade populacional e pib per capita
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita:  %.2f reais\n\n", pibcapita2);

    //primeira escolha de atributo para comparação.
    printf ("***Para a disputa de atributo, escolha o primeiro atributo: ***\n");
    printf ("1 - População\n");
    printf ("2 - Area\n");
    printf ("3 - PIB\n");
    printf ("4 - Número de Pontos Turisticos\n");
    printf ("5 - Densidade demográfica\n\n");
    scanf (" %d", &escolhajogador);

    //segunda escolha de atributo para comparação.
    printf ("***Para a disputa de atributo, escolha o segundo atributo: ***\n");
    printf ("1 - População\n");
    printf ("2 - Area\n");
    printf ("3 - PIB\n");
    printf ("4 - Número de Pontos Turisticos\n");
    printf ("5 - Densidade demográfica\n\n");
    scanf (" %d", &escolhajogador2);
    
    if (escolhajogador2 == escolhajogador) {
     printf(" Não é possivel escolher o mesmo atributo anterior!\n");
    }

    //Estrutura de decisão comparando as cartas
    printf ("...Vamos ao Resultado...\n\n");

    
    printf ("Disputa entre : %s X %s\n\n", cidade1, cidade2);
     switch (escolhajogador) {         
     case 1:
          printf ("Sua escolha foi: População\n");
          printf ("Os valores são: %lu X %lu\n", populacao1, populacao2);
          if (populacao1 == populacao2) {
          printf ("O resultado é: Empate");
          } else if (populacao1 > populacao2) {
          printf ("O resultado é: %s venceu!", cidade1);
          resultado1=1;
          } else { 
          printf ("O resultado é: %s venceu!", cidade2);
          resultado2=1; 
          } 
     break;
     case 2:
          printf ("Sua escolha foi: Área\n");
          printf ("Os valores são: %.2f X %.2f\n", area1, area2);
          if (area1 == area2) {
          printf ("O resultado é: Empate");
          } else if (area1 > area2) {
          printf ("O resultado é: %s venceu!", cidade1);
          resultado1=1;
          } else { 
          printf ("O resultado é: %s venceu!", cidade2);
          resultado2=1; 
          } 
     break;
     case 3:
          printf ("Sua escolha foi: PIB\n");
          printf ("Os valores são: %.2f X %.2f\n", pib1, pib2);
          if (pib1 == pib2) {
          printf ("O resultado é: Empate");
          } else if (pib1 > pib2) {
          printf ("O resultado é: %s venceu!", cidade1);
          resultado1=1;
          } else { 
          printf ("O resultado é: %s venceu!", cidade2);
          resultado2=1; 
          } 
     break;
     case 4:
          printf ("Sua escolha foi: Número de Pontos Turisticos\n");
          printf ("Os valores são: %d X %d\n", pontostur1 , pontostur2);
          if (pontostur1 == pontostur2) {
          printf ("O resultado é: Empate");
          } else if (pontostur1 > pontostur2) {
          printf ("O resultado é: %s venceu!", cidade1);
          resultado1=1;
          } else { 
          printf ("O resultado é: %s venceu!", cidade2);
          resultado2=1; 
          } 
     break;
     case 5:
          printf ("Sua escolha foi: Densidade demográfica\n");
          printf ("Os valores são: %.2f X %.2f\n", densidade1, densidade2);
          if (densidade1 == densidade2) {
          printf ("O resultado é: Empate");
          } else if (densidade1 > densidade2){
          printf ("O resultado é: %s venceu!", cidade1);
          resultado1=1;
          } else { 
          printf ("O resultado é: %s venceu!", cidade2);
          resultado2=1; 
          } 
     break;
     default:
          printf ("Opção invalida\n\n");
     }
      switch (escolhajogador2) {         
     case 1:
          printf ("\nSua escolha foi: População\n");
          printf ("Os valores são: %lu X %lu\n", populacao1, populacao2);
          if (populacao1 == populacao2) {
          printf ("O resultado é: Empate");
          } else if (populacao1 > populacao2) {
          printf ("O resultado é: %s venceu!", cidade1);
          resultado1++;
          } else { 
          printf ("O resultado é: %s venceu!", cidade2);
          resultado2++; 
          } 
     break;
     case 2:
          printf ("\nSua escolha foi: Área\n");
          printf ("Os valores são: %.2f X %.2f\n", area1, area2);
          if (area1 == area2) {
          printf ("O resultado é: Empate");
          } else if (area1 > area2) {
          printf ("O resultado é: %s venceu!", cidade1);
          resultado1++;
          } else { 
          printf ("O resultado é: %s venceu!", cidade2);
          resultado2++; 
          } 
     break;
     case 3:
          printf ("\nSua escolha foi: PIB\n");
          printf ("Os valores são: %.2f X %.2f\n", pib1, pib2);
          if (pib1 == pib2) {
          printf ("O resultado é: Empate");
          } else if (pib1 > pib2) {
          printf ("O resultado é: %s venceu!", cidade1);
          resultado1++;
          } else { 
          printf ("O resultado é: %s venceu!", cidade2);
          resultado2++; 
          } 
     break;
     case 4:
          printf ("\nSua escolha foi: Número de Pontos Turisticos\n");
          printf ("Os valores são: %d X %d\n", pontostur1 , pontostur2);
          if (pontostur1 == pontostur2) {
          printf ("O resultado é: Empate");
          } else if (pontostur1 > pontostur2) {
          printf ("O resultado é: %s venceu!", cidade1);
          resultado1++;
          } else { 
          printf ("O resultado é: %s venceu!", cidade2); 
          resultado2++;
          } 
     break;
     case 5:
          printf ("\nSua escolha foi: Densidade demográfica\n");
          printf ("Os valores são: %.2f X %.2f\n", densidade1, densidade2);
          if (densidade1 == densidade2) {
          printf ("O resultado é: Empate");
          } else if (densidade1 > densidade2){
          printf ("O resultado é: %s venceu!", cidade1);
          resultado1++;
          } else { 
          printf ("O resultado é: %s venceu!", cidade2);
          resultado2++; 
          } 
     break;
     default:
          printf ("Opção invalida\n\n");
     }
     if (resultado1 == resultado2) {
     printf("\n\nResultado final: Empate!!!!!\n");
     } else if (resultado1 > resultado2) {
     printf("\n\nResultado final: %s venceu!\n", cidade1);
     } else {
     printf("\n\nResultado final: %s venceu!\n", cidade2);   
     } 
     printf(" %d - %d", resultado1, resultado2);      
          

 
     printf("\n\n\nObrigado por utilizar o Super Trunfo!\n\n");

    return 0;
}

    

   