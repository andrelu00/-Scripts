#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variaveis
    float salario,novoSalario, porcAumento, aumento;


    //Entrada
    printf("Digite seu salario atual: \n");
    scanf("%f", &salario);
    //Definir aumento
    porcAumento = 25;


    aumento=porcAumento/100;

    //Calcular novo sal�rio

    novoSalario = salario * (1+ aumento);

    //Sa�da
    printf("Seu novo salario eh: %.2f", novoSalario);



}
