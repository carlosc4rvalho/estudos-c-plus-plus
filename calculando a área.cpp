#include<stdio.h>
#include<math.h>
#include<locale.h>
  

//Faça um programa que receba do usuário o número de lados e o tamanho dos lados
//de um polígono regular e imprima o valor da área do polígono. O programa deve
//utilizar uma estrutura switch-case para decidir que fórmula de cálculo utilizar, de
//acordo com o número de lados do polígono. Se o número de lados for diferente
//de 3, 4 ou 6 o programa deve informar: “não sei calcular a área”. Áreas:

int main()
{
    int la, tam;
    float area;
    setlocale(LC_ALL,"Portuguese");
    printf("\n Digite o numero de lados do seu poligono: ");
    scanf("%d", &la);

    switch(la)
    {
        case 3: printf("\n Digite o tamanho do lado deste poligono: ");
                scanf("%d", &tam);
                area = tam*tam*1.73 / 4;
                printf("\n Area: %.2f", area);
                break;
        case 4: printf("\n Digite o tamanho do lado deste poligono: ");
                scanf("%d", &tam);
                area = tam*tam;
                printf("\n Area: %.2f", area);
                break;
        case 6: printf("\n Digite o tamanho do lado deste poligono: ");
                scanf("%d", &tam);
                area = 6*tam*tam*1.73 / 4;
                printf("\n Area: %.2f", area);
                break;
        default : printf("\n Nao sei calcular a area.");
    }
}
