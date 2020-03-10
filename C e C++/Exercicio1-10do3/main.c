#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variáveis
    char nome[50], sexo;
    int idade;

    //inputs
    printf("Digite seu nome: \n");
    gets(nome);

    printf("Digite seu sexo(m/f): \n");
    scanf(" %c",&sexo);

    printf("Digite sua idade: \n");
    scanf("%i", &idade);

    //outputs

    printf("Nome: %s \n", nome);
    printf("Sexo:  %c \n", sexo);
    printf("Idade: %i \n", idade);





}
