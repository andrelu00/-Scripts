#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    float n1,n2;
    char op;

    printf("Digite dois numeros:\n");

    printf("Primeiro Numero: ");
    scanf("%f", &n1);

    printf("Segundo Numero: ");
    scanf("%f", &n2);

    printf("Oque voce deseja fazer com eles?(Use maiuscula) \nM - Para media \nS - Diferenca do maior pelo menor\nP - Produto dos numeros\nD - Divisão do primeiro pelo segundo\n");
    scanf(" %c", &op);
    op = toupper(op);


    switch(op)
    {
        case 'M':
            printf("A media dos dois numeros eh: %.2f", (n1+n2)/2);
            break;

        case 'S':
            if(n1>n2){
            printf("A Diferenca dos dois numeros eh: %.2f", (n1-n2));
            break;
            }

            if(n1<n2){
            printf("A Diferenca dos dois numeros eh: %.2f", (n2-n1));
            break;
            }

        case 'P':
            printf("O Produto dos numeros eh: %.2f", (n1*n2));
            break;

        case 'D':
            printf("A divisão entre o primeiro e o segundo eh: %.2f", (n1/n2));
            break;

        default:
            printf("Operação Invalida");
    }
    return 0;
}
