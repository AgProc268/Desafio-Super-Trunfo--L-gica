#include <stdio.h>

int main() {
    // Cadastro da Carta 1
    char estado1[20] = "PIAUI";
    char codigo1[20] = "A01";
    char cidade1[30] = "Teresina";
    int habitantes1 = 866300;
    float area1 = 1391;
    float pib1 = 23895;
    int pontosturisticos1 = 7;
    float densidade1 = (float)habitantes1 / area1;
    float percapita1 = pib1 / (float)habitantes1 * 1000000;

    // Cadastro da Carta 2
    char estado2[20] = "MARANHÃO";
    char codigo2[20] = "B01";
    char cidade2[30] = "São Luís";
    int habitantes2 = 1038000;
    float area2 = 58306;
    float pib2 = 139789;
    int pontosturisticos2 = 15;
    float densidade2 = (float)habitantes2 / area2;
    float percapita2 = pib2 / (float)habitantes2 * 1000000;

    float superpoder1 = habitantes1 + area1 + pib1 + pontosturisticos1 + percapita1 + (1 / densidade1);
    float superpoder2 = habitantes2 + area2 + pib2 + pontosturisticos2 + percapita2 + (1 / densidade2);

    int opcao;

    do {
        // Mostrar Cartas
        printf("\n=== CARTA 1 ===\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d habitantes\n", habitantes1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Pontos turísticos: %d\n", pontosturisticos1);
        printf("Densidade populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f\n", percapita1);
        printf("Superpoder: %.2f pontos\n", superpoder1);

        printf("\n=== CARTA 2 ===\n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d habitantes\n", habitantes2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Pontos turísticos: %d\n", pontosturisticos2);
        printf("Densidade populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f\n", percapita2);
        printf("Superpoder: %.2f pontos\n", superpoder2);

        // Menu
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
                printf("População:\n");
                printf("%s: %d\n", cidade1, habitantes1);
                printf("%s: %d\n", cidade2, habitantes2);
                if (habitantes1 > habitantes2) printf("Carta 1 venceu!\n");
                else if (habitantes1 < habitantes2) printf("Carta 2 venceu!\n");
                else printf("Empate!\n");
                break;

            case 3:
                printf("Área:\n");
                printf("%s: %.2f km²\n", cidade1, area1);
                printf("%s: %.2f km²\n", cidade2, area2);
                if (area1 > area2) printf("Carta 1 venceu!\n");
                else if (area1 < area2) printf("Carta 2 venceu!\n");
                else printf("Empate!\n");
                break;

            case 4:
                printf("PIB:\n");
                printf("%s: %.2f bilhões\n", cidade1, pib1);
                printf("%s: %.2f bilhões\n", cidade2, pib2);
                if (pib1 > pib2) printf("Carta 1 venceu!\n");
                else if (pib1 < pib2) printf("Carta 2 venceu!\n");
                else printf("Empate!\n");
                break;

            case 5:
                printf("Pontos Turísticos:\n");
                printf("%s: %d\n", cidade1, pontosturisticos1);
                printf("%s: %d\n", cidade2, pontosturisticos2);
                if (pontosturisticos1 > pontosturisticos2) printf("Carta 1 venceu!\n");
                else if (pontosturisticos1 < pontosturisticos2) printf("Carta 2 venceu!\n");
                else printf("Empate!\n");
                break;

            case 6:
                printf("Densidade Populacional:\n");
                printf("%s: %.2f hab/km²\n", cidade1, densidade1);
                printf("%s: %.2f hab/km²\n", cidade2, densidade2);
                if (densidade1 < densidade2) printf("Carta 1 venceu (menor densidade)!\n");
                else if (densidade1 > densidade2) printf("Carta 2 venceu (menor densidade)!\n");
                else printf("Empate!\n");
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
