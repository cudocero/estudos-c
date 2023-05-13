#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 5
int main()
{
    setlocale(LC_ALL, "");
    int vet[MAX][MAX], i, j, k, soma[3] ={0,0,0};

         for(i=0; i<MAX; i++)
    {
        printf("\n");
        for(j=0; j<MAX; j++)
        {
            if(i==j)
            {
                vet[i][j] = 1;
                soma[0]++;
            }
            if(i<j)
            {
                vet[i][j] = 2;
                soma[1] =soma[1]+vet[i][j];
            }
            if(i>j)
            {
                vet[i][j] = 3;
                soma[2] =soma[2]+vet[i][j];
            }
            printf("%d",vet[i][j]);
        }

    }

    for(k =0; k<3; k++)
    {
        printf("\nA soma dos números %d é de %d",k+1, soma[k]);
    }








    return 0;
}
