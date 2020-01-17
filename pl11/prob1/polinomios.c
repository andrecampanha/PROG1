#include <stdio.h>
#include "polinomios.h"

#define MAX_SIZE 10

int lerPoli(int *poli)
{
    int n = 0;
    while(n < MAX_SIZE)
    {
        printf("Grau %d: ", n);
        if(scanf("%d", &poli[n]) != 1) break;
        n++;
    }
    getchar();
    getchar();
    for(int i = n; i < MAX_SIZE; i++)
    {
        poli[i] = 0;
    }
    return n;
}

void escrevePoli(int *poli, int grau)
{
    for(int i = grau - 1; i >= 0; i--)
    {
        printf("%d", poli[i]);
        if(i != 0) printf("x^%d+", i);
    }
    printf("\n");
}

void adicionaPoli(int *p1, int *p2, int *pRes, int maiorGrau)
{
    for(int i = 0; i < maiorGrau; i++)
    {
        pRes[i] = p1[i] + p2[i];
    }
}

float calc(int *poli, int grau, float x)
{
    float res = poli[0];
    for(int i = 1; i < grau; i++)
    {
        res += poli[i] * x;
        x *= x;
    }
    return res;
}