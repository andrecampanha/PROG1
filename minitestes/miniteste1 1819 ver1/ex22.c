#include <stdio.h>

float calcula(float valor1, float valor2, char grandeza)
{
    switch (grandeza)
    {
    case 'V':
        return valor1 * valor2;
    case 'R':
        return valor2 / valor1;
    case 'I':
        return valor1 / valor2;
    }
    return 0;
}

int main()
{
    float v1, v2, res;
    char uni;

    while(scanf("%f %f %c", &v1, &v2, &uni) == 3)
    {
        res = calcula(v1, v2, uni);
        switch (uni)
        {
        case 'V':
            printf("%.2f V\n", res);
            break;
        case 'R':
            printf("%.2f Ohm\n", res);
            break;
        case 'I':
            printf("%.2f A\n", res);
            break;
        }
    }




}