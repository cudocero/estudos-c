#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
float calculo(float operando1, float operando2, char operacao);

int main()
{
    setlocale(LC_ALL,"");

    float operando1, operando2;
    char operacao;

    printf("\nToda vez que digitar um número ou símbolo aperte enter:\n\n");
    scanf("%f", &operando1);
    operacao = getche();
    scanf("%f", &operando2);

    printf("%f",calculo(operando1, operando2, operacao));
    return 0;
}

float calculo(float operando1, float operando2, char operacao)
{
    int resultado;
    if(operacao == '+')
    {
     resultado = operando1+operando2;
    }
    if(operacao == '/')
    {
     resultado = operando1/operando2;
    }
    if(operacao == '*')
    {
     resultado = operando1*operando2;
    }
    if(operacao == '-')
    {
     resultado = operando1-operando2;
    }
return resultado;
}
