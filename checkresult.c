#include <stdio.h>

#define WON 1
#define TIE 2

int checkresult(int sidelen, char **board, int rowchoice, int colchoice, char turn)
{
    static int movecount = 0;

    if (++movecount > ((sidelen - 1) * 2)) // minimum moves for a win
    {
        // check col
        for (int i = 0; i < sidelen; i++)
        {
            if (board[i][colchoice] != turn)
            {
                break;
            }

            if (i == sidelen - 1)
            {
                printf("Col\n");
                return WON;
            }
        }

        // check row
        for (int i = 0; i < sidelen; i++)
        {
            if (board[rowchoice][i] != turn)
            {
                break;
            }

            if (i == sidelen - 1)
            {
                printf("Row\n");
                return WON;
            }
        }

        // check diagonal
        if (rowchoice == colchoice)
        {
            for (int i = 0; i < sidelen; i++)
            {
                if (board[i][i] != turn)
                {
                    break;
                }

                if (i == sidelen - 1)
                {
                    printf("Diag\n");
                    return WON;
                }
            }
        }

        // check anti-diagonal
        if (rowchoice + colchoice == sidelen - 1)
        {
            for (int i = 0; i < sidelen; i++)
            {
                if (board[(sidelen - 1) - i][i] != turn)
                {
                    break;
                }

                if (i == sidelen - 1)
                {
                    printf("AntiDiag\n");
                    return WON;
                }
            }
        }

        // check if moves are exhausted (ends in tie)
        if (movecount == sidelen * sidelen)
        {
            return TIE;
        }
    }

    return 0;
}