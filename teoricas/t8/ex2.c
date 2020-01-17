#include <stdio.h>

int main()
{
    // 60 - 40
    //min - 40 50
    int MT, F, final;

    printf("Nota dos miniteste: "); scanf("%d", &MT);
    printf("Nota de frequência: "); scanf("%d", &F);

    if(MT < 40 || F < 50)
    {
        printf("Para o ano há mais...\n");
        return 0;
    }

    final = (0.4f * MT + 0.6f * F) / 5 + 0.5f;

    printf("Nota da cadeira: %d\n", final);
}
