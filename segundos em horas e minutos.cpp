#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    
    //Fazer um programa para receber um número inteiro de segundos do usuário e
    //imprimir a quantidade correspondente em horas, minutos e segundos.
    
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
