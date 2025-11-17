#include "board.h"

void init_game(GameState *g)
{
    g->currentPlayer = RED;

    int id = 0;
    for (int x = 0; x < BOARD_SIZE; x++)
        for (int y = 0; y < BOARD_SIZE; y++)
        {
            g->board[x][y].id = id++;
            g->board[x][y].hasPin = 0;
            g->board[x][y].pinColor = NONE;
        }
}

int pos_to_id(int x, int y) {
    return x * BOARD_SIZE + y;
}

void id_to_pos(int id, int *x, int *y) {
    *x = id / BOARD_SIZE;
    *y = id % BOARD_SIZE;
}

int place_pin(GameState *g, int x, int y)
{
    if (x < 0 || x >= BOARD_SIZE || y < 0 || y >= BOARD_SIZE)
        return 0;

    if (g->board[x][y].hasPin)
        return 0;

    g->board[x][y].hasPin = 1;
    g->board[x][y].pinColor = g->currentPlayer;
    return 1;
}
