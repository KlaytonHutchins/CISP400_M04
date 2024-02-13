CC=g++
CFLAGS= -c -g -Wall -std=c++17 -fpermissive
EXENAME= M04

default: Matrices.o main.o
	$(CC) Matrices.o main.o -o $(EXENAME)

Matrices.o: Matrices.cpp
	$(CC) $(CFLAGS) Matrices.cpp

main.0: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *.o $(EXENAME)

run:
	./$(EXENAME)
