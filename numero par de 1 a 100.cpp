#include<stdio.h>
#include<math.h>

   // Escreva um programa em LINGUAGEM C/C++ que imprima todos os números pares
   // do intervalo fechado de 1 a 100.

int main()
{   
    int i;
    for(i=1;i=<100;i++)
    {
        if( i % 2 == 0)
        printf("\n %i", i);
    }
}
