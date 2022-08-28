#include<stdio.h>
#include<math.h>

//Escreva um programa em LINGUAGEM C/C++ que imprima todos os números
//múltiplos de 5, no intervalo fechado de 1 a 500.

int main()
{
    int i;
    for(i=1; i=<500; i++)
    {
        if (i % 5 == 0)
            printf("\n multiplo por 5: %i ", i);
    }
}
