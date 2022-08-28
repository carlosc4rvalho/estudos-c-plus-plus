#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    
   // Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e
   // dois números reais. O programa deve retornar o resultado da operação recebida
   // sobre estes dois números.
    
    system("color 109");
    float n1, n2;
    char op;
    setlocale(LC_ALL, "Portuguese");
    printf("\n-----------------------------------------------------------\n");
    printf("\n\n CALCULADORA... \n\n");
    printf("\ndigite o operando que deseja ultilizar:  ");
    printf("\n+ - Soma\n- - Subtracao\n* - Multiplicacao\n/ - Divisao\n");
    printf("\n-----------------------------------------------------------\n");
    scanf("%s", &op);

    printf("digite dois numeros:  ");
    scanf("%f%f", &n1, &n2);

    switch (op)
    {
    case '+':
        printf("\n resultado da soma: %2.f", n1 + n2);
        break;

    case '*':
        printf("\n resultado da multiplicação: %2.f", n1 * n2);
        break;

    case '-':
        printf("\n resultado da subtração: %2.f", n1 - n2);
        break;

    case '/':
        if (n1 == 0 && n2 == 0)
        {
            printf("\n não é possivel dividir por 0.\n");
        }
        else
        {
            printf("\n resultado da divisão: %2.f", n1 / n2);
        }
        break;

    default:
        printf("\n opção invalida.");
    }
}
