#include <stdio.h>

int *vmaior(int *valor1, int *valor2)
{
    return *valor1 > *valor2 ? valor1 : valor2;
}

int main()
{
    int v1, v2, *vm;

    printf("Insira dois valores: "); scanf("%d %d", &v1, &v2);

    vm = vmaior(&v1, &v2);
    printf("Endereço do maior: %p\n", vm);
    printf("Valor: %d\n", *vm);
}