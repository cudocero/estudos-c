#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int dia;

    printf("Irei verificar se determinado dia pertence à primeira ou à segunda quinzena do mês\n\nAperte qualquer botão para continuar\n\n");
    getch();
    printf("Informe o número do dia\n");
    scanf("%d", &dia);

    if(dia >= 16){
        printf("Dia %d pertence à segunda quinzena do mês", dia);
    }else{
        printf("Dia %d pertence à primeira quinzena do mês", dia);
    }

    return 0;
}
