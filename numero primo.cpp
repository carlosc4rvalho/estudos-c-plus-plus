#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(void)
    
    // Escrever um programa para ler um número inteiro do usuário e exibir o maior
    // número primo que seja menor do que o número digitado.
    
{
    int v[100];
    int num, i, p;

    setlocale(LC_ALL, "Portuguese");
    printf("\n digite um numero inteiro entre 1 e 100:  ");
    scanf("%i", &num);

    printf("\n\n numeros primos antecessores a: %i", num);
    for (p = 0; p < num; p++)
    {
        if (p % 3 == 0)
        {
            v[i] = p;
            printf("\n %i", v[i]);
        }
    }
}
// int main(void)
//{
//     int num, i, p;
//     int vetor;
//    setlocale(LC_ALL, "Portuguese");
//  printf("\n digite um numero inteiro:  ");
// scanf("%i", &num);
// vetor = realloc(vetor, num*sizeof(int));
// for (p = 0; p < num; p++)
//{
//   if (p % 3 == 0)
//{
//   vetor[i] = p;
// printf("\n %i", vetor[i]);
// }
// }
// }
