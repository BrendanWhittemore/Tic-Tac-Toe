#include <stdio.h>

void printboard(int rows, int cols, char **board)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%c ", board[i][j]);
        }
        
        printf("\n");
    }
}