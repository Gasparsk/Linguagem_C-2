#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nome[500];
    char sexo;
    float pesoideal, altura;

    printf("Digite seu Nome: ");
    gets(nome);

    printf("Digite Seu Sexo MASCULINO (M) FEMININO (F): ");
    scanf("%c", &sexo);

    printf("Digite sua Altura: ");
    scanf("%f", &altura);

    switch (sexo)
    {
    case 'M':
        pesoideal = (72.7 * altura) - 58;

        printf("Seu peso ideal e: %.2f", pesoideal);

        break;
    case 'F':
        pesoideal = (62.1 * altura) - 44.7;

        printf("Seu peso ideal e: %.2f", pesoideal);

    default:
        printf("Sexo nao encontrando... ");
        break;
    }

    return 0;
}