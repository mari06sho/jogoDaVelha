CC = gcc

all: main desafio

main: main.c
	$(CC) main.c -o main

desafio: desafio.c
	$(CC) desafio.c -o desafio

run-main: main
	./main

run-desafio: desafio
	./desafio

clean:
	rm -f main desafio