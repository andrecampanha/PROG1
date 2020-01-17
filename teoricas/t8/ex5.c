#include <stdio.h>

int main() 
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j <= i; j+=2)
            printf("%d", j);
        printf("\n");
    }
}