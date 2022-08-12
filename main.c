#include <stdio.h>
#include "myheader.h"

int main()
{
    int rows;
    int cols;
    char **board = buildboard(&rows, &cols);

    printboard(rows, cols, board);
}