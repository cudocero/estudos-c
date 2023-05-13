#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct TipoArvore
{
    int info;
    struct TipoArvore *sae;
    struct TipoArvore *sad;
};
typedef struct TipoArvore Arvore;

Arvore *criaNo(int n, Arvore *sae, Arvore *sad);
Arvore *inicializa();
int estaVazia(Arvore *n);
int busca(Arvore *n, int x);
int qtNo(Arvore *n, int qt);

void imprimePre(Arvore *a); //Percurso em profundidade(pré-ordem)//
void imprimeIn(Arvore *a); //Percurso em profundidade(in-ordem)//
void imprimePos(Arvore *a); //Percurso em profundidade(pós-ordem)//

int main()
{

    setlocale(LC_ALL,"");
    //Criando de baixo pra cima. Primeiro as folhas, depois as ligações das supraarvores com as subarvores.//
    Arvore *D = criaNo(4, inicializa(), inicializa());
    Arvore *E = criaNo(5, NULL, NULL);
    Arvore *F = criaNo(6, NULL, NULL);
    Arvore *G = criaNo(7, NULL, NULL);
    Arvore *B = criaNo(2, D, E);
    Arvore *C = criaNo(3, F, G);
    Arvore *A = criaNo(1, B, C);

    imprimePre(A); //Percurso em profundidade(pré-ordem)//
    printf("\n\n");
    imprimeIn(A); //Percurso em profundidade(in-ordem)//
    printf("\n\n");
    imprimePos(A); //Percurso em profundidade(pós-ordem)//
    printf("\n\n");

    if (busca(A, 7))
    {
        printf("\nAchado");
    }
    else
    {
        printf("\nNão achado");
    }

    printf("\n\nA quantidade de nós da árvore é %d\n", qtNo(A, 0));
}

Arvore *criaNo(int n, Arvore *sae, Arvore *sad)
{
    Arvore *novo;
    novo = (Arvore*) malloc (sizeof(Arvore));

    novo->info = n;
    novo->sae = sae;
    novo->sad = sad;

    return novo;
}

void imprimePre(Arvore *a)
{
    if (a != NULL)
    {
        printf("pre %d ", a->info);
        imprimePre(a->sae);
        imprimePre(a->sad);
    }
}

void imprimeIn(Arvore *a)
{
    if (a != NULL)
    {
        imprimeIn(a->sae);
        printf("in %d ", a->info);
        imprimeIn(a->sad);
    }
}

void imprimePos(Arvore *a)
{
    if (a != NULL)
    {
        imprimePos(a->sae);
        imprimePos(a->sad);
        printf("pos %d ", a->info);
    }
}

Arvore *inicializa()
{
    return NULL;
}

int estaVazia(Arvore *n)
{
    if(n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int busca(Arvore *n, int x)
{
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        if (n->info == x)
        {
            return 1;
        }
        else
        {
            if(busca(n->sae, x))
            {
                return 1;
            }
            else
            {
                return (busca(n->sad, x));
            }
        }
    }

}

int qtNo(Arvore *n, int qt)
{
    if (n != NULL)
    {
        return 1 + (qtNo(n->sae, qt))+(qtNo(n->sae, qt));
    }
    else
    {
        return 0;
    }
}



