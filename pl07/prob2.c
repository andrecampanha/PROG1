#include <stdio.h>

void troca(int *v1, int *v2)
{
    int temp;
    temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}

void ordena(int *valorA, int *valorB, int *valorC)
{
    if(*valorB < *valorA)
        troca(valorA, valorB);
    if(*valorC < *valorB)
        troca(valorC, valorB);
    if(*valorB < *valorA)
        troca(valorB, valorA);
}

int main()
{
    int v1, v2, v3;
    printf("Insira os valores a ordenar: "); scanf("%d %d %d", &v1, &v2, &v3);
    ordena(&v1, &v2, &v3);
    printf("Valores a, b, c ordenados por ordem crescente: %d %d %d\n", v1, v2, v3);
}