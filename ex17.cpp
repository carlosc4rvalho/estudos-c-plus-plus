#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    float i, m, s = 0, c = 0;
    setlocale(LC_ALL, "Portuguese");

    for (i = 0; i >= -1; i++)
    {
        printf("\n digite um numero inteiro:  ");
        scanf("%f", &i);
        if (i > -1)
        {
        s = s + i;
        c = c + 1;
        }
        else{}
    }
    m = (s / c);
    printf("\n a media dos numeros digitados foi de:   %2.f", m);
}