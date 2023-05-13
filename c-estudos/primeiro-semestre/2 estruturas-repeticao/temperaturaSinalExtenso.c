#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");

    int temperatura, repetidor = 1, repetidor2 = 0;
    char continua = 's';

    do
    {
        printf("\nQual a temperatura da %dª cidade?", repetidor);
        scanf("%d", &temperatura);

        if (temperatura == 0)
        {
            printf("0");
        }
        else
        {
            while(abs(temperatura)>repetidor2)
            {
                if(temperatura>0)
                {
                    printf("+");
                }
                else
                {
                    printf("-");
                }
                repetidor2++;
            }
        }
        repetidor2 = 0;
        repetidor++;
        printf("\nDeseja continuar? s[SIM] n[NÃO]");
        continua = getche();
    }
    while(continua == 's' || continua == 'S');

    return 0;
}
