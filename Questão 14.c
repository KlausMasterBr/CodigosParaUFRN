#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int compare (const void* a, const void * b)  //O Uso de endereço de ponteiro baseado no -1 e 1, caminhando as casas dos vetores foi simplismente genial. e pratico.
{
    if (*(float*)a == *(float*)b)
        {
        return 0;
        }
    else if (*(float*)a > *(float*)b)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main ()

//Questão 14 da Lista de Ponteiros
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

    qsort (p,Quantidade, sizeof (int),compare);  // No codigo fica bem mais bonito usar essa função.

    printf ("Vetor em Ordem Crescente:\n\n");

    for ( i = 0; i < Quantidade; i++)

    {
        printf ("Valor no Elemento [%i] = %f\n",i, p[i]);
    }

    printf ("\n");

    free (p);

    return 0;

}
