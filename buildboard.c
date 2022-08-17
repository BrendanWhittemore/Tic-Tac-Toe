#include <stdio.h>
#include <stdlib.h>

char **buildboard(int *sidelen)
{
    char **board;

    while (1)
    {
        printf("Enter the size of the board (side length): ");
        scanf("%d", sidelen);

        if (*sidelen < 1)
        {
            fprintf(stderr, "Error: Side length must be > 0\n");
        }
        else
        {
            break;
        }
    }

    board = (char **)malloc((*sidelen) * sizeof(char *)); // allocate rows
    if (board == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(1);
    }

    for (int i = 0; i < *sidelen; i++)
    {
        board[i] = (char *)malloc((*sidelen) * sizeof(char)); // allocate cols
        if (board[i] == NULL)
        {
            fprintf(stderr, "Error: Memory allocation failed\n");
            exit(1);
        }

        for (int j = 0; j < *sidelen; j++) // assign initial values
        {
            board[i][j] = '-';
        }
    }

    return board;
}