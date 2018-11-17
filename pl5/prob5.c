#include <stdio.h>
#include <math.h>

float dist(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

char colisao(float x1, float y1, float r1, float x2, float y2, float r2)
{
    return dist(x1, y1, x2, y2) < r1 + r2;
}

int main()
{
    float x1, y1, r1;
    float x2, y2, r2;
    printf("Posicao (x, y) e raio da bola 1? "); scanf("%f %f %f", &x1, &y1, &r1);
    printf("Posicao (x, y) e raio da bola 2? "); scanf("%f %f %f", &x2, &y2, &r2);

    printf("As duas bolas %sestao em colisao.\n", colisao(x1, y1, r1, x2, y2, r2) ? "" : "não ");
}