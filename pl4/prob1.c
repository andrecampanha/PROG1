#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Insira um numero? "); scanf("%d", &num);

    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }

    printf("A soma dos digitos é %d\n", sum);

}