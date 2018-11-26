#include <stdio.h>

int readArray(int v[])
{
    int len = 0, val;
    while(len < 100)
    {
        scanf("%d", &val);
        if(val == -1) break;
        v[len] = val;
        len++;
    }
    return len;
}

void printArray(int v[], int len)
{
    for(int i = 0; i < len; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main()
{
    int v1[100], v2[100];
    int len;

    len = readArray(v1);
    printArray(v1, len);

    for(int i = 0; i < len; i++)
        v2[i] = v1[len - 1 - i];

    printArray(v2, len);
}