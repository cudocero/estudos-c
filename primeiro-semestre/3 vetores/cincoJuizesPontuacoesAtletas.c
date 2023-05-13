#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 5

int main()
{
    setlocale(LC_ALL,"");

    float pontuacoes[MAX], media = 0, maior_pontuacao, menor_pontuacao;
    int i, acima_media = 0, abaixo_media = 0, juizes_melhor = 1, juizes_pior = 1;

    for(i = 0; i<MAX; i++)  // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<----------------------------------------percorrer atribuindo valores ao vetor
    {
        printf("\nJuiz %d, informe a pontuação do atleta de 0 a 10: ", i+1);
        scanf("%f", &pontuacoes[i]);
        media = media + pontuacoes[i];
    }

    maior_pontuacao = pontuacoes[0];
    menor_pontuacao = pontuacoes[0];
    media = media/MAX;

    for(i = 0; i<MAX; i++)  // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<----------------------------------------percorrer verificando valores de vetor
    {
        if(pontuacoes[i]>maior_pontuacao)
        {
            maior_pontuacao = pontuacoes[i];
        }
        if(pontuacoes[i]<menor_pontuacao)
        {
            menor_pontuacao = pontuacoes[i];
        }
        if(pontuacoes[i]>media)
        {
            acima_media++;
        }
        if(pontuacoes[i]<media)
        {
            abaixo_media++;
        }
    }


    printf("\nA média das notas é de %.1f", media);
    printf("\nA melhor pontuacão obtida pelo atleta foi de %.1f", maior_pontuacao);
    printf("\nA pior pontuaão obtida pelo atleta foi de %.1f", menor_pontuacao);
    printf("\nForam %d pontuações acima da m�dia e %d pontuações abaixo da m�dia", acima_media, abaixo_media);
    printf("\n%d Juizes atribuiram a melhor nota e %d juizes atribuiram a pior nota",juizes_melhor, juizes_pior);

    return 0;
}

