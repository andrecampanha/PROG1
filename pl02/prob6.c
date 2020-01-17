#include <stdio.h>

int main()
{
    int time;
    printf("Quantos segundos? ");
    scanf("%d", &time);

    int d, h, m, s;
    s = time;
    d = s / (3600 * 24);
    s %= 3600 * 24;
    h = s / 3600;
    s %= 3600;
    m = s / 60;
    s %= 60;

    printf("%d segundos correspondem a %d dias, %d horas, %d minutos, %d segundos\n", time, d, h, m, s);
}