#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int calculapotencia(int base, int expoente);

int main()
{
    setlocale(LC_ALL,"");

    int base, expoente;

    printf("qual numiro ");
    scanf("%d", &base);

    printf("\nelevado a guanto ");
    scanf("%d", &expoente);

    printf("\nResultado: %d", calculapotencia(base, expoente));
    return 0;
}

int calculapotencia(int base2, int expoente2)
{
    int resultado;
   resultado = pow(base2, expoente2);

    return resultado;
}
