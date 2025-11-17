# twixt
*TWIXT — PHASE 1 SUBMISSION*

*Overview*
This is the Phase 1 implementation of the Twixt project.  
The purpose of this phase is to build the basic elements of the game, including:

- A 12x12 game board  (Later will be upgraded to a 24*24 game board)
- Rendering the board  
- Functions for placing Red and Blue pins on any empty cell  

No link logic or win detection is included in this phase.

*Features Implemented*

*1. 12x12 Board Rendering*  
The board is stored as a 2D grid.  
Each cell contains:  
.  → empty  
R  → red pin  
B  → blue pin  

The board is printed in a simple text format so the user can easily see the game state.

*2. Placing Red Pins*  
A function places a Red pin at the given coordinates if the cell is empty.

*3. Placing Blue Pins*  
A similar function places a Blue pin in an empty cell.

*4. Input Handling*  
The program reads moves from the user in the form of two integers.  
Typing 'q' or 'Q' exits the program.

*How to Run*
Compile the program using:

make

Run with:

./twixt

Users may enter coordinates such as:

3 5  
7 8  

players alternate colors

*Coordinate System*
Coordinates are entered as:  
row column  

Example:  
5 3  → row 5, column 3  



*Phase 1 Limitations*
This phase does *not* include:  
- Link placement  
- Line legality checks  
- Path connectivity  
- Win detection  
- AI or online play  

These belong to 2nd project phases.



*Code overview*



Stores all game data: current player and a 12x12 grid of Cell structs.  
Each Cell has an id, a hasPin flag, and a pinColor (NONE, R, or B).


init_game() sets the current player to RED and clears all cells by giving each one an id and removing any pins.


pos_to_id() and id_to_pos() convert between (x, y) board positions and a single linear id using the mathematical formula taugh in real analysis.


place_pin() checks if a position is valid and empty, then sets hasPin and pinColor based on the current player.


read_move() reads a line from the user.  
Returns -1 if the user typed q/Q, 1 if two numbers were read, and 0 for invalid input.


render_board() prints the 12x12 grid with "." for empty cells, R or B for pins, and uses ANSI colors for red and blue.

Structs, arrays of structs, modular .c/.h files, input taking, coordinate math, and simple terminal rendering.