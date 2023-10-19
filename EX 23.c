#include <stdio.h>
#include <stdlib.h>

int main()
{

    char login[500];
    int senha;

    do
    {
        printf("Digite o Login: ");
        gets(login);
        printf("----------------------------------\n");

        printf("\n");

        printf("Digite a Senha: ");
        scanf("%d", &senha);
       printf("----------------------------------\n");

        if (login != 'caiquekk321' && senha != 555333)
        {
            printf("\n");
            printf("Login ou senha invalidos... \n");
            printf("----------------------------------\n");
            printf("\n");

            fflush(stdin);
        }

        else

        {
            printf("\n");
            printf("Bem vindo de Volta! \n");
            printf("----------------------------------\n");
        }

    } while (login != 'caiquekk321' && senha != 555333);

    return 0;
}