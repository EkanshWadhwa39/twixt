#ifndef BOARD_H
#define BOARD_H

#include <stdio.h>

#define BOARD_SIZE 24

typedef enum {
    NONE = '-',
    RED  = 'R',
    BLUE = 'B'
} Color;

typedef struct {
    int id;
    int hasPin;
    Color pinColor;
} Hole;

typedef struct {
    Hole board[BOARD_SIZE][BOARD_SIZE];
    Color currentPlayer;
} GameState;

void init_game(GameState *g);
int pos_to_id(int x, int y);
void id_to_pos(int id, int *x, int *y);
int place_pin(GameState *g, int x, int y);

#endif
