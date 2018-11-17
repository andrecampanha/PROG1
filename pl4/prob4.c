#include <stdio.h>

int main()
{
    int num;
    printf("Insira um numero? "); scanf("%d", &num);

    while(num > 1)
    {
        for(int i = 2; i <= num; i++)
        {
            if(num % i == 0)
            {
                printf("%d ", i);
                num /= i;
                break;
            }
        }
    }
    printf("\n");
}