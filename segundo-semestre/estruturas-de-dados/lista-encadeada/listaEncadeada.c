#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct estruturra
{
    int matricula;
    struct estruturra *prox;
};

typedef struct estruturra Aluno;

Aluno *insere_inicio(Aluno *cabeca_lista, int *contador);
void *insere_final(Aluno *cabeca_lista, int *contador);
void printa_lista(Aluno *cabeca_lista, int *contador);
void exclui_no(Aluno *cabeca_lista, int *contador, int target);

int main()
{
    setlocale(LC_ALL, "");
    Aluno *cabeca_lista = NULL;
    int *contador = (int*) malloc(sizeof(int));
    *contador = 0;
    int continua = 1;
    int target;

    while (continua == 1)
    {
        int controle;

        printf("\nDigite 1 para inserir no inicio da lista\nDigite 2 para inserir no final da lista\nDigite 3 para printar todos os elementos da lista\nDigite 4 para excluir um elemento: ");
        scanf("%d", &controle);

        if(controle==1)
        {
            cabeca_lista=insere_inicio(cabeca_lista, contador);
        }
        if(controle==2)
        {
            insere_final(cabeca_lista, contador);
        }
        if(controle ==3)
        {
            printa_lista(cabeca_lista, contador);
        }
        if(controle ==4)
        {
            printf("\nQual nó? ");
            scanf("%d", &target);
            exclui_no(cabeca_lista, contador, target);
        }

        printf("\nDeseja fazer outra operação? 1 = Sim, x = N�o: ");
        scanf("%d", &continua);

    }
    printf("\nPrograma finalizado.");
}

Aluno *insere_inicio(Aluno *cabeca_lista, int *contador)
{
    Aluno *novo_no;
    novo_no = (Aluno*) malloc(sizeof(Aluno));

    printf("\nQual o número de matrícula do aluno?");
    scanf("%d", &(novo_no->matricula));

    *contador++;

    novo_no->prox = cabeca_lista;

    return novo_no;
}

void *insere_final(Aluno *cabeca_lista, int *contador)
{
    Aluno *novo_no;
    novo_no = (Aluno*) malloc(sizeof(Aluno));
    Aluno *aux;
    aux = (Aluno*) malloc(sizeof(Aluno));

    printf("\nQual o número de matrícula do aluno?");
    scanf("%d", &(novo_no->matricula));

    if(cabeca_lista == NULL)
    {
        cabeca_lista = novo_no;
    }

    aux = cabeca_lista;

    while(cabeca_lista->prox != NULL)
    {
        cabeca_lista=cabeca_lista->prox;
    }
    cabeca_lista->prox=novo_no;

    cabeca_lista=aux;
}


void printa_lista(Aluno *cabeca_lista, int *contador)
{
    int i = 1;
    while(cabeca_lista != NULL)
    {
        printf("\n%dº node: %d", i, cabeca_lista->matricula);
        cabeca_lista = cabeca_lista->prox;
        i++;
    }
}

void exclui_no(Aluno *cabeca_lista, int *contador, int target) //não está funcionando como deveria, preciso resolver
{
    Aluno *aux_cabeca;
    aux_cabeca = (Aluno*) malloc(sizeof(Aluno));
    aux_cabeca = cabeca_lista;//-----------------------------------posi�ao da cabe�a salva-------------------------------//

    Aluno *ant_cabeca;
    ant_cabeca = (Aluno*) malloc(sizeof(Aluno));
    int i, j;

    for(j=0; j<target-1; j++)//~~~~~~~~~~~~~~~~~~~~~~~~while para parar na posição anterior ao target~~~~~~~~~~~~~~~~~~~~//
    {
        cabeca_lista=cabeca_lista->prox;
        ant_cabeca = cabeca_lista;//------------------------------posição anterior ao target salva-----------------------//
    }

    cabeca_lista= aux_cabeca;//---------------------------------------posiçãoo da cabeça recarregada---------------------//

    for(i=0; i<target; i++)//~~~~~~~~~~~~~~~~~~~~~~~~~~while para parar na posição do target~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
    {
        cabeca_lista=cabeca_lista->prox;//-----------------------ta na posição a ser excluida----------------------------//
    }
    ant_cabeca->prox = cabeca_lista->prox;
    cabeca_lista =NULL;
    cabeca_lista = aux_cabeca;

    printf("\nO %dº nó foi excluido com sucesso, juntamente com o elemento.", target);
}
