all: main.c chessLib.c
	gcc  main.c chessLib.c -o bp3LabOdev3

example1: main.c
	gcc main.c -o main -Wall -ansi -pedantic-errors

example2: chessLib.c
	gcc chessLib.c -o chessLib -Wall -ansi -pedantic-errors