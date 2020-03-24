#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int num;

    printf("Digite um numero de 1 a 7!\n");
    scanf("%i", &num);

    switch(num)
    {
        case 1:
            printf("Domingo\n");
            break;

        case 2:
            printf("Segunda\n");
            break;

        case 3:
            printf("Terca\n");
            break;

        case 4:
            printf("Quarta\n");
            break;

        case 5:
            printf("Quinta\n");
            break;

        case 6:
            printf("Sexta\n");
            break;

        case 7:
            printf("Sabado\n");
            break;

        default:
            printf("Dia Invalido\n");
    }//fim do switch

    return 0;
}
