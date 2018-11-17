#include <stdio.h>
#include <string.h>

int main()
{
    int a[3], temp;
    printf("Insira 3 numeros: "); scanf("%d %d %d", &a[0], &a[1], &a[2]);

    for(int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("%d %d %d\n", a[0], a[1], a[2]);
}