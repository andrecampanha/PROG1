#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_TENTATIVAS 100
#define NUM_NAIPES 4
#define NUM_CARTAS 13

typedef struct {
	char nome [50];
	int pontos;
} jogador;

typedef struct {
	char valor;
	char naipe;
} carta;

char valores[NUM_CARTAS] = {'2','3','4','5','6','7','8','9','d','j','q','k','a'};
char naipes[NUM_NAIPES] = {'C','E','O','P'};

int valorCarta(carta c)
{
    for(int i = 0; i < NUM_CARTAS; i++)
    {
        if(valores[i] == c.valor) return i;
    }
    return -1;
}

/*** funcoes sobre cartas ***/
void criaBaralho(carta *baralho)
{
    carta *c;
	for(int i = 0; i < NUM_NAIPES; i++)
    {
        for(int j = 0; j < NUM_CARTAS; j++)
        {
            c = baralho + i * NUM_CARTAS + j;
            c->naipe = naipes[i];
            c->valor = valores[j];
        }
    }
}

void baralha(carta *baralho)
{
    int shuffles = rand() % 100 + 100;
    int p1, p2;
    carta temp;
	for(int i = 0; i < shuffles; i++)
    {
        p1 = rand() % (NUM_CARTAS * NUM_NAIPES);
        p2 = rand() % (NUM_CARTAS * NUM_NAIPES);
        temp = baralho[p1];
        baralho[p1] = baralho[p2];
        baralho[p2] = temp;
    }
}

carta escolheCarta(carta *baralho)
{
	int n=NUM_CARTAS*NUM_NAIPES;
	return baralho[rand() / (RAND_MAX / (n  + 1))];
}

int comparaCarta(carta c1, carta c2)
{
    if(c1.valor == c2.valor) return 0;
    int v1 = valorCarta(c1), v2 = valorCarta(c2);
    if(v1 > v2) return 1;
    else return -1;
}

void imprimeCarta(jogador j, carta c)
{
	printf("A carta para o jogador %s é: %c%c\n", j.nome, c.valor, c.naipe);
}

void imprimeBaralho(carta* baralho)
{
	int i,j;
	for(i=0; i < NUM_NAIPES*NUM_CARTAS; i++){
		if(i%NUM_CARTAS==0 && i>0)
			printf("\n");
		printf("%c%c ", baralho[i].valor, baralho[i].naipe);
	}
	printf("\n\n");
}

/*** funcoes sobre jogadores ***/
jogador criaJogador(char* nome)
{
	jogador j;
	strcpy(j.nome,nome);
	j.pontos=20;
	return j;
}

void imprimeJogador(jogador j)
{
	printf("Jogador %s com %d pontos.\n", j.nome, j.pontos);
}

void vencedor(jogador j1, jogador j2)
{
	if(j1.pontos > j2.pontos)
		printf("O Jogador %s venceu!\n", j1.nome);
	else if(j1.pontos < j2.pontos)
		printf("O Jogador %s venceu!\n", j2.nome);
	else
		printf("O jogo terminou em empate!\n");
}

int main()
{
	char nome1[50], nome2[50];
	jogador jog1, jog2;
	int tentativas = 0;
	carta baralho [NUM_CARTAS*NUM_NAIPES] = {0};

	srand(time(NULL));

	/* JOGADORES */
	printf("Introduza o nome do jogador 1: ");
	scanf("%s",nome1);
	printf("Introduza o nome do jogador 2: ");
	scanf("%s",nome2);
	jog1 = criaJogador(nome1);
	jog2 = criaJogador(nome2);

	/* BARALHO */
	criaBaralho(baralho);
	imprimeBaralho(baralho);
	baralha(baralho);
	imprimeBaralho(baralho);

	/* JOGO */
	while(tentativas < NUM_TENTATIVAS)
	{
		carta c1 = escolheCarta(baralho);
		carta c2 = escolheCarta(baralho);

		imprimeCarta(jog1,c1);
		imprimeCarta(jog2,c2);

		jog1.pontos += comparaCarta(c1,c2);
		jog2.pontos += comparaCarta(c2,c1);

		imprimeJogador(jog1);
		imprimeJogador(jog2);

		if(jog1.pontos == 0 || jog2.pontos == 0)
			break;

		tentativas++;
	}

	vencedor(jog1,jog2);
}