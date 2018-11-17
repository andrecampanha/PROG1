#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    int m, s, t, mt = INT_MAX, mv, avg = 0;
    printf("Nº de voltas: "); scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &m, &s);
        t = m * 60 + s;
        
        if(t < mt)
        {
            mt = t;
            mv = i + 1;
        }

        avg += t;

    }

    avg /= n;

    printf("Melhor tempo: %dm %ds (%dª volta)\n", mt / 60, mt % 60, mv);
    printf("Média tempo: %dm %ds\n", avg / 60, avg % 60);


}