#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero, somaNumero = 0;
    float media, soma;

    do
    {
        printf("Digite o Numero: ");
        scanf("%d", &numero);
        if (numero > 0)
        {
            soma += numero;
            somaNumero++;
        }

    } while (numero > 0);

    media = soma / somaNumero;

    printf("Media aritimedica: %.2f", media);

    return 0;
}
