#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anonasc,anoatual,anofut,idadeatual,idadefut;

    anoatual=2020;
    anofut=2030;

    printf("IDADES \n");

    printf("Digite seu ano de nascimento: \n");
    scanf("%i" &anonasc);

    idadeatual = anoatual - anonasc;
    printf("Sua idade atualmente: %i \n", idadeatual);

    idadefut=anofut-anonasc;
    printf("Sua idade em 2030: %i \n", idadefut);

}
