#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define MAX 1000
int main()
{
    setlocale(LC_ALL, "");
    int i, aux, flag;
    int vetor[MAX];

    srand(time(NULL));

    for(i=0; i<MAX; i++)
    {
        vetor[i]= rand() %1000;
        printf("\nVetor de número %d: %d ", i+1, vetor[i]);
    }

    flag = 1;
    while(flag){
        flag = 0;
        for(i=0; i<MAX-1; i++)
        {
            if(vetor[i]>vetor[i+1])
            {
                aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
                flag=1;
            }
        }
    }


    for(i=0; i<MAX; i++)
    {
        printf("\nPosição %d do vetor n %d", i+1, vetor[i]);
    }
    }




