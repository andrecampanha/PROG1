#include <stdio.h>

int multiplicacao(int primeiroNumero, int segundoNumero)
{
    if(segundoNumero == 0) return 0;
    if(segundoNumero < 0) return -multiplicacao(primeiroNumero, -segundoNumero);
    return primeiroNumero + multiplicacao(primeiroNumero, segundoNumero - 1);
}

int main()
{
    int n1, n2;
    printf("N1 * N2: "); scanf("%d %d", &n1, &n2);

    printf("%d * %d = %d\n", n1, n2, multiplicacao(n1, n2));
}