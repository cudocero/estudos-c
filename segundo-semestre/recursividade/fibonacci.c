#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fib(int x);

int main()
{
    setlocale(LC_ALL, "");
    int x;

    printf("Quantos números da sequência Fibonacci deseja? ");
    scanf("%d", &x);

    printf("%d\n", fib(x));

    for(int i =1 ; i<=x; i++)
    {
        if (i == 1)
        {
            printf("\nWhile:\n");
        }
        printf("%d ", fib(i));
    }

        for(int i =1 ; i<=x; i++)
    {
        if (i == 1)
        {
            printf("\nWhile par:\n");
        }
        if ((fib(i) % 2) ==0)
        {
         printf("%d ", fib(i));
        }

    }

            for(int i =1 ; i<=x; i++)
    {
        if (i == 1)
        {
            printf("\nWhile ímpar:\n");
        }
        if ((fib(i) % 2) !=0)
        {
         printf("%d ", fib(i));
        }

    }

}

int fib(int x)
{
    if(x==1)
    {
        return 0;
    }
    if(x ==2)
    {
        return 1;
    }

    x= fib(x-1) + fib(x-2);
    return (x);
}

