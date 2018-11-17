#include <stdio.h>

int main()
{
    int num, cont = 0;
    printf("Introduza um nº: "); scanf("%d", &num);

    while(num % 2 == 0 && num != 0)
    {
        num /= 2;
        cont++;
    }
    printf("%d\n", cont);
}