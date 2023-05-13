#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 99

int main()
{
    setlocale(LC_ALL, "");

    char senha[MAX], senhasistema[MAX] = "senhasenha";
    int i, erros = 0;

    printf("\nTente acertar a senha cadastrada no sistema: ");
    gets(senha);

    for(i = 0; i<strlen(senha); i++)
    {
        if(senha[i] != senhasistema[i])
        {
            erros++;
        }
    }
    if(erros == 0)
        {
            printf("\nAcertou.");
        }
        else if(erros != 0)
        {
            printf("\nErrou");
        }

    return 0;
}
