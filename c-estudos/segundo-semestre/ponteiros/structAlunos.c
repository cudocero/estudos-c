#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct estrutura_alunos
{
    char *nome;
    int turma;
    float nota;
};

typedef struct estrutura_alunos Alunos; //atribuição de nome de tipo para a struct

void set_nome(int i, Alunos *estrutura);
void set_turma(int i, Alunos *estrutura);
void set_nota(int i, Alunos *estrutura);
void print_situacao(int qt_alunos, Alunos *estrutura);

int main()
{
    setlocale(LC_ALL,"");

    int qt_alunos;
    printf("São quantos alunos?");
    scanf("%d", &qt_alunos);

    Alunos *estrutura = (Alunos *) malloc (sizeof(Alunos) * qt_alunos); //ponteiro do tipo Alunos com tamanho vetorizado alocado na memória multiplicado pela quantidade dinâmica selecionada

    for(int i=0; i<qt_alunos; i++)
    {
        set_nome(i, estrutura);
        set_turma(i, estrutura);
        set_nota(i, estrutura);
    }

    print_situacao(qt_alunos, estrutura);
}

void set_nome(int i, Alunos *estrutura)
{
    printf("\nQual o nome do aluno nº%d? ", i+1);
    (estrutura+i)->nome = (char *) malloc(sizeof(char) * 50); //"tipo string(vetor de char)" na prática em C. ponteiro com tamanho de vetor 50 alocado na memória
    fflush(stdin);
    gets((estrutura+i)->nome);
}

void set_turma(int i, Alunos *estrutura)
{
    printf("\nQual é a turma de %s? (número): ", (estrutura+i)->nome);
    scanf("%d", &((estrutura+i)->turma));
    fflush(stdin);
}

void set_nota(int i, Alunos *estrutura)
{
    printf("\nQual foi a nota de %s? ",(estrutura+i)->nome);
    scanf("%f", &((estrutura+i)->nota));
    fflush(stdin);
}

void print_situacao(int qt_alunos, Alunos *estrutura)
{
    for(int i=0; i<qt_alunos; i++)
    {
        printf("\n%dº Aluno:%s. Está na turma %d, tirou nota %.1lf.", i+1, (estrutura+i)->nome, (estrutura+i)->turma, (estrutura+i)->nota);
    }
}
