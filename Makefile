INC=-I./src/lib

all: main

main: main.o
	g++ -o main main.o

main.o: ./src/main.cpp
	g++ -c ./src/main.cpp