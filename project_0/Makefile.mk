CC = g++

bin/main : build/main.o
	$(CC) build/main.o -o bin/main

build/main.o : src/main.cpp
	$(CC) -c src/main.cpp -o build/main.o
