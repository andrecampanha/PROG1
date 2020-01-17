#include <stdio.h>

int main()
{
    float num;
    printf("Insira um numero: ");
    scanf("%f", &num);

    printf("Número com 3 casas decimais = %.3f\n", num);
    printf("Parte inteira = %d\n", (int) num);
    printf("Parte decimal = %f\n", (num - (int) num));
}