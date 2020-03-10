#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variáveis
    float area,altura,base;

    printf("Calcular area de um triangulo \n");

    printf("Base: ");
    scanf("%f", &base);

    printf("Altura: ");
    scanf("%f", &altura);

    area=(base*altura)/2;

    printf("A area eh: %.2f", area);


}
