#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    float soma, nota, media;

    for (i = 1; i <= 3; i++)
    {
        do
        {
            printf("Digite sua %d nota: ", i);
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);

        soma += nota;
        
    }

   media = soma / i;

    if (media >= 7)
    {
        printf("Media: %.2f \n", media);
        printf("Aprovado!");
    }
    else if (media >= 5 || media < 7)
    {
        printf("Media: %.2f \n", media);
        printf("Recuperacao!");
    }
    else if (media < 5)
    {
        printf("Media: %.2f \n", media);
        printf("Reprovado!");
    }

    return 0;
}