#include <stdio.h>

void printboard(int sidelen, char **board)
{
    for (int i = 0; i < sidelen; i++)
    {
        for (int j = 0; j < sidelen; j++)
        {
            printf("%c ", board[i][j]);
        }
        
        printf("\n");
    }
}