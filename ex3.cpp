#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
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