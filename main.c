#include <stdio.h>
#include "myheader.h"

int main()
{
    int rows;
    int cols;
    char **board = buildboard(&rows, &cols);

    printboard(rows, cols, board);

    while (1)
    {
        int rowchoice;
        int colchoice;

        while (1)
        {
            printf("Choose a row (1-%d): ", rows);
            scanf("%d", &rowchoice);

            if ((rowchoice < 1) || (rowchoice > rows))
            {
                fprintf(stderr, "Error: Please enter a row between 1 and %d\n", rows);
            }
            else
            {
                rowchoice--;
                break;
            }
        }

        while (1)
        {
            printf("Choose a column (1-%d): ", cols);
            scanf("%d", &colchoice);

            if ((colchoice < 1) || (colchoice > cols))
            {
                fprintf(stderr, "Error: Plese enter a column between 1 and %d\n", cols);
            }
            else
            {
                colchoice--;
                break;
            }
        }
    }
}