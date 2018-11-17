#include <stdio.h>

void retangulo(char ch, int l, int c)
{
    for(int i = 0; i < l; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(i == 0 || i == l - 1 || j == 0 || j == c - 1)
                printf("%c", ch);
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    char ch;
    int l, c;
    printf("Introduza um carater: "); scanf("%c", &ch);
    printf("Introduza o número de linhas: "); scanf("%d", &l);
    printf("Introduza o número de colunas: "); scanf("%d", &c);

    retangulo(ch, l, c);
}