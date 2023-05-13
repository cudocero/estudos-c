#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int ano;

    printf("Digite o ano:\n");
    scanf("%d", &ano);

    if(ano%400 == 0 || ano%4 == 0 && ano%100 != 0)
    {
        printf("Esse ano é bissexto.");
    }
    else
    {
        printf("Esse ano não é bissexto.");
    }
}
