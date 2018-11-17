#include <stdio.h>
#define PI 3.1416

int main()
{
    float r;
    printf("Raio? ");
    scanf("%f", &r);

    printf("Perimetro = %.4f\n", 2 * PI * r);
    printf("Area = %.4f\n", PI * r * r);
}