#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int *p;
    p = (int*) malloc(sizeof(int)*10);
    printf("\n%d -> Endereço, endereço +1: %d \n", p, (p+1));
    printf("\n%d -> Valor", *p);

    if (*p == NULL){
        printf("\nAlocado");
    }else{
        printf("\nNão alocado");
    }

}
