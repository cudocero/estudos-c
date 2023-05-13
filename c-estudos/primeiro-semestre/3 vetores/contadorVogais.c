#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 999

int main()
{
    setlocale(LC_ALL,"");

    char string[MAX];
    int i, vogal = 0;

    printf("\nDigite qualquer coisa: ");
    gets(string);

    for(i=0 ; string[i] != '\0'; i++)
    {
        switch(string[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'O':
        case 'o':
        case 'u':
        case 'U':
            vogal++;
            break;
        }
    }
    printf("\nHá %d vogais nesta sentença.", vogal);
    return 0;
}
