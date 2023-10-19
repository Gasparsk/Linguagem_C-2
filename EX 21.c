#include <stdio.h>
#include <stdlib.h>

int main()
{

    int soma, contador = 0, numero, pares, impares, somaPar;
    float media, mediaPar;

    do
    {
        printf("Digite o %d numero: ", contador + 1);
        scanf("%d", &numero);

        if (numero > 0)
        {
            soma = soma + numero;
            contador++;
        }

        if (numero % 2 == 0)
        {
            pares++;
            somaPar = somaPar + numero;
        }
        else if (numero % 2 == 1)
        {
            impares++;
        }

    } while (numero != 0);

    media = soma / contador;
    mediaPar = somaPar / pares;

    system("cls");

    printf("Quantidade de pares: %d \n", pares); 
    printf("Quantidade de impares: %d \n", impares);
    printf("=====================================\n");
    printf("Media de Pares: %.2f \n", mediaPar);
    printf("Media geral: %.2f \n", media);

    return 0;
}