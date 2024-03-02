#include <stdio.h>
#include <stdlib.h>

int main()
{

    int contadorMulher = 0, salarioValor, contadorMedia = 0, codigo = 1, idade = 0, maiorIdade = 0, menorIdade;
    float media, mediaSalario, salario;
    char sexo;

    do
    {

        printf("---------------------------------\n");
        printf("|   |         Menu              |\n");
        printf("| 1 |    Adicionar pessoa       |\n");
        printf("| 2 | Sair e exibir Resultados  |\n");
        printf("---------------------------------\n");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:

            printf("Digite a idade: ");
            scanf("%d", &idade);

            printf("Digite seu salario: ");
            scanf("%f", &salario);

            printf("Digite seu sexo: ");
            scanf("%s", &sexo);

            maiorIdade = maiorIdade > idade ? maiorIdade : idade;
            menorIdade = maiorIdade < idade ? maiorIdade : idade;

            if (sexo == 'F' && salario > 5.000)
            {
                contadorMulher++;
            }

            contadorMedia++;

            salarioValor = salarioValor + salario;
            
            system("cls");
            
            break;
        case 2:
            mediaSalario = salarioValor / contadorMedia;
            
            printf("Media salarial do grupo: %.3f \n", mediaSalario);
            printf("Maior idade: %d \n", maiorIdade);
            printf("Menor idade: %d \n", menorIdade);
            printf("Quantidade de mulheres acima de 5.000: %d \n", contadorMulher);

        default:
            break;
        }

    } while (codigo == 1);

    return 0;
}
