#include <stdio.h>

int main()
{
    int x, y;
    printf("Insira numero para variavel 1: ");
    scanf("%d", &x);
    printf("Insira numero para variavel 2: ");
    scanf("%d", &y);

    x += y;
    y = x - y;
    x -= y;

    printf("Valor da variavel 1 depois da troca: %d\n", x);
    printf("Valor da variavel 2 depois da troca: %d\n", y);
}