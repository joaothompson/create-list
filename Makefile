CC=gcc
CFLAGS=-I.

hellomake: test.o student.o list.o
	$(CC) -o test test.o student.o list.o
clean:
	rm -rf student.o test test.o
