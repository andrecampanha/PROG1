#include <stdio.h>

char converte(char c, int shift)
{
    int r = (c + shift - 'a') % 26;
    return (r < 0 ? 'z' + r + 1 : r + 'a');
}

int main()
{
    char c;
    int shift;
    scanf("carater e shift? "); scanf("%c %d", &c, &shift);

    printf("resultado: %c\n", converte(c, shift));
}

