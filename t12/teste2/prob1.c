#include <stdio.h>

int main()
{
    int cFam, cFreg, cFregm35, freg;
    cFam = cFreg = cFregm35 = 0;

    while(scanf("%d", &freg) == 1)
    {
        cFreg++;
        cFam += freg;
        if(freg < 35) cFregm35++;

    }

    printf("Total de famílias com crianças de idade inferior a 6 anos: %d\n", cFam);
    printf("Freguesias com menos de 35 famílias com crianças de idade inferior a 6 anos: %d (%.2f%%)\n", cFregm35, ((float )cFregm35 / cFreg) * 100);
}