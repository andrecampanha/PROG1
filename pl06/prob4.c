#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int i)
{
    int res = 1;
    while(i > 0)
    {
        res *= i;
        i--;
    }
    return res;
}

float seno(float x, float tolerancia)
{
    int n = 0;
    float sum = 0, termo;
    do
    {
        n++;
        termo = pow(-1, n + 1) * (pow(x, 2 * n - 1) / factorial(2 * n - 1));
        sum += termo;
    } while(termo >= tolerancia || termo <= -tolerancia);

    sum -= termo;

    return sum;
}

int main()
{
    float x, tolerancia;

    printf("Qual o valor de x? "); scanf("%f", &x);
    printf("Qual o valor da tolerancia? "); scanf("%f", &tolerancia);

    printf("O seno de %f é %f\n", x, seno(x, tolerancia));
}