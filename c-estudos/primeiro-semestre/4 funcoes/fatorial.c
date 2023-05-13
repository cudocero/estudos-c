#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int fatorial(int numiro);

int main()
{
    setlocale(LC_ALL, "");

    int numero;

    printf("\nCalcularei o fatorial de qualquer número: ");
    scanf("%d", &numero);

    printf("\nResultado: %d",fatorial(numero));
    return 0;
}

int fatorial(int numero)
{
    int i, acumulo = 1;

    for(i =1; i<=numero; i++)
    {
        acumulo = acumulo * i;
    }

    return acumulo;
}
