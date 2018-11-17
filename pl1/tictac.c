#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int P_BLANK = 0, P_X = 1, P_O = 2;

int board[9];
int turn;

void clear()
{
    system("clear");
}

char* valueToName(int v) 
{
    switch(v)
    {
        case 1:
            return "X";
        case 2:
            return "O";
        default:
            return " ";
    }
}

void resetBoard()
{
    for (int i = 0; i < sizeof(board); i++)
    {
        board[i] = 0;
    }
    turn = P_X;
}

void renderBoard()
{
    clear();
    printf("   Tic Tac Toe \n\n");
    printf("    1   2   3   x\n\n");
    for(int y = 0; y < 3; y++)
    {
        printf("%d  ", y + 1);
        for(int x = 0; x < 3; x++)
        {
            int p = board[x + (y * 3)];
            printf(" %s %s", valueToName(p), x < 2 ? "|" : "");
        }
        if(y < 2)
            printf("\n   --- --- ---");

        printf("\n");
    }
    printf("\ny\n");
    printf("\n\n");
}

void makePlay() 
{
    int x, y, p;

    printf("Jogador: %s\n", valueToName(turn));
    printf("Jogada? (x, y): ");
    scanf("%d %d", &x, &y);
    x--;
    y--;
    p = x + y * 3;

    if(p < 0 || p >= 9 || board[p] != P_BLANK) return;

    board[p] = turn;
    turn = (turn == P_X ? P_O : P_X);
}

int verifyWinState() 
{
    for(int x = 0; x < 3; x++)
    {
        if(board[x] != 0 && board[x] == board[x + 3] && board[x] == board[x + 6])
            return board[x];
    }

    for(int y = 0; y < 3; y++)
    {
        if(board[y * 3] != 0 && board[y * 3] == board[y * 3 + 1] && board[y * 3] == board[y * 3 + 2])
            return board[y * 3];
    }

    if(board[0] != 0 && board[0] == board[4] && board[0] == board[8]) return board[0];
    if(board[2] != 0 && board[2] == board[4] && board[2] == board[6]) return board[2];

    return 0;

}

int main() 
{
    int winner;
    resetBoard();
    while(1)
    {
        renderBoard();
        makePlay();

        if((winner = verifyWinState()))
        {
            clear();
            printf("\n\n%s GANHOU!!!!!\n", valueToName(winner));
            getchar();
            winner = 0;
            resetBoard();
        }
    }
    return 0;
}