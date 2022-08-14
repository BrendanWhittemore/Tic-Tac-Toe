#include <stdio.h>
#include <stdlib.h>

char **buildboard(int *rows, int *cols)
{
    char **board;

    while (1)
    {
        printf("Enter the number of rows: ");
        scanf("%d", rows);

        if (*rows < 1)
        {
            fprintf(stderr, "Error: Number of rows must be > 0\n");
        }
        else
        {
            break;
        }
    }

    board = (char **)malloc((*rows) * sizeof(char *));
    if (board == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(1);
    }

    while (1)
    {
        printf("Enter the number of columns: ");
        scanf("%d", cols);

        if (*cols < 1)
        {
            fprintf(stderr, "Error: Number of columns must be > 0\n");
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < *rows; i++)
    {
        board[i] = (char *)malloc((*cols) * sizeof(char));
        if (board[i] == NULL)
        {
            fprintf(stderr, "Error: Memory allocation failed\n");
            exit(1);
        }

        for (int j = 0; j < *cols; j++)
        {
            board[i][j] = '-';
        }
    }

    return board;
}