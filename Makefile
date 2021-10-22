LDLFAGS=-std=c11 -Wall -Wextra -Wpedantic

main:
	gcc -o main main.c src/vector.c
	./main

test:
	rm main
	gcc -o main main.c src/vector.c
	./main

.PHONY:clean
clean:
	rm main