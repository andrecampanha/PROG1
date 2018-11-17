#include <stdio.h>

int main()
{
    int num;
    printf("Insira o numero: "); scanf("%d", &num);

    printf("O inverso do numero 123 é ");

    while (num != 0)
    {
        printf("%d", num % 10);
        num /= 10;
    }
    printf("\n");
}