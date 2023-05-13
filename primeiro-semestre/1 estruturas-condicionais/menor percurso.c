#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int destino1, destino2, destino3;

    printf("Digite a distância entre Juiz de fora e seu primeiro destino em km:\n");
    scanf("%d", &destino1);

    printf("Digite a distância entre Juiz de fora e seu segundo destino em km:\n");
    scanf("%d", &destino2);

    printf("Digite a distância entre Juiz de fora e seu terceiro destino em km:\n");
    scanf("%d", &destino3);

    if(destino1<destino2 && destino1<destino3)
    {
        printf("O primeiro destino tem o menor percurso");
    }
    else if(destino2<destino1 && destino2<destino3)
        {
            printf("O segundo destino tem o menor percurso");
        }
    else if(destino3<destino1 && destino3<destino2)
        {
            printf("O terceiro destino tem o menor percurso");
        }
    return 0;
}
