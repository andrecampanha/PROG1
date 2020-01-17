#include <stdio.h>

int main()
{
    int a, b, res;
    char oper, minus_oper = ' ';

    printf("Escolha a operacao: "); scanf("%c", &oper);
    getchar();

    if(oper == '-')
    {
        printf("Operador (u)nario ou (b)inario? "); scanf("%c", &minus_oper);
        getchar();
    }

    printf("Introduza um operando: "); scanf("%d", &a);

    if(minus_oper != 'u')
    {
        printf("Introduza o outro operando: "); scanf("%d", &b);
    }

    switch(oper) {
        case '+':
            res = a + b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            res = a / b;
            break;
        case '%':
            res = a % b;
            break;
        case '-':
            if(minus_oper == 'u') res = -a;
            else res = a - b;
            break;
    }

    printf("O resultado e igual a: %d\n", res);
}