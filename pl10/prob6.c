#include <stdio.h>

char converte(char c, int shift)
{
    /*if(c + shift > 'z')
    {
        shift -= 'z' - c + 1;
        c = 'a';
    }
    else if(c + shift < 'a')
    {
        shift -= c - 'a' - 1;
        c = 'z';
    }*/
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

