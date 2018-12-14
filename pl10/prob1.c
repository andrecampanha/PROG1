#include <stdio.h>
#include <string.h>

void inverte(char *strOriginal, char *strInvertida)
{
    int len = strlen(strOriginal) - 1;
    for(int i = 0; i < len; i++)
    {
        strInvertida[i] = strOriginal[len - i - 1];
    }
}

int main()
{
    char str[100], str2[100];
    printf("Escreva uma frase: "); fgets(str, 100, stdin);
    inverte(str, str2);
    printf(" A frase invertida e \"%s\"\n", str2);
}