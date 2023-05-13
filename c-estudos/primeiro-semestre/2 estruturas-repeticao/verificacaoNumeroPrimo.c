#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int numero, contador = 1, duas_condicoes = 0;
    char continua = 's';

    while(continua == 's' || continua == 'S')
    {
        printf("\nDigite o número, irei dizer se é primo ou não:\n");
        scanf("%d", &numero);

        while(contador<=numero)
        {
            if(numero%contador==0)
            {
                duas_condicoes++;
            }
            contador++;
        }
        if(duas_condicoes==2)
        {
            printf("É primo.");
        }
        else
        {
            printf("Não é primo.");
        }

        contador = 1;
        duas_condicoes = 0;
        printf("\nDeseja rodar a aplicação novamente? s[SIM] n[NAO]");
        continua = getche();

    }
    return 0;
}
