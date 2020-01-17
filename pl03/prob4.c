#include <stdio.h>

int main()
{
    int num, alg1, alg3;
    printf("Insira um numero de 3 digitos: "); scanf("%d", &num);

    alg1 = num / 100;
    alg3 = num % 10;

    printf("O número %sé capicua\n", (alg1 == alg3 ? "" : "não "));
}