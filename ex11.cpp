#include<stdio.h>

int main()
{
    float i,num,m;

    for(i=0;i<10;i++)
    {
        printf("\ndigite um numero: ");
        scanf("%f",&num);
        m = num/2;
        printf("\n%.2f %f",m);

    }
}
