#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));

    int digitado, random = 1 + (rand() % 100), contador = 0;
    char continua = 's';

    while (continua == 's' || continua == 'S')
    {

        do
        {
            printf("\nDigite um número de 1 a 100: \n");
            scanf("%d", &digitado);
            contador ++;

            if(digitado<random)
            {
                printf("Errou, o número que está tentando acertar é maior que esse. Tente novamente.");
            }
            else if(digitado>random)
            {
                printf("Errou, o número que está tentando acertar é menor que esse. Tente novamente.");
            }
        }
        while(digitado != random);

        printf("Certo! você levou %d tentativas para acertar.\n", contador);
        printf("Deseja jogar novamente? S[SIM] ou N[N�O]");
        random = 1 + (rand() % 100);
        contador = 0;
        continua = getche();
    }
    return 0;
}
