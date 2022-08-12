#include <stdio.h>
#include <stdlib.h>

char **buildboard(int *rows, int *cols)
{
    char **board;

    printf("Enter the number of rows: ");
    scanf("%d", rows);

    board = (char **)malloc((*rows) * sizeof(char *));
    if (board == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed");
        exit(1);
    }

    printf("Enter the number of columns: ");
    scanf("%d", cols);

    for (int i = 0; i < *rows; i++)
    {
        board[i] = (char *)malloc((*cols) * sizeof(char));
        if (board[i] == NULL)
        {
            fprintf(stderr, "Error: Memory allocation failed");
            exit(1);
        }

        for (int j = 0; j < *cols; j++)
        {
            board[i][j] = '-';
        }
    }

    return board;
}