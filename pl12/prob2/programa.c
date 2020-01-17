#include <stdio.h>
#include <string.h>

#define PATH "discos.txt"

int main()
{
    char linha[200];
    int cont = 0;
    FILE *f;
    f = fopen(PATH, "r");

    while(fgets(linha, 200, f) != NULL)
    {
        strtok(linha, '|');
    }
}