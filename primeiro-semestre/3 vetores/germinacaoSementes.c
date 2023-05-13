#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));
    int qt, i, j, soma =0, acima_media= 0;
    float media = 0;

    printf("\n São quantas sementes? ");
    scanf("%d", &qt);

    int sementes[qt];


        for (i = 0; i<qt; i++)
        {
            sementes[i] = 1+ (rand()% 10);
            soma = soma + sementes[i];
            media = media + sementes[i];
            printf("\n|%dº semente -> Grau de germinacão : %d|", i+1, sementes[i]);
        }

    printf("\n\n*************************************");
    printf("\n\n|%d -> Somatório|", soma);

    media = media/qt;

    printf("\n|%.1f -> Média do grau de germinação.|", media);

    for (j= 0; j<qt; j++)
    {
        if(sementes[j]>media)
            {
            acima_media++;
            }
    }

    printf("\n|%d -> Quantidade de sementes com germninação acima da média.|", acima_media);
    printf("\n|%.d%% -> Sementes com germinação acima da m�dia.|", (acima_media*100) / qt);


    return 0;
}
