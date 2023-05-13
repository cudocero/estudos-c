#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int digitado, contador = 0;

    printf("\nDigite o número e retornarei todos os seus divisores:\n");
    scanf("%d", &digitado);

    while(contador<digitado)
    {
        contador++;

        if(digitado%contador ==0)
        {
            printf("%d ", digitado/contador);
        }
    }


    return 0;
}
