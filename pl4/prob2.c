#include <stdio.h>
#include <limits.h>

int main()
{
    int sum = 0, cont = 0, num, max = INT_MIN, min = INT_MAX;

    while(scanf("%d", &num) == 1)
    {
        sum += num;
        if(num > max) max = num;
        if(num < min) min = num;
        cont++;
    }

    printf("A media dos numeros e %.2f, o maximo e %d e o minimo e %d.\n", (float)sum / cont, max, min);
}