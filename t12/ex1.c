#include <stdio.h>

int main()
{
    int t1 = 0, t2 = 0;
    int p1, p2;

    for(int i = 0; i < 10; i++)
    {
        printf("Partida #%d (equipa1 equipa2): ", i + 1); scanf("%d %d", &p1, &p2);

        if(p1 > 60)
        {
            t1++;
            if(p1 >= 90)
                t1++;
        }
        else
        {
            t2++;
            if (p2 >= 90)
                t2++;
        }
    }

    printf("A %s equipa ganhou %d-%d\n", (t1 > t2 ? "nossa" : "outra"), t1, t2);
}