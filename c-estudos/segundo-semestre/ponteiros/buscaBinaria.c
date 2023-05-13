#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define MAX 256

int busca(int *vetor, int chave);

int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));

    int i, chave = rand() % MAX;
    int *vetor = (int *) malloc(sizeof(int)*MAX);

    for(i=0; i<MAX; i++)
    {
        *(vetor+i) = i;
    }
    printf("\nA posição da chave de número %d no vetor é sua %dª posição.", chave, busca(vetor, chave));
}

int busca(int *vetor, int chave)
{
    int ini = 0;
    int fim = MAX-1;
    int meio;
    int repeticoes = 0;
    while (ini <= fim)
    {
        meio = (ini + fim) / 2;
        if (chave < *(vetor+meio))
        {
            fim = meio - 1;
            repeticoes ++;
        }
        else
        {
            if (chave > *(vetor+meio))
            {
                ini = meio + 1;
                repeticoes ++;
            }
            else
            {
                return meio;
            }
        }
    }
    return -1;
}



