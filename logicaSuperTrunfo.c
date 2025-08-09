#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    #include <stdio.h>
#include <string.h>

#include <stdio.h>

int main() {
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

    //Calcula do Super Poder

    float SuperPoderCarta1 = Populacao1 + Area1 + Pib1 + PontosTuristicos1 + PIBperCapita1 + DensidadePopulacionalinversa1;

    printf(" O Super Poder da Carta 1 é: %.4f\n", SuperPoderCarta1);

    float SuperPoderCarta2 = Populacao2 + Area2 + Pib2 + PontosTuristicos2 + PIBperCapita2 + DensidadePopulacionalinversa2;

    printf(" O Super Poder da Carta 2 é: %.4f\n", SuperPoderCarta2);

    printf("\n");

    //Comparativo das cartas
    //resultado 0 = Falso
    //resultado 1 = verdadeiro

    printf("A Populacao 1 é > do que a Populacao 2: %d\n", Populacao1 > Populacao2);
    printf("A Area 1 é > do que a Area 2: %d\n", Area1 > Area2);
    printf("O PIB 1 é > do que o PIB 2: %d\n", Pib1 > Pib2);
    printf("Os Pontos turisticos 1 é > que os Pontos turisticos 2: %d\n", PontosTuristicos1 > PontosTuristicos2);
    printf("A Densidade Populacional 1 é < do que a Densidade Populacional 2: %d\n", DensidadePopulacional1 < DensidadePopulacional2);
    printf("O PIB Per Capita 1 é > do que o PIB Per Capita 2: %d\n", PIBperCapita1 > PIBperCapita2); 

    // Comparação por atributo (PIB per capita)
    printf("\n==== Comparação de cartas (Atributo: PIB per capita) ====\n");
    printf("Carta 1 - %s: R$ %.2f\n", NomeCidade1, PIBperCapita1);
    printf("Carta 2 - %s: R$ %.2f\n", NomeCidade2, PIBperCapita2);

    if (PIBperCapita1 > PIBperCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeCidade1);
    } else if (PIBperCapita2 > PIBperCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", NomeCidade2);
    } else {
        printf("Resultado: Empate! Ambas têm o mesmo PIB per capita.\n");
    }

    // Comparação de Super Poder 
    printf("\n==== Comparação de Super Poder ====\n");
    printf("Super Poder 1 ( %s ): %.2f\n", NomeCidade1, SuperPoder1);
    printf("Super Poder 2 ( %s ): %.2f\n", NomeCidade2, SuperPoder2);

    if (SuperPoder1 > SuperPoder2) {
        printf("Super Poder Vencedor: Carta 1 (%s)\n", NomeCidade1);
    } else if (SuperPoder2 > SuperPoder1) {
        printf("Super Poder Vencedor: Carta 2 (%s)\n", NomeCidade2);
    } else {
        printf("Empate no Super Poder!\n");
    }

    // ===== Menu interativo =====
    printf("\n=== Escolha o atributo para comparar ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);

  // Comparação com switch
    switch(opcao) {
        case 1:
            printf("\nPopulação:\n%s: %lu\n%s: %lu\n", NomeCidade1, Populacao1, NomeCidade2, Populacao2);
            if (Populacao1 > Populacao2) printf("Vencedor: %s\n", NomeCidade1);
            else if (Populacao2 > Populacao1) printf("Vencedor: %s\n", NomeCidade2);
            else printf("Empate!\n");
            break;

        case 2:
            printf("\nÁrea:\n%s: %.2f km²\n%s: %.2f km²\n", NomeCidade1, Area1, NomeCidade2, Area2);
            if (Area1 > Area2) printf("Vencedor: %s\n", NomeCidade1);
            else if (Area2 > Area1) printf("Vencedor: %s\n", NomeCidade2);
            else printf("Empate!\n");
            break;

        case 3:
            printf("\nPIB:\n%s: %.2f milhões\n%s: %.2f milhões\n", NomeCidade1, Pib1, NomeCidade2, Pib2);
            if (Pib1 > Pib2) printf("Vencedor: %s\n", NomeCidade1);
            else if (Pib2 > Pib1) printf("Vencedor: %s\n", NomeCidade2);
            else printf("Empate!\n");
            break;

        case 4:
            printf("\nPontos turísticos:\n%s: %d\n%s: %d\n", NomeCidade1, PontosTuristicos1, NomeCidade2, PontosTuristicos2);
            if (PontosTuristicos1 > PontosTuristicos2) printf("Vencedor: %s\n", NomeCidade1);
            else if (PontosTuristicos2 > PontosTuristicos1) printf("Vencedor: %s\n", NomeCidade2);
            else printf("Empate!\n");
            break;

        case 5:
            printf("\nDensidade demográfica:\n%s: %.2f hab/km²\n%s: %.2f hab/km²\n", NomeCidade1, DensidadePopulacional1, NomeCidade2, DensidadePopulacional2);
            if (DensidadePopulacional1 < DensidadePopulacional2) printf("Vencedor: %s\n", NomeCidade1);
            else if (DensidadePopulacional2 < DensidadePopulacional1) printf("Vencedor: %s\n", NomeCidade2);
            else printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
