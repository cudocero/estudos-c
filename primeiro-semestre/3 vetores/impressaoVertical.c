#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 99

int main()
{
    setlocale(LC_ALL, "");

    char nome[MAX];
    int i;

    printf("Digite qualquer coisa e será impresso verticalmente:");
    gets(nome);

    for(i = 0; i<strlen(nome); i++)
    {
        printf("%c\n", nome[i]);
    }
    return 0;
}
