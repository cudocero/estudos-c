#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int numero, contador = 1, resultado, acerto = 0, verificador;
    char continua = 's';

    while(continua == 's' || continua == 'S')
    {
        printf("\nDigite um número de 1 a 10 do qual se deseja testar a tabuada: ");
        scanf("%d", &numero);

        while(contador <11)
        {
            printf("\n%d x %d = ", numero, contador);
            scanf("%d", &resultado);
            verificador = numero*contador;

            if (resultado == verificador)
            {
                printf("Certo!");
                acerto = acerto +1;
            }
            else
            {
                printf("Errado, o certo era %d!", numero * contador);
            }
            contador = contador + 1;
        }

        if(acerto == 10)
        {
            printf("\n\nExcelente, acertou tudo!\n");
        }
        else if(acerto == 9)
        {
            printf("\n\nAcertou 9 de 10, estude mais um pouquinho.\n");
        }
        else if(acerto == 8)
        {
            printf("\n\nAcertou 8 de 10, estude mais.\n");
        }
        else if(acerto <= 7)
        {
            printf("\n\nAcertou 7 ou menos, estude muito mais.\n");
        }

        printf("\nSeu exercício acabou, deseja fazer novamente? \n S[SIM] ou N[NAO]: ");

        acerto = 0;
        contador = 1;
        continua = getche();
    }
    return 0;
}
