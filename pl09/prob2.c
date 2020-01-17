#include <stdio.h>

int compacta(char orig[], int N, char dst[])
{
    int compN = 0;
    dst[0] = orig[0];
    for(int i = 1; i < N; i++)
    {
        if(orig[i] != dst[compN]) dst[++compN] = orig[i];
    }
    return compN + 1;
}

int main()
{
    char orig[100], dest[100];
    int N = -1, compN;
    do
    {
        N++;
        scanf("%c", &orig[N]);
    } while(orig[N] != '.' && N < 100);

    compN = compacta(orig, N, dest);
    printf("Compactado (%d->%d): ", N, compN);
    for(int i = 0; i < compN; i++) printf("%c", dest[i]);
    printf("\n");
}