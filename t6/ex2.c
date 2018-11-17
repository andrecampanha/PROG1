#include <stdio.h>
#include <limits.h>

int main()
{
    int max = INT_MIN, max_pos = 0;
    int i = 0, n = max;

    while(n != 0)
    {
        printf("Introduza um número: ");
        scanf("%d", &n);

        if(n > max && n != 0) {
            max = n;
            max_pos = i;
        }
        i++;
    }

    printf("Maior número: %d (Posição %d)\n", max, max_pos);
}
