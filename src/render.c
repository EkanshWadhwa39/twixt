#include "render.h"

#define ANSI_RED   "\x1b[31m"
#define ANSI_BLUE  "\x1b[34m"
#define ANSI_RESET "\x1b[0m"

void render_board(const GameState *g)
{
    printf("\n    ");
    printf("0");
    printf(" ");
    for (int y = 1; y < BOARD_SIZE; y++)
        printf("%2d ", y);
    printf("\n");

    for (int x = 0; x < BOARD_SIZE; x++)
    {
        printf("%2d ", x);
        for (int y = 0; y < BOARD_SIZE; y++)
        {
            char c = g->board[x][y].pinColor;

            if (c == 'R')
                printf(ANSI_RED " R " ANSI_RESET);
            else if (c == 'B')
                printf(ANSI_BLUE " B " ANSI_RESET);
            else
                printf(" . ");
        }
        printf("\n");
    }
    printf("\n");
}
