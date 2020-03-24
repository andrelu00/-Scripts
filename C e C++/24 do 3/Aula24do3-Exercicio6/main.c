#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char periodo;

    printf("Qual o seu periodo?(Somente a inicial)\n");
    scanf("%c", &periodo);
    periodo = toupper(periodo);

    switch(periodo)
    {
    case 'M':
        printf("BOM DIA!!");
        break;

    case 'V':
        printf("BOA TARDE!!");
        break;

    case 'N':
        printf("BOA NOITE!!");
        break;
    }//FIM DO SWITCH
    return 0;
}
