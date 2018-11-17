#include <stdio.h>

int main()
{
    int altura;
    printf("altura? ");scanf("%d", &altura);

    for(int i = 0; i < altura - 1; i++)
    {
        for(int j = 0; j < altura - 2 - i; j++)
            printf(" ");
        
        for (int j = 0; j < 1 + 2 * i; j++)
            printf("*");

        printf("\n");
    }
    for (int j = 0; j < altura - 2; j++)
        printf(" ");
        
    printf("*\n");
}