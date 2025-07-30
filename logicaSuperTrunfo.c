#include <stdio.h>
#include <string.h>

// Programa Super Trunfo - Versão com Super Poder

int main() {
    // Carta 1 - Dados
    char Estado1[20] = "Minas Gerais";
    char Codigo1[5] = "MG01";
    char NomeCidade1[50] = "Ouro Preto";
    unsigned long int Populacao1 = 74000;
    float Area1 = 1245.10;
    float Pib1 = 2350.75; // em milhões
    int PontosTuristicos1 = 18;

    // Carta 2 - Dados
    char Estado2[20] = "Santa Catarina";
    char Codigo2[5] = "SC02";
    char NomeCidade2[50] = "Blumenau";
    unsigned long int Populacao2 = 361000;
    float Area2 = 519.80;
    float Pib2 = 21100.30; // em milhões
    int PontosTuristicos2 = 12;

    // Cálculos - Densidade e PIB per capita
    float Densidade1 = (Area1 != 0) ? (float)Populacao1 / Area1 : 0.0f;
    float Densidade2 = (Area2 != 0) ? (float)Populacao2 / Area2 : 0.0f;

    float PIBperCapita1 = (Populacao1 != 0) ? (Pib1 * 1e6) / Populacao1 : 0.0f;
    float PIBperCapita2 = (Populacao2 != 0) ? (Pib2 * 1e6) / Populacao2 : 0.0f;

    float DensidadeInversa1 = (Densidade1 != 0) ? 1.0f / Densidade1 : 0.0f;
    float DensidadeInversa2 = (Densidade2 != 0) ? 1.0f / Densidade2 : 0.0f;

    // Cálculo do Super Poder
    float SuperPoder1 = Populacao1 + Area1 + Pib1 + PontosTuristicos1 + PIBperCapita1 + DensidadeInversa1;
    float SuperPoder2 = Populacao2 + Area2 + Pib2 + PontosTuristicos2 + PIBperCapita2 + DensidadeInversa2;

    // Exibição - Carta 1
    printf("\n==== Carta 1 ====\n");
    printf("Cidade: %s (%s)\n", NomeCidade1, Estado1);
    printf("Código: %s\n", Codigo1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f milhões\n", Pib1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("Densidade Populacional Inversa: %.6f\n", DensidadeInversa1);
    printf("PIB per capita: R$ %.2f\n", PIBperCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    // Exibição - Carta 2
    printf("\n==== Carta 2 ====\n");
    printf("Cidade: %s (%s)\n", NomeCidade2, Estado2);
    printf("Código: %s\n", Codigo2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f milhões\n", Pib2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("Densidade Populacional Inversa: %.6f\n", DensidadeInversa2);
    printf("PIB per capita: R$ %.2f\n", PIBperCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

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

    // Comparação de Super Poder (extra, não obrigatória)
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

    return 0;
}
