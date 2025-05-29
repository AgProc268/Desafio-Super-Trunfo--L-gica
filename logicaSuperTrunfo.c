#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1[20] = "PIAUI";
    char cidade1[30] = "Teresina";
    int habitantes1 = 866300;
    float area1 = 1391;
    float pib1 = 23895;
    int pontosTuristicos1 = 7;
    float densidade1 = (float)habitantes1 / area1;
    float percapita1 = pib1 / (float)habitantes1 * 1000000;

    // Dados da Carta 2
    char estado2[20] = "MARANHÃO";
    char cidade2[30] = "São Luís";
    int habitantes2 = 1038000;
    float area2 = 58306;
    float pib2 = 139789;
    int pontosTuristicos2 = 15;
    float densidade2 = (float)habitantes2 / area2;
    float percapita2 = pib2 / (float)habitantes2 * 1000000;

    int opcao;

    do {
        printf("\n=== MENU DE COMPARAÇÃO ===\n");
        printf("Escolha o atributo para comparar:\n");
        printf("1. Nome das Cidades\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Pontos turísticos\n");
        printf("6. Densidade Populacional\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Cidades: %s (%s) vs %s (%s)\n", cidade1, estado1, cidade2, estado2);
                break;

            case 2:
                printf("\nPopulação:\n%s: %d\n%s: %d\n", cidade1, habitantes1, cidade2, habitantes2);
                if (habitantes1 > habitantes2) printf("→ Carta 1 venceu!\n");
                else if (habitantes1 < habitantes2) printf("→ Carta 2 venceu!\n");
                else printf("→ Empate!\n");
                break;

            case 3:
                printf("\nÁrea:\n%s: %.2f km²\n%s: %.2f km²\n", cidade1, area1, cidade2, area2);
                if (area1 > area2) printf("→ Carta 1 venceu!\n");
                else if (area1 < area2) printf("→ Carta 2 venceu!\n");
                else printf("→ Empate!\n");
                break;

            case 4:
                printf("\nPIB:\n%s: %.2f bilhões\n%s: %.2f bilhões\n", cidade1, pib1, cidade2, pib2);
                if (pib1 > pib2) printf("→ Carta 1 venceu!\n");
                else if (pib1 < pib2) printf("→ Carta 2 venceu!\n");
                else printf("→ Empate!\n");
                break;

            case 5:
                printf("\nPontos Turísticos:\n%s: %d\n%s: %d\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
                if (pontosTuristicos1 > pontosTuristicos2) printf("→ Carta 1 venceu!\n");
                else if (pontosTuristicos1 < pontosTuristicos2) printf("→ Carta 2 venceu!\n");
                else printf("→ Empate!\n");
                break;

            case 6:
                printf("\nDensidade Populacional:\n%s: %.2f hab/km²\n%s: %.2f hab/km²\n", cidade1, densidade1, cidade2, densidade2);
                if (densidade1 < densidade2) printf("→ Carta 1 venceu (menor densidade)!\n");
                else if (densidade1 > densidade2) printf("→ Carta 2 venceu (menor densidade)!\n");
                else printf("→ Empate!\n");
                break;

            case 0:
                printf("Saindo do jogo...\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
