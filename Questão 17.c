#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main ()

//Quest�o 17 da Lista de Ponteiros
//Aluno: Humberto Jos� Barbalho de Melo Junior
{
    setlocale(LC_ALL, "Portuguese");//Setando para conseguir usar acentos do portugu�s

    int tamanho = 10, VetorA [tamanho], VetorB [tamanho],VetorResultante [tamanho];
    int i;

    printf("Escolha o Tamanho do Vetor: ");

    scanf("%d", &tamanho);

    //-----------------------------------------------------------------------------------

    for(i=0; i<tamanho; i++)
        {
        printf("Preencha o Vetor A de Tamanho [%i]: ",tamanho);
        scanf("%d", &VetorA[i]);
        }

    printf ("\nPronto, agora fa�a o Mesmo com o Vetor B.\n\n");

    for(i=0; i<tamanho; i++)
        {
        printf("Preencha o Vetor B de Tamanho [%i]: ",tamanho);
        scanf("%d", &VetorB[i]);
        }
    //------------------------------------------------------------------------------------

    printf("\n\nO Vetor Soma Resultante �:{");

    for(i=0; i<tamanho; i++)
    {
        VetorResultante[i] = VetorA[i] + VetorB[i];
        printf (" %d,",VetorResultante[i]);
    }
    printf(" }\n\n");

}
