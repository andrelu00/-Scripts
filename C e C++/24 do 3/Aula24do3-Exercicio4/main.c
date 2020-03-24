#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    float sal, aumentoA, aumentoB, aumentoC;
    char plano;

    aumentoA=0.1;
    aumentoB=0.15;
    aumentoC=0.2;

    printf("Qual seu salario atual?\n");
    scanf("%f", &sal);

    printf("Qual seu plano de trabalho?(A, B ou C)\n");
    scanf(" %c", &plano);
    plano = toupper(plano);

    switch(plano)
        {
            case 'A':
                printf("O seu aumento eh: R$ %.2f", sal+(sal*aumentoA));
                break;

            case 'B':
                printf("O seu aumento eh: R$ %.2f", sal+(sal*aumentoB));
                break;

            case 'C':
                printf("O seu aumento eh: R$ %.2f", sal+(sal*aumentoC));
                break;

            default:
                printf("Plano Invalido");

        }//Fim do switch

    return 0;
}
