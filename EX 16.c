#include <stdio.h>
#include <stdlib.h>

int numero, par = 0, impar = 0, i;

int main()
{

    for (i = 1; i <= 5; i++)
    {
        printf("Digite %d numero: ", i);
        scanf("%d", &numero);
        if (numero % 2 == 0)
        {
            par ++;
        }
        else if (numero % 2 == 1)
        {
            impar ++;
        }
    }

    
    printf("\n");
    printf("Numeros Pares: %d \n", par);
    printf("----------------------- \n");
    printf("Numeros Impares: %d \n", impar);
    printf("----------------------- \n");
    
    return 0;
}