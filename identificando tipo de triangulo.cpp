#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    
   // Fazer um programa para receber valores inteiros X, Y e Z do usuário e determinar
   // se estes valores podem formar os lados de um triângulo. Em caso afirmativo,
   // informar se o triângulo é equilátero, isósceles ou escaleno.
    
    int x, y, z;
    setlocale(LC_ALL, "Portuguese");
    printf("\n digite o valor do lado x:  ");
    scanf("%i", &x);
    printf("\n digite o valor do lado y:  ");
    scanf("%i", &y);
    printf("\n digite o valor do lado z:  ");
    scanf("%i", &z);

    if (x + y > z && y + z > x && z + x > y)
    {
        printf("\n os lados formam um triangulo...");
        if (x == y && y == z && x == z)
            printf("\n triangulo equilatero");
        else if (x != y && y != z && x != z)

            printf("\n triangulo escaleno");
        else if (x == y && y == z)
            printf("\n trianglo isoceles");
    }
    else
        printf(" o lados não forman um triangulo");
}
