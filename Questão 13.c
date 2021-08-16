#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main ()

//Questão 13 da Lista de Ponteiros
//Aluno: Humberto José Barbalho de Melo Junior
{
    setlocale(LC_ALL, "Portuguese");//Setando para conseguir usar acentos do português

    float *p;
    int i = 0,j, Quantidade;
    int troca = 0, aux = 0;

    printf ("Digite a Quantidade de Elementos Presente no Vetor: ");
    scanf ("%i", &Quantidade);

    p = (int*) (malloc(Quantidade * sizeof (int)));

    for (i = 0; i < Quantidade; i++)
    {
        printf ("\nDigite o Valor para a Posição [%i] do Vetor: ", i);
        scanf ("%f", &p [i]);
    }
    printf ("\n");

    //-----------------------------------------------------------------------------------------------------------------------------------------------------

    for (i = 0; i < Quantidade; i++)
        for(j = i+1; j<Quantidade;j++)
        {
            if (p[i]>p[j])
            {
                aux=p[i];
                p[i]=p[j];
                p[j]=aux;
            }
        }

    //------------------------------------------------------------------------------------------------------------------------------------------------------

    printf ("Vetor em Ordem Crescente:\n\n");
    for ( i = 0; i < Quantidade; i++)

    {
        printf ("Valor no Elemento [%i] = %f\n",i, p[i]);
    }

    printf ("\n");

    free (p);

    return 0;

}
