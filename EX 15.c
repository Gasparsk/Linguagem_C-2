#include <stdio.h>
#include <stdlib.h>

int main(){

int numero, soma, i;

soma = 0;

for (i = 1; i <= 5; i++)
{
    printf("Digite o %d numero: ", i);
    scanf("%d", &numero);

    soma += numero;
}

printf("Valor total: %d", soma);







    return 0;
}