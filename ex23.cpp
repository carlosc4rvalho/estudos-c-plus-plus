#include<stdio.h>
#include<math.h>
#include<locale.h>

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