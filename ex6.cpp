#include<stdio.h>
#include<math.h>

int main()
{
    int i;
    for(i=1; i<501; i++)
    {
        if (i % 5 == 0)
            printf("\n multiplo por 5: %i ", i);
    }
}
