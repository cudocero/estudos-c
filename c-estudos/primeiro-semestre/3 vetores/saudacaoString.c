#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 99

int main()
{
    setlocale(LC_ALL,"");

    char nome[MAX], saudacao[MAX];
    int i;

    printf("\nQual é o seu nome? ");
    gets(nome);

    printf("\nDigite a saudação que deseja receber:");
    gets(saudacao);

    printf("\n%s, %s.",saudacao, nome);

    return 0;
}
