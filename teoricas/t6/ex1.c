#include <stdio.h>
int main()
{
    int cont, nota = 0, total;
    float media;
    cont = -1;
    total = 0;
    do
    {
        total += nota;
        cont++;
        printf("Nota do aluno %d (-1 para terminar): ", cont);
        scanf("%d", &nota);
    } while (nota != -1);
    media = (float)total / cont;
    printf("Media da turma = %f\n", media);
}
