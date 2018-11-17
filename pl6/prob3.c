#include <stdio.h>

int contDigito(int num, int dig)
{
    int cont = 0;
    while (num != 0)
    {
        if (num % 10 == dig)
            cont++;
        num /= 10;
    }
    return cont;
}

int main()
{
    int num, dig;
    printf("Introduza um numero inteiro: "); scanf("%d", &num);
    printf("Introduza um digito: "); scanf("%d", &dig);

    printf("O digito %d aparece %d vezes no numero %d\n", dig, contDigito(num, dig), num);
}