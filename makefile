CC = cc
LIB = -lSDL -lSDLmain -lSDL -lSDL_image -lSDL_ttf -g
OUT = 105polar
SRC = *.c
all:
	$(CC) $(SRC) $(LIB) -o $(OUT)

l: all
	./$(OUT)
