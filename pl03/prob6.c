#include <stdio.h>

int main()
{
    int x, y, quad;
    printf("Indique o ponto (x,y): "); scanf("%d %d", &x, &y);


    if(x == 0 || y == 0)
    {
        printf("O ponto não se encontra em nenhum quadrante\n");
        return 0;
    }
    else if (x > 0 && y > 0)
        quad = 1;
    else if (x < 0 && y > 0)
        quad = 2;
    else if (x < 0 && y < 0)
        quad = 3;
    else if (x > 0 && y < 0)
        quad = 4;

    printf("O ponto encontra-se no %dº quadrante.\n", quad);
}