#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main(){
    unsigned long int Populacao;
    float Area;
    float Pib;
    int PontosTuristicos;
    float DensidadePopulacional;
    float DensidadePopulacionalinversa;
    float PIBperCapita;

    // Declaração das variáveis para a Carta 1
    char Estado1;
    char Codigo1[4];
    char NomeCidade1[50];
    unsigned long int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;
    float DensidadePopulacional1;
    float DensidadePopulacionalinversa1;
    float PIBperCapita1;

    // Declaração das variáveis para a Carta 2
    char Estado2;
    char Codigo2[4];
    char NomeCidade2[50];
    unsigned long int Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;
    float DensidadePopulacional2;
    float DensidadePopulacionalinversa2;
    float PIBperCapita2;

    int opcao;
    char primeiroAtributo, segundoAtributo;

    //Inicio do Jogo
    printf("Bem-vindo ao Jogo Super trunfo!\n");

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &Estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", Codigo1);

    printf("Nome da cidade: ");
    scanf("%s", NomeCidade1); 

    printf("População: ");
    scanf("%lu", &Populacao1);

    printf("Área (em km²): ");
    scanf("%f", &Area1);

    printf("PIB 1: ");
    scanf("%f", &Pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    printf("\n"); // Linha em branco

    // Cálculo da Densidade Populacional (com proteção)
if (Area1 != 0.0f) {
    DensidadePopulacional1 = (float)Populacao1 / Area1;
} else {
    DensidadePopulacional1 = 0.0f;
}

// Cálculo do PIB per Capita (com proteção)
if (Populacao1 != 0UL) {
    PIBperCapita1 = (Pib1 * 1000000000.0f) / Populacao1;
} else {
    PIBperCapita1 = 0.0f;
}

// Cálculo da Densidade Populacional Inversa (com proteção)
if (DensidadePopulacional1 != 0.0f) {
    DensidadePopulacionalinversa1 = 1.0f / DensidadePopulacional1;
} else {
    DensidadePopulacionalinversa1 = 0.0f;
}

    // Leitura dos dados da Carta 2
    printf("Cadastro da Carta 2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &Estado2);

    printf("Código da carta (ex: B03): ");
    scanf("%s", Codigo2);

    printf("Nome da cidade: ");
    scanf("%s", NomeCidade2);

    printf("População: ");
    scanf("%lu", &Populacao2);

    printf("Área (em km²): ");
    scanf("%f", &Area2);

    printf("PIB 2: ");
    scanf("%f", &Pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    printf("\n\n");

    // Cálculo da Densidade Populacional (com proteção)
if (Area2 != 0.0f) {
    DensidadePopulacional2 = (float)Populacao2 / Area2;
} else {
    DensidadePopulacional2 = 0.0f;
}

// Cálculo do PIB per Capita (com proteção)
if (Populacao2 != 0UL) {
    PIBperCapita2 = (Pib2 * 1000000000.0f) / Populacao2;
} else {
    PIBperCapita2 = 0.0f;
}

// Cálculo da Densidade Populacional Inversa (com proteção)
if (DensidadePopulacional2 != 0.0f) {
    DensidadePopulacionalinversa2 = 1.0f / DensidadePopulacional2;
} else {
    DensidadePopulacionalinversa2 = 0.0f;
}
    
        // Cálculo do Super Poder
    float SuperPoder1 = Populacao1 + Area1 + Pib1 + PontosTuristicos1 + PIBperCapita1 + DensidadePopulacionalinversa1;
    float SuperPoder2 = Populacao2 + Area2 + Pib2 + PontosTuristicos2 + PIBperCapita2 + DensidadePopulacionalinversa2;

    printf("\n");

    // Exibição dos dados formatados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f\n", Pib1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("A Densidade populacional 1 é: %.2f\n", DensidadePopulacional1);
    printf("A Densidade populacional inversa 1 é: %.6f\n", DensidadePopulacionalinversa1);
    printf("O PIB per capita 1 é: %.2f\n", PIBperCapita1);

    printf("\n");

    // Exibição dos dados formatados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("A Densidade populacional 2 é: %.2f\n", DensidadePopulacional2);
    printf("A Densidade populacional inversa 2 é: %.6f\n", DensidadePopulacionalinversa2);
    printf("O PIB per capita 2 é: %.2f\n", PIBperCapita2);


    printf("\n");

    // ===== Menu interativo =====
    printf("\n=== Escolha o primeiro atributo para comparar ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%c", &primeiroAtributo);

    printf("Escolha a comparação: ");
    scanf("%c", &primeiroAtributo);

  // Comparação com switch
    switch(primeiroAtributo) {
        case '1':
        printf("Você escolheu População!\n");
            Populacao = Populacao1 > Populacao2 ? 1 : 0;
            break;

        case '2':
            printf("Você escolheu Área!\n");
            Area = Area1 > Area2 ? 1 : 0;
            break;

        case '3':
            printf("Você escolheu PIB!\n");
            Pib = Pib1 > Pib2 ? 1 : 0;
            break;

        case '4':
            printf("Você escolheu Pontos Turísticos!\n");
            PontosTuristicos = PontosTuristicos1 > PontosTuristicos2 ? 1 : 0;
            break;

        case '5':
            printf("Você escolheu Densidade Demográfica!\n");
            DensidadePopulacional = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0;
            break;

        case '6':
            printf("Você escolheu PIB Percapita!\n");
            PIBperCapita = PIBperCapita1 > PIBperCapita2 ? 1 : 0;
            break;
    }

    printf("\n=== Escolha o segundo atributo para comparar ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%c", &segundoAtributo);

     printf("Escolha a comparação: ");
    scanf("%c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo!");
    } else
    {
    switch (segundoAtributo) {
        case '1':
        printf("Você escolheu População!\n");
            Populacao = Populacao1 > Populacao2 ? 1 : 0;
            break;

        case '2':
            printf("Você escolheu Área!\n");
            Area = Area1 > Area2 ? 1 : 0;
            break;

        case '3':
            printf("Você escolheu PIB!\n");
            Pib = Pib1 > Pib2 ? 1 : 0;
            break;

        case '4':
            printf("Você escolheu Pontos Turísticos!\n");
            PontosTuristicos = PontosTuristicos1 > PontosTuristicos2 ? 1 : 0;
            break;

        case '5':
            printf("Você escolheu Densidade Demográfica!\n");
            DensidadePopulacional = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0;
            break;

        case '6':
            printf("Você escolheu PIB Percapita!\n");
            PIBperCapita = PIBperCapita1 > PIBperCapita2 ? 1 : 0;
            break;
    }
    if (primeiroAtributo && segundoAtributo)
    {
        printf("Parabéns, você venceu!\n");

    } else if (primeiroAtributo != segundoAtributo){
        printf("Empatou!\n");
    } else {
        printf("Infelizmente você perdeu!\n");
    }
    return 0;
}
}