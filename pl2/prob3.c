#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Numero inteiro 1? ");
    scanf("%d", &n1);
    printf("Numero inteiro 2? ");
    scanf("%d", &n2);

    if (n1 % n2 == 0)
    {
        printf("%d número é multiplo de %d\n", n1, n2);
    }
    else
    {
        printf("%d número não é multiplo de %d\n", n1, n2);
    }
}