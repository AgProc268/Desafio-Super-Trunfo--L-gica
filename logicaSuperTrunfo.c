#include <stdio.h>

int main(){   
   
// Cadastro da Carta 1

    char estado1[20] = "PIAUI";

    char codigo1[20] = "A01";

    char cidade1[30] = "Teresina";

    int habitantes1 = 866300;

    float area1 = 1391;

    float pib1 = 23895;

    int pontosturisticos1 = 7;

    float densidade1= (float)habitantes1/area1;

    float percapita1= pib1/(float)habitantes1 * 1000000;


// Cadastro da  Carta 2

    char estado2[20] = "MARANHÃO";

    char codigo2[20] = "B01";

    char cidade2[30] = "São Luís";

    int habitantes2 = 1038000;

    float area2 = 58306;

    float pib2 = 139789;

    int pontosturisticos2 = 15;

    float densidade2= (float)habitantes2/area2;

    float percapita2= pib2/(float)habitantes2 * 1000000;

    float superpoder1= (float)habitantes1 + area1 + pib1 + (float)pontosturisticos1 + percapita1 + (1/densidade1);
    float superpoder2= (float)habitantes2 + area2 + pib2 + (float)pontosturisticos2 + percapita2 + (1/densidade2);

    // Mostrar Cartas   

    printf("\n Carta 1 :\n");
    printf("Estado:%s \n",estado1);
    printf("Código da Carta: %s \n",codigo1);
    printf("Cidade: %s \n",cidade1);
    printf("População: %d habitantes \n",habitantes1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais \n",pib1);
    printf("Número de pontos turisticos: %d \n",pontosturisticos1);
    printf("A densidade populacional da cidade é:%.2f hab/km²\n", densidade1);
    printf("O PIB per capita da cidade é :%.2f \n",percapita1 );
    printf("O valor de super poder dessa carta está avaliado em : %.2f pontos\n", superpoder1);

    printf("\n Carta 2 :\n");
    printf("Estado:%s \n",estado2);
    printf("Código da Carta: %s \n",codigo2);
    printf("Cidade: %s \n",cidade2);
    printf("População: %d habitantes \n",habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n",pib2);
    printf("Número de pontos turisticos: %d \n",pontosturisticos2);
    printf("A densidade populacional da cidade é:%.2f hab/km²\n", densidade2);
    printf("O PIB per capita da cidade é :%.2f \n",percapita2);
    printf("O valor de super poder dessa carta está avaliado em : %.2f pontos\n", superpoder2);

    printf("Se prepare para escolher os atributos de comparação das cartas e conheecer os vencedores\n");

   int opcao ;

    printf("Escolha o atributo a ser analisado:\n");
    printf("1. Nome das Cidades\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turisticos\n");
    printf("6. Densidade Populacional\n");
    printf("0. Sair do jogo\n");
    scanf("%d", &opcao);
    }

  switch (opcao) {
    case 1:
      printf("As cidades competidores são:%s (%s) e %s (%s)\n", cidade1, estado1, cidade2, estado2);
    break;
     case 2:
      printf("A população de %s -(%s) é : %d habitantes\n", cidade1, estado1, habitantes1);
      printf("A população de  %s - (%s)é : %d habitantes\n",cidade2, estado2, habitantes2);
      if (habitantes1 > habitantes2) {
        printf("População: Carta 1 venceu!\n");
    } else if(habitantes1 < habitantes2) {
        printf("População: Carta 2 venceu!\n");
    } else {
        printf("População: As duas cartas ficaram empatadas!\n");
    }
    break;

    case 3:
      printf("A área de %s é de  %.2f km²\n", cidade1, area1);
      printf("A área de %s é de %.2f km²\n",cidade2, area2);
      if (area1 > area2) {
        printf("Tratando-se da extensão da cidade: Carta 1 venceu!\n");
    } else if (area1 < area2) {
        printf("Tratando-se da extensão da cidade: Carta 2 venceu!\n");
    } else {
        printf("Tratando-se da extensão da cidade: As duas cartas ficaram empatadas\n");
    }
    break;
      
    case 4:
      printf("O PIB de %s é de %.2f bilhões de reais\n",cidade1,pib1);
      printf("O PIB de %s é de %.2f bilhões de reais\n",cidade2,pib2);
      if (pib1 > pib2) {
        printf("Comparando os PIBs: Carta 1 venceu!\n");
    } else if (pib1 < pib2) {
        printf("Comparando os PIBs: Carta 2 venceu!\n");
    } else {
        printf("TComparando os PIBs: As duas cartas ficaram empatadas\n");
    }
    break;

      case 5:
      printf("A cidade %s tem %d pontos turísticos\n",cidade1,pontosturisticos1);
      printf("A cidade %s tem %d pontos turísticos\n",cidade2,pontosturisticos2);
      if (pontosturisticos1 > pontosturisticos2) {
        printf("Comparando a quantidade de pontos turísticos: Carta 1 venceu!\n");
    } else if (pontosturisticos1 < pontosturisticos2) {
        printf("Comparando os PIBs: Carta 2 venceu!\n");
    } else {
        printf("TComparando os PIBs: As duas cartas ficaram empatadas\n");
    }
    break;
      
      case 6:
      printf(" A densidade populacional de %s é de %.2f hab/kmZ\n",cidade1, densidade1);
      printf(" A densidade populacional de %s é de %.2f hab/kmZ\n",cidade2, densidade2);
      if (densidade1 < densidade2) {
        printf ("Por menor densidade populacional: Carta 1 venceu !\n");
    } else if (densidade1 > densidade2) {
      printf(" Por menor densidade populacional: Carta 2 venceu!\n");
    } else {
      printf("Com as densidades populacionais iguais: As duas cartas ficaram empatadas\n");
    }
    break;

    case 0:
    printf("Saindo do jogo\n");
    break;

    default:
  printf("Opção inválida. Tente novamente.\n");
  
  }
  
  return 0; 

}
