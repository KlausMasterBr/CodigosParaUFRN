#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main ()

//Questão 12 da Lista de Ponteiros
//Aluno: Humberto José Barbalho de Melo Junior
{
    setlocale(LC_ALL, "Portuguese");//Setando para conseguir usar acentos do português

    int X = 10, *p, *q;

    p = X - 1;
    q = X +20;

    printf ("%i\n", p);
    printf ("%i\n", q);

}
