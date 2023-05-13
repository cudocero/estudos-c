#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <conio.h>
int dado6();

int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));
    char continua = 's';

    while(continua == 's' || continua == 'S')
    {
        printf("\n%d", dado6());
        printf("\n\nDeseja rolar o dado de novo? s p/[SIM] n p/[NÃO]: ");
        continua = getche();
    }

}

int dado6()
{
    int aleatorio;
    aleatorio = 1+ rand() % 6;

    return aleatorio;
}
