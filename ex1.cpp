#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    int s,m,h;
    setlocale(LC_ALL,"Portuguese");
    printf("\n digite uma quantidade de segundos:  ");
    scanf("%i",&s);
    m=s/60;
    h=(s/60)/60;
    printf("\n convertido em segundos:  %i",s);
    printf("\n convertido em minutos:  %i",m);
    printf("\n convertido em horas:  %i",h);
}