#include <stdio.h>
#include "polinomios.h"

int main()
{
    int p1[10], p2[10], p3[10], grau1, grau2, grau3;
    float x;
    grau1 = lerPoli(p1);
    grau2 = lerPoli(p2);

    grau3 = grau1 > grau2 ? grau1 : grau2;
    adicionaPoli(p1, p2, p3, grau3);

    printf("Polinómio soma: ");
    escrevePoli(p3, grau3);

    printf("Valor a calcular: "); scanf("%f", &x);

    printf("p(x) = %f\n", calc(p3, grau3, x));
}