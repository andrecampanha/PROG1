#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PATH "discos.txt"

typedef struct {
    char pos[5];
    char ant[5];
    int sem;
    char gal[5];
    char titulo[200];
    char artista[200];
    char etiqueta[200];
    char editora[200];
} disco;

void ler_discos(char *ficheiro, disco discos[], int *tamanho)
{
    char linha[500];
    char *token;

    FILE *f;
    f = fopen(ficheiro, "r");

    if(f == NULL) return;

    while (fgets(linha, 500, f) != NULL)
    {
        token = strtok(linha, "|"); // POS
        strcpy(discos[*tamanho].pos, token);
        token = strtok(NULL, "|"); // ANT
        strcpy(discos[*tamanho].ant, token);
        token = strtok(NULL, "|"); // SEM
        discos[*tamanho].sem = atoi(token);
        token = strtok(NULL, "|"); // GAL
        strcpy(discos[*tamanho].gal, token);
        token = strtok(NULL, "|"); // TITULO
        strcpy(discos[*tamanho].titulo, token);
        token = strtok(NULL, "|"); // ARTISTA
        strcpy(discos[*tamanho].artista, token);
        token = strtok(NULL, "|"); // ETIQUETA
        strcpy(discos[*tamanho].etiqueta, token);
        token = strtok(NULL, "|"); // EDITORA
        strcpy(discos[*tamanho].editora, token);
        discos[*tamanho].editora[strlen(discos[*tamanho].editora) - 1] = '\0';
        (*tamanho)++;
    }

    fclose(f);
}

int main()
{
    disco discos[200];
    int tamanho;

    ler_discos(PATH, discos, &tamanho);

    for(int i = 0; i < tamanho; i++)
    {
        if(discos[i].sem <= 4) continue;

        printf("%s | %s | %d | %s | %s | %s | %s | %s\n", discos[i].pos, discos[i].ant, discos[i].sem,
            discos[i].gal, discos[i].titulo, discos[i].artista, discos[i].etiqueta, discos[i].editora);
    }
}