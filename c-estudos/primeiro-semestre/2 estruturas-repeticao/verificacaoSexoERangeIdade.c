#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    char sexo, continuar = 's';
    int idade, contador = 1, quant_sexo_F = 0, quant_idade_sexo_f = 0;

    while(continuar == 's' || continuar == 'S')
    {
        printf("\nQual o sexo (M ou F) do habitante de número %d? ", contador);
        sexo = getche();
        contador = contador + 1;

        printf("\n\nE a idade? ");
        scanf("%d", &idade);

        printf("\nDeseja continuar? S[SIM] ou N[NÃO]: ");
        continuar = getche();

        if(sexo == 'f' || sexo == 'F')
        {
            quant_sexo_F = quant_sexo_F + 1;

          if(idade >= 18 && idade <= 35)
          {
            quant_idade_sexo_f = quant_idade_sexo_f + 1;
        }}
    }
    printf("\nO número de pessoas do sexo feminino entre 18 e 35 anos é de %d", quant_idade_sexo_f);

    return 0;
}
