#define MAX_STRING 50

typedef struct {
    char designacao[MAX_STRING], marca[MAX_STRING], modelo[MAX_STRING];
    float preco;
    int qnt;
} artigo;

void leArtigo(artigo *item);
int totalArtigos(artigo armazem[], int n, char marca[], char modelo[]);
void alertaArtigos(artigo armazem[], int n);
void ordenaArtigos(artigo armazem[], int n);