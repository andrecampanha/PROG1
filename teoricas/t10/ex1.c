#include <stdio.h>

int main()
{
    int i;
    int *pi;
    char *pc;
    printf("Introduza um número inteiro: ");
    scanf("%d", &i);
    pi = &i;
    pc = (char *)pi;
    printf("%d:%d:%d:%d\n", *(pc + 3), *(pc + 2), *(pc + 1), *pc);
}