#include <stdio.h>

int main()
{
    float alt;
    char * q;
    printf("Qual a altura da pessoa? "); scanf("%f", &alt);

    if (alt < 1.3f)
        q = "baixíssima";
    else if (alt <= 1.6f)
        q = "baixa";
    else if (alt <= 1.75f)
        q = "mediana";
    else if (alt <= 1.9f)
        q = "alta";
    else
        q = "altíssima";

    printf("Essa pessoa é %s\n", q);
}