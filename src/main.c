#include "board.h"
#include "render.h"
#include "input.h"
#include <stdio.h>

int main()
{
    GameState G;
    init_game(&G);

    printf("Twixt CLI – PHASE 1\n");
    printf("Pins only. No linking. No win logic.\n\n");

    render_board(&G);

    while (1)
    {
        printf("%c to move. Enter x y: ", (char)G.currentPlayer);

        int x, y;
        int r = read_move(&x, &y);

        if (r == -1) {
            printf("Quitting.\n");
            break;
        }
        if (r == 0) {
            printf("Invalid input.\n");
            continue;
        }

        if (!place_pin(&G, x, y)) {
            printf("Invalid pin placement.\n");
            continue;
        }

        render_board(&G);

        G.currentPlayer = (G.currentPlayer == RED) ? BLUE : RED;
    }

    return 0;
}
