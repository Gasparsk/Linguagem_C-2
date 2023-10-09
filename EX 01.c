#include <stdlib.h>
#include <stdio.h>

int main()
{

    int parcelar;
    int formapagamento;
    float parcelaProduto;
    float produto;

    printf("Digite o valor do Produto: ");
    scanf("%d", &produto);
    printf("Qual a forma de pagamento ? a prazo (1) ou a vista (2) : ");
    scanf("%d", formapagamento);

    switch (formapagamento)
    {
        
    case 1:
        printf("Valor do Produto: R$ 100.00 \n");
        printf("Digite a quantidade de Parcelas:");
        scanf("%d", &parcelar);

        parcelaProduto = (produto / parcelar);

        break;
    case 2:
        printf("Como o a Forma de pagamento que foi escolhida e a vista");
        prinft("Sera aplicado um valor de Desconto de 10 do valor total");
        printf("Valor do Produto: R$ 100.00 \n");
        printf("Como o a Forma de pagamento que foi escolhida e a vista");

    default:
        break;
    }

    return 0;
}