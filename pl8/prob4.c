#include <stdio.h>
#define LEN 10

void preencher_vetor(float v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Introduza o elemento %d: ", i + 1);
        scanf("%f", &v[i]);
    }
}


void imprimir_vetor(float v[], int n)
{
    printf("{ ");
    for (int i = 0; i < n; i++)
    {
        printf("%f ", v[i]);
    }
    printf("}");
}

float avg(float x[])
{
    float avg = 0;
    for (int i = 0; i < LEN; i++)
        avg += x[i];
    return avg / LEN;
}

float max(float x[])
{
    int max = 0;
    for (int i = 1; i < LEN; i++)
        if (x[i] > x[max]) max = i;

    return x[max];
}

float min(float x[])
{
    int min = 0;
    for (int i = 1; i < LEN; i++)
        if (x[i] < x[min]) min = i;

    return x[min];
}

int main()
{
    float x[LEN];
    preencher_vetor(x, LEN);
    printf("Média: %f\n", avg(x));
    printf("Maximo: %f\n", max(x));
    printf("Minimo: %f\n", min(x));
    printf("Vetor: ");
    imprimir_vetor(x, LEN);
    printf("\n");
}