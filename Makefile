tictactoe: main.o printboard.o
	gcc -o tictactoe main.o printboard.o
main.o: main.c myheader.h
	gcc -c main.c
printboard.o: printboard.c
	gcc -c printboard.c