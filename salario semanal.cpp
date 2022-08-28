#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    
    // Escreva um programa que calcule o salário semanal de um trabalhador. As
    // entradas são o número de horas trabalhadas na semana e o valor da hora. Até 40
    // h/semana não se acrescenta nenhum adicional. Acima de 40h e até 60h há um
    // bônus de 50% para essas horas. Acima de 60h há um bônus de 100% para essas horas.
    
    float s, h, v, acrecimo, extra, limite = 40;
    setlocale(LC_ALL, "Portuuguese");
    printf("\n digite sua carga horaria semanal:  ");
    scanf("%f", &h);
    printf("\n digite o valor de sua hora de trabalho:  ");
    scanf("%f", &v);

    if (h <= 40)
    {
        printf("\n o valor de seu salario semanal e de: %2.f ", h * v);
    }
    else
    {
        if (h > 40 && h < 60)
        {
            extra = (h - limite) * v;
            acrecimo = extra+(extra/100*50);
                s = (limite * v) + acrecimo;
            printf("\n o valor de seu salario semanal e de: %2.f ", s);
        }
        else if (h > 60)
        {
            extra = (h - limite) * v;
            acrecimo = extra*2;
            s = (limite * v) + acrecimo;
            printf("\n o valor de seu salario semanal e de: %2.f ", s);
        }
    }
}
