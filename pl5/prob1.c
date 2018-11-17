#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int limite_inferior, int limite_superior)
{
    return rand() % (limite_superior - limite_inferior + 1) + limite_inferior;
}

int main()
{
    int n, s = 0;
    printf("Quantos lancamentos? "); scanf("%d", &n);

    srand(time(NULL));

    while(n > 0)
    {
        if (aleatorio(1, 6) == 6)
            s++;
        n--;
    }

    printf("A face seis saiu %d vezes.\n", s);
}