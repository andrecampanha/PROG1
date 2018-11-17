#include <stdio.h>

int main()
{
    float c;
    int j, n;
    printf("Qual o capital inicial? "); scanf("%f", &c);
    printf("Qual a taxa de juro dada pelo banco? "); scanf("%d", &j);
    printf("Durante quantos anos? "); scanf("%d", &n);

    float x = 1 + ((float) j / 100);

    for(int i = 0; i < n; i++)
        c *= x;

    printf("O capital acumulado ao fim de %d anos e de %.3f euros\n", n, c);
}