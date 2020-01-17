#include <stdio.h>

int main() 
{
    float f;
    scanf("%f", &f);

    int n = f + 0.5;
    int i = 2 - n % 2;

    printf("%d %d\n", n - i, n + i);
}