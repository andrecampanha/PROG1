#include <stdio.h>

#define N_ALUNOS 4

void ler_notas(float notas[][4], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Dados do aluno %d: ", i + 1);
        scanf("%f %f %f", &notas[i][0], &notas[i][1], &notas[i][2]);
        notas[i][3] = (float) (notas[i][1] + notas[i][2]) / 2;
    }
}

void escrever_dados(float notas[][4], int n)
{
    printf("Número\tNota 1\tNota2\tMedia\n");
    for(int i = 0; i < n; i++)
    {
        printf("%05d\t%d\t%d\t%.1f\n", (int)notas[i][0], (int)notas[i][1], (int)notas[i][2], notas[i][3]);
    }
}

int main()
{
    float notas[N_ALUNOS][4];
    ler_notas(notas, N_ALUNOS);

    escrever_dados(notas, N_ALUNOS);
}