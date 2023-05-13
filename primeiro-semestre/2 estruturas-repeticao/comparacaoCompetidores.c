#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int contador = 1, nota, maior_nota = 0, melhor_competidor_numero;
    char continua = 's';

    while(continua == 's' || continua == 'S')
    {
        printf("\nQual a nota do competidor de número %d?\n", contador);
        scanf("%d", &nota);
        printf("Deseja continuar? Pressione S/s[SIM] ou N/n[NãO]\n");
        continua = getche();

        if (nota>maior_nota){
            maior_nota = nota;
            melhor_competidor_numero = contador;
        }

        contador = contador + 1;
    }

    printf("\nO melhor competidor foi o de numero %d, com a nota %d", melhor_competidor_numero, maior_nota);
    return 0;
}
