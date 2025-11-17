CC=gcc
CFLAGS=-std=c11 -Wall -Wextra

OBJ=src/main.o src/board.o src/render.o src/input.o

twixt: $(OBJ)
	$(CC) $(CFLAGS) -o twixt $(OBJ)

clean:
	rm -f twixt src/*.o
