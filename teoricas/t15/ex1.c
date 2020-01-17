#include <stdio.h>
int find(int v[], int x, int n, int *p)
/* p contém a posição onde o elemento foi encontrado */
/* retorna 1 se x foi encontrado; 0 no caso contrário */
{
    *p = 0;
    /* busca começa em 0 */
    while (v[*p] != x && *p < n)
        (*p)++;
    if (*p != n)
        return 1;
    /* encontrou */
    else
        return 0;
    /* não encontrou */
}

int binarySearch(int v[], int start, int end, int x)
{
    int avg = (end - start) / 2;
    if(v[avg] == x) return avg;
    else if(v[avg] < x) return binarySearch(v, start, avg - 1, x);
    else return binarySearch(v, avg + 1, end, x);
}

int main()
{
    int pos, x[5] = {2, 3, 4, 5, 9};
    if (find(x, -3, 5, &pos))
        printf("%d\n", pos);
    /* escreve 2
 */
    if (find(x, 9, 5, &pos))
        printf("%d\n", pos);
    /* nao escreve */

    printf("%d\n", binarySearch(x, 0, 5, 4));
}
