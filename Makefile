tictactoe: main.o buildboard.o printboard.o
	gcc -o tictactoe main.o buildboard.o printboard.o
main.o: main.c myheader.h
	gcc -c main.c
buildboard.o: buildboard.c
	gcc -c buildboard.c
printboard.o: printboard.c
	gcc -c printboard.c