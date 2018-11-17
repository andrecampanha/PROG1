#include <stdio.h>

int main()
{
    int a;
    printf("Insira um numero: "); scanf("%d", &a);
    printf("O numero %s nos intervalos\n", (a < -10 || (a >= 5 && a < 45) || (a > 120 && a <= 245) ? "enconta-se" : "não se encontra"));
}