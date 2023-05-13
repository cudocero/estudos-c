/*
entrada:
float prova1, prova 2, prova 3, prova4
int faltas

print scan informe a primera nota 4x todas as nota

print scan faltas

if (nota1 2 +++++++3 4)/4 >= 60 && faltas <= 0.25 * 72
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    float nota1, nota2, nota3, nota4;
    int faltas;

    printf("Informe a nota obtida na primeira prova\n");
    scanf("%f", &nota1);

    printf("Informe a nota obtida na segunda prova\n");
    scanf("%f", &nota2);

    printf("Informe a nota obtida na terceira prova\n");
    scanf("%f", &nota3);

    printf("Informe a nota obtida na quarta prova\n");
    scanf("%f", &nota4);

    printf("Informe o n�mero de faltas do aluno\n");
    scanf("%d", &faltas);

    if((nota1+nota2+nota3+nota4)/4 >= 60 && faltas <= 0.25*72)
    {
        printf("Aluno aprovado!");
    }
    else
    {
        printf("Aluno reprovado!");
    }
    return 0;
}
