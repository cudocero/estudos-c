#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 999
int main()
{
    setlocale(LC_ALL, "");

    char string[MAX];
    int i, ponto = 0;

    printf("\nDigite algo e será impresso reversamente:");
    gets(string);

    for(i = 0; string[i] != '\0'; i++)
    {
        ponto++;
    }

    for(i= ponto; i>=0 ; i--)
    {
        printf("%c", string[i]);
    }

    return 0;
}
