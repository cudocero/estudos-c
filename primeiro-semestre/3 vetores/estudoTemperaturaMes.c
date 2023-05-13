#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <conio.h>
#define MAX 30

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int dias[MAX], temperatura, temp_max = 0, temp_min = 25, i, random, dias_tamanho, decisao;
    float media = 0;
    char continua = 's';

    srand(time(NULL));

    while (continua == 's' || continua == 'S')
    {
        printf("\n\nEssa é uma aplicação que mostra a media de temperatura de 30 dias no mês\n\nDigite\n[0]para digitar a temperatura dia por dia\n[1] para o sistema fazer aleatoriamente\n: ");
        scanf("%d", &decisao);
        if(decisao == 0)
        {
            for ( i=0; i<MAX; i++)
            {
                printf("\nQuantos graus no %dº dia? ", i + 1);
                scanf("%d", &dias[i]);
                media = media + dias[i];

                    if(temp_max<dias[i])
                    {
                        temp_max = dias[i];
                    }
                    if(dias[i]<temp_min)
                    {
                        temp_min = dias[i];
                    }
            }
            media = media / MAX;
            printf("\nA média de temperatura do mês é de %.2f graus\n\nA temperatura máxima do mês foi de %d graus\n\nA temperatura mínima do mês foi de %d graus\n\nDeseja rodar novamente a aplicação? SIM[s] ou NÃO[n] : ", media, temp_max,temp_min);
            continua = getche();
        }
        else if(decisao == 1)
        {
            for ( i=0; i<MAX; i++)
            {
                random = (10 + rand()% 15);
                dias[i] =random;
                printf("%d� dia: %d graus\n", i+1, dias[i]);
                media = media + dias[i];

                    if(temp_max<dias[i])
                    {
                        temp_max = dias[i];
                    }
                    if(dias[i]<temp_min)
                    {
                        temp_min = dias[i];
                    }
            }
            media = media / MAX;
            printf("\nA média de temperatura do mês é de %.2f graus\n\nA temperatura máxima do mês foi de %d graus\n\nA temperatura mínima do mês foi de %d graus\n\nDeseja rodar novamente a aplicação? SIM[s] ou NÃO[n] : ", media, temp_max,temp_min);
            continua = getche();
        }
        else
        {
            printf("Apenas 0 ou 1.");
        }
    }

    return 0;
}
