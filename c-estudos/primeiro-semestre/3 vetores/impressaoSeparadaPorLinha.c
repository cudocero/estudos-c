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

    printf("Sua frase será impressa com uma palavra por linha, digite alguma:");
    gets(nome);

    for(i = 0; i<strlen(nome); i++)
    {
        printf("%c", nome[i]);
        if(nome[i] == ' ')
            printf("\n");
    }
    return 0;
}
