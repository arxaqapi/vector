LDLFAGS=-std=c11 -Wall -Wextra -Wpedantic

test:
	gcc -o test test.c src/vector.c
	./test


.PHONY:clean
clean:
	rm test