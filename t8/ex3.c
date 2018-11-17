#include <stdio.h>
#include <limits.h>

int main()
{
    int n, min = INT_MAX, val;

    printf("Indique o número de valores da sequência: "); scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        if(val < min)
            min = val;
        printf("Introduza um número: "); scanf("%d", &val);
    }

    printf("%d\n", min);
}