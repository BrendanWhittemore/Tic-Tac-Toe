#include <stdio.h>
#include "myheader.h"

int main()
{
    int sidelen;
    char **board = buildboard(&sidelen);

    printboard(sidelen, board);

    while (1)
    {
        int rowchoice;
        int colchoice;

        while (1)
        {
            printf("Choose a row (1-%d): ", sidelen);
            scanf("%d", &rowchoice);

            if ((rowchoice < 1) || (rowchoice > sidelen))
            {
                fprintf(stderr, "Error: Please enter a row between 1 and %d\n", sidelen);
            }
            else
            {
                rowchoice--;
                break;
            }
        }

        while (1)
        {
            printf("Choose a column (1-%d): ", sidelen);
            scanf("%d", &colchoice);

            if ((colchoice < 1) || (colchoice > sidelen))
            {
                fprintf(stderr, "Error: Plese enter a column between 1 and %d\n", sidelen);
            }
            else
            {
                colchoice--;
                break;
            }
        }
    }
}