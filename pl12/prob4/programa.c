#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING 100

int main()
{
    FILE *file;
    char filePath[MAX_STRING];
    printf("Ficheiro? "); scanf("%s", filePath);

    file = fopen(filePath, "r");
    if(file == NULL)
    {
        printf("Ficheiro inválido!\n");
        return 0;
    }
    
    int nLinhas = 0, nChar = 0;
    int f = 1;

    char c;
    while((c = getc(file)) != EOF)
    {
        if(c == '\n' && f == 0)
        {
            nLinhas++;
            f++;
        }
        else if(c != '\n')
        {
            f = 0;
            if(c != ' ' && c != '\t')
                nChar++;
        }
    }
    if(f == 0) nLinhas++;

    printf("Número de linhas de código (excluir linhas vazias): %d\n", nLinhas);
    printf("Tamanho médio de cada linha de código: %.2f\n", (float) nChar / nLinhas);
    printf("Número total de caracteres (excluir mudanças de linha, espaços e tabs): %d\n", nChar);
}