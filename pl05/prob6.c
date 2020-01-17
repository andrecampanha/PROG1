#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void solve_quad(int a, int b, int c)
{
    float x1, x2, i;
    float d = b * b - 4 * a * c;

    if (d >= 0)
    {
        x1 = (-b - sqrt(d)) / (2 * a);
        x2 = (-b + sqrt(d)) / (2 * a);

        if(d == 0)
            printf("Tem uma raiz dupla: %f\n", x1);
        else
            printf("As raizes sao: %f %f\n", x1, x2);
    } 
    else
    {
        x1 = -b / (2 * a);
        i = sqrt(-d) / (2 * a);

        printf("Tem raizes complexas: %.4f+%.4fi e %.4f-%.4fi\n", x1, i, x1, i);
    }
}

int main()
{
    int a, b, c;
    printf("Introduza o valor de a b c: "); scanf("%d %d %d", &a, &b, &c);
    solve_quad(a, b, c);
}