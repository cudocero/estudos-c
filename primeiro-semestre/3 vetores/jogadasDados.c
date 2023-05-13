#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main()
{
    setlocale(LC_ALL,"");

    srand(time(NULL));

    int tamanho, jogadas, i, j, k, random;

    printf("\nQuantas faces?");
    scanf("%d", &tamanho);

    int faces[tamanho];

    for(i = 0; i<tamanho; i++)
    {
        faces[i] = 0;
    }

    printf("\nQuantas jogadas? ");
    scanf("%d", &jogadas);

    for(j = 0; j<jogadas; j++)
    {
       random = 0+ rand() %tamanho;
       faces[random]++;
    }

    for(k = 0; k<tamanho; k++)
    {
        printf("\n\nA face %d foi sorteada %d vezes.", k+1, faces[k]);
    }

    return 0;
}


