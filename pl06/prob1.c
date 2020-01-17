#include <stdio.h>

int main()
{
    int var1 = 5;
    char var2 = 'a';

    int *ptr1 = &var1;
    char *ptr2;
    ptr2 = &var2;

    printf("var1 tem o endereco %p e o valor %d\n", ptr1, * ptr1);
    printf("var2 tem o endereco %p e o valor %d\n", ptr2, *ptr2);

    printf("tamanhos: char %lu char* %lu\n", sizeof(char), sizeof(char*));
    printf("tamanhos: int %lu int* %lu\n", sizeof(int), sizeof(int*));

    printf("ptr1 = %p; ptr1 + 1 = %p\n", ptr1, ptr1 + 1);
    printf("ptr2 = %p; ptr2 + 1 = %p\n", ptr2, ptr2 + 1);
}