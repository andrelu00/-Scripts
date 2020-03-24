#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod, qtd;

    printf("Digite o código do produto:\n");
    scanf("%i", &cod);

    printf("Digite a quuantidade:\n");
    scanf("%i", &qtd);

    switch(cod)
   {
        case 100:
            printf("Cachorro Quente    Total = R$%.2f", (qtd * 1.2));
            break;

        case 101:
            printf("Bauru Simples      Total = R$%.2f", (qtd * 1.3));
            break;

        case 102:
            printf("Bauru com Ovo      Total = R$%.2f", (qtd * 1.5));
            break;

        case 103:
            printf("Hambúrguer         Total = R$%.2f", (qtd * 1.2));
            break;

        case 104:
            printf("Cheeseburguer      Total = R$%.2f", (qtd * 1.3));
            break;

        case 105:
            printf("Bauru com Ovo      Total = R$%.2f", (qtd * 1.0));
            break;
   }//Fim do Switch
    return 0;
}
