#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    
    //Fazer um programa para ler um número do usuário e determinar se este número é
    //par ou não par.
    
    int num;
    setlocale(LC_ALL,"Portuguese");
    printf("\n digite um numero:  ");
    scanf("%i",&num);

    if (num%2==0)
    {
        printf("\n numero par...");
    }
    else
    {
        printf("\n numero impar...");
    }    
}
