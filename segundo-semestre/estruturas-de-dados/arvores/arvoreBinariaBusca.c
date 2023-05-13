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

Arvore *insere(Arvore *raiz, int chave);
Arvore *criaNo(int n, Arvore *sae, Arvore *sad);
Arvore *inicializa();
int estaVazia(Arvore *n);
int busca(Arvore *n, int x);
int qtNo(Arvore *n, int qt);
int maiorElemento(Arvore *n, int maior);
int menorElemento(Arvore *n, int menor);

void imprimePre(Arvore *a); //Percurso em profundidade(pré-ordem)//
void imprimeIn(Arvore *a); //Percurso em profundidade(in-ordem)//
void imprimePos(Arvore *a); //Percurso em profundidade(pós-ordem)//

int main()
{
    setlocale(LC_ALL,"");

    Arvore *raiz = NULL;
    raiz  = insere(raiz,7);
    raiz  = insere(raiz,9);
    raiz  = insere(raiz,5);
    raiz  = insere(raiz,1);
    raiz  = insere(raiz,8);
    raiz  = insere(raiz,4);
    raiz  = insere(raiz,10);
    raiz  = insere(raiz,61);
    raiz  = insere(raiz,-1);

    imprimePre(raiz); //Percurso em profundidade(pré-ordem)//
    printf("\n\n");
    imprimeIn(raiz); //Percurso em profundidade(in-ordem)//
    printf("\n\n");
    imprimePos(raiz); //Percurso em profundidade(pós-ordem)//
    printf("\n\n");

    if (busca(raiz,5))
    {
        printf("\nAchado");
    }
    else
    {
        printf("\nNão achado");
    }

    printf("\n\nA quantidade de nós da árvore é %d\n", qtNo(raiz, 0));
    printf("\n\nO maior elemento da árvore é %d", maiorElemento(raiz, 0));
    printf("\n\nO menor elemento da árvore é %d", menorElemento(raiz, raiz->info));
}

Arvore *insere(Arvore *raiz, int chave)
{
    if(raiz==NULL)
    {
        return criaNo(chave, inicializa(), inicializa());
    }
    else
    {
        if(chave<raiz->info)
        {
            raiz->sae = insere(raiz->sae, chave);
        }
        if(chave>raiz->info)
        {
            raiz->sad = insere(raiz->sad, chave);
        }
        return raiz;
    }
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
            if(x<n->info)
            {
                return busca(n->sae, x);
            }
            else if (x>n->info)
            {
                return busca(n->sad, x);
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

int maiorElemento(Arvore *n, int maior)
{
    if(n == NULL)
    {
        return 0;
    }
    if(n->info > maior)
    {
        maior = n->info;
    }
    if (n->sad != NULL)
    {
        maiorElemento(n->sad, maior);
    }
    else
    {
        return maior;
    }
}

int menorElemento(Arvore *n, int menor)
{
    if(n == NULL)
    {
        return 0;
    }
    if(n->info < menor)
    {
        menor = n->info;
    }
    if (n->sae != NULL)
    {
        menorElemento(n->sae, menor);
    }
    else
    {
        return menor;
    }
}


