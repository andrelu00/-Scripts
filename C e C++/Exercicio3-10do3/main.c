#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variaveis
    float n1,n2,n3,m;

    printf("Calcular media \n");

    printf("Primeira nota: \n");
    scanf("%f", &n1);

    printf("Segunda nota: \n");
    scanf("%f", &n2);

    printf("Terceira nota: \n");
    scanf("%f", &n3);

    m=(n1+n2+n3)/3;

    printf("Media: %.1f", m);

}
