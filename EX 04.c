#include <stdlib.h>
#include <stdio.h>

int main()
{

    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("3 x %d = %d \n", i, i * 3);
    }
    printf("\n");
    for (i = 1; i <= 10; i++)
    {
        printf("5 x %d = %d \n", i, i * 5);
    }
    printf("\n");
    for (i = 1; i <= 10; i++)
    {
        printf("7 x %d = %d \n", i, i * 7);
    }
    printf("\n");
}