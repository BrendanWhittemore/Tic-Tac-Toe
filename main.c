#include <stdio.h>
#include <stdlib.h>
#include "myheader.h"

#define WON 1
#define TIE 2

int main()
{
    int sidelen;
    char **board = buildboard(&sidelen);
    char turn = 'X'; // initial player

    while (1)
    {
        int rowchoice;
        int colchoice;

        printboard(sidelen, board);

        while (1)
        {
            while (1)
            {
                printf("Player %c: Choose a row (1-%d): ", turn, sidelen);
                scanf("%d", &rowchoice);

                if ((rowchoice < 1) || (rowchoice > sidelen))
                {
                    fprintf(stderr, "Error: Please enter a row between 1 and %d\n", sidelen);
                }
                else
                {
                    rowchoice--; // adjust to be zero-indexed
                    break;
                }
            }

            while (1)
            {
                printf("Player %c: Choose a column (1-%d): ", turn, sidelen);
                scanf("%d", &colchoice);

                if ((colchoice < 1) || (colchoice > sidelen))
                {
                    fprintf(stderr, "Error: Please enter a column between 1 and %d\n", sidelen);
                }
                else
                {
                    colchoice--; // adjust to be zero-indexed
                    break;
                }
            }

            if (board[rowchoice][colchoice] != '-')
            {
                printf("That spot is already taken! Enter a new spot.\n");
            }
            else
            {
                board[rowchoice][colchoice] = turn;
                break;
            }
        }

        switch (checkresult(sidelen, board, rowchoice, colchoice, turn))
        {
        case WON:
        {
            printboard(sidelen, board);
            printf("Congratulations Player %c, you have won!\n", turn);
            exit(0);
            break;
        }
        case TIE:
        {
            printboard(sidelen, board);
            printf("The game ended in a draw!\n");
            exit(0);
            break;
        }
        }

        switch (turn) // change players for next turn
        {
        case 'X':
        {
            turn = 'O';
            break;
        }
        case 'O':
        {
            turn = 'X';
            break;
        }
        }
    }
}