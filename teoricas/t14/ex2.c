#include <stdio.h>

int main()
{
    int v1[5], v2[5], i, j;
    printf("v1: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &v1[i]);
    }

    printf("v2: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &v2[i]);
    }

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(v1[i] == v2[j]) {
                printf("%d ", v1[i]);
                break;
            }
        }
    }
    printf("\n");


}