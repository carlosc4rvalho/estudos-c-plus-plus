#include <stdio.h>
#include <locale.h>
#include <math.h>

    //Fazer um programa que recebe 3 valores não inteiros do usuário e mostra o maior
    //deles, o menor deles e a média.
    

int main()
{
    int a, b, c, menor, maior;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a < b)
    {
        if (a < c)
            menor = a;
        else
            menor = c;
    }
    else
    {
        if (b < c)
            menor = b;
        else
            menor = c;
    }

    if (a > b)
    {
        if (a > c)
            maior = a;
        else
            maior = c;
    }
    else
    {
        if (b > c)
            maior = b;
        else
            maior = c;
    }

    printf("\tMenor: %d\tMaior: %d\n", menor, maior);
}
