#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int num1, num2;

    printf("Verificarei se um número é divisível pelo outro\n");
    printf("Digite o primeiro número:\n");
    scanf("%d", &num1);

    printf("Digite o segundo número:\n");
    scanf("%d", &num2);

    if(num1 % num2 == 0)
    {
        printf("%d é divisével por %d!", num1, num2);
    }
    else
    {
        printf("%d não é divisível por %d!", num1, num2);
    }
}
