#include <stdio.h>

void preencher_vetor(float v[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Introduza o elemento %d: ", i + 1); scanf("%f", &v[i]);
    }
}

float somatorio_vetor(float v[], int n)
{
    float sum = 0;
    for(int i = 0; i < n; i++) sum += v[i];
    return sum;
}

void imprimir_vetor(float v[], int n){
    printf("{ ");
    for(int i = 0; i < n; i++)
    {
        printf("%f ", v[i]);
    }
    printf("}");
}

int main()
{
    int n;
    do {
        printf("Quantos elementos pretende armazenar? "); scanf("%d", &n);
        if(n > 15)
            printf("O numero de elementos esta limitado a 15!\n");
        else break;
    } while(1);

    float v[n];

    preencher_vetor(v, n);
    printf("O vetor lido foi: ");
    imprimir_vetor(v, n);
    printf("\ne a soma dos seus elementos é %f\n", somatorio_vetor(v, n));
}