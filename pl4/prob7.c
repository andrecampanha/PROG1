#include <stdio.h>

int main()
{
    int a, e, i, o, u;
    a = e = i = o = u = 0;
    char c;

    printf("Qual é a frase? ");
    while((c = getchar()) != '.')
    {
        switch(c)
        {
            case 'a':
            case 'A':
                a++;
                break;
            case 'e':
            case 'E':
                e++;
                break;
            case 'I':
            case 'i':
                i++;
                break;
            case 'O':
            case 'o':
                o++;
                break;
            case 'U':
            case 'u':
                u++;
                break;
        }
    }

    printf("A - %d\n", a);
    printf("E - %d\n", e);
    printf("I - %d\n", i);
    printf("O - %d\n", o);
    printf("U - %d\n", u);
}