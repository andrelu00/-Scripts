#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variaveis

    int n1,n2,n3,n4,s;

    printf("Digite 4 numeros: \n");
    printf("N1 = ");
    scanf("%i", &n1);

    printf("N2 = ");
    scanf("%i", &n2);

    printf("N3 = ");
    scanf("%i", &n3);

    printf("N4 = ");
    scanf("%i", &n4);

    s=n1+n2+n3+n4;

    printf("A soma dos 4 numeros eh: %i", s);
}
