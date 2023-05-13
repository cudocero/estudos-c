#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int nota, qt_alunos = 0, contador = 0, numero_do_aluno = 0;
    float media = 0;

    printf("Quantos alunos serão? ");
    scanf("%d", &qt_alunos);

    while(contador < qt_alunos)
    {
        numero_do_aluno = numero_do_aluno + 1;
        printf("Informe a nota do aluno %d:\n", numero_do_aluno);
        scanf("%d", &nota);
        media = media + nota;
        contador = contador + 1;
    }
    media = media/qt_alunos;
    printf("A média das notas é %.2f", media);
    return 0;
}
