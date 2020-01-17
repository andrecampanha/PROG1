#include <stdio.h>
#include <string.h>
#include "artigos.h"

void leArtigo(artigo *item)
{
    printf("Designação: ");
    fgets(item->designacao, MAX_STRING, stdin);
    item->designacao[strlen(item->designacao) - 1] = '\0';

    printf("Marca: ");
    fgets(item->marca, MAX_STRING, stdin);
    item->marca[strlen(item->marca) - 1] = '\0';

    printf("Modelo: ");
    fgets(item->modelo, MAX_STRING, stdin);
    item->modelo[strlen(item->modelo) - 1] = '\0';

    printf("Preço: ");
    scanf("%f", &(item->preco));

    printf("Quantidade: ");
    scanf("%d", &(item->qnt));
    getchar();
}

int totalArtigos(artigo armazem[], int n, char marca[], char modelo[])
{
    for(int i = 0; i < n; i++)
    {
        if(strcmp(armazem[i].marca, marca) == 0
            && strcmp(armazem[i].modelo, modelo) == 0)
            return armazem[i].qnt;
    }
    return 0;
}

void alertaArtigos(artigo armazem[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(armazem[i].qnt < 10)
            printf("Alerta de stock: %s %s (marca %s), %d restantes\n",
                armazem[i].designacao, armazem[i].modelo, armazem[i].modelo, armazem[i].qnt);
    }
}

void ordenaArtigos(artigo armazem[], int n)
{
    artigo temp;
    for(int i = 0; i < n; i++)
    {
        artigo *min = &armazem[i];
        for(int j = i + 1; j < n; j++)
        {
            if(armazem[j].qnt < min->qnt)
                min = &armazem[j]; 
        }
        temp = *min;
        *min = armazem[i];
        armazem[i] = temp;
    }
}
