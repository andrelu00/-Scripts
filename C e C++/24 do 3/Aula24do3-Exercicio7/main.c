#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int numSorteado;

    numSorteado = rand() %100 + 1;
    printf("Numeros aleatorios\n");

    if(numSorteado >= 10 && numSorteado <=30)
        {
            printf("O numero pertence ao intervalo entre 10 e 30\n");
            printf("%i", numSorteado);
        }
    else if(numSorteado == 50)
        {
            printf("O numero eh igual a 50\n");
            printf("%i", numSorteado);
        }
    else if (numSorteado >70)
        {
            printf("O numero eh maior que 70\n");
            printf("%i", numSorteado);
        }
    else
        {
            printf("O numero não pertence a nenhum intervalo\n");
            printf("%i", numSorteado);
        }


    return 0;
}
