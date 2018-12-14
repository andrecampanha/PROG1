#include <stdio.h>

int contaRepeticao(int v[], int tamanhoVetor, int numero)
{
    int cont = 0, mCont = 0;

    for(int i = 0; i < tamanhoVetor; i++)
    {
        if(v[i] == numero)
            cont++;
        else
        {
            if(cont > mCont) mCont = cont;
            cont = 0;
        }
    }
    if (cont > mCont)
        mCont = cont;
    return mCont;
}

int main()
{
    int v[100];
    int tam = 0, n;
    do {
        scanf("%d", &n);
        if(n < 0) break;
        v[tam] = n;
        tam++;
    } while(tam <= 100);

    printf("Numero a pesquisar: "); scanf("%d", &n);

    printf("Maior sequencia com numeros %d tem tamanho %d\n", n, contaRepeticao(v, tam, n));
}