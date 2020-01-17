#include <stdio.h>

int main()
{
    int a;
    printf("Insira um numero: "); scanf("%d", &a);
    printf("%d é %s\n", a, (a % 2 == 0 ? "par" : "impar"));
}