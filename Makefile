tictactoe: main.o buildboard.o printboard.o checkresult.o
	gcc -o tictactoe main.o buildboard.o printboard.o checkresult.o
main.o: main.c myheader.h
	gcc -c main.c
buildboard.o: buildboard.c
	gcc -c buildboard.c
printboard.o: printboard.c
	gcc -c printboard.c
checkresult.o: checkresult.c
	gcc -c checkresult.c