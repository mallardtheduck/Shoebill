all: sources binary

binary: main.c
	gcc main.o ../intermediates/libshoebill_core.a -o cli -lpthread -lm

sources: main.o

main.o: main.c
	gcc -Wall -c main.c -o main.o

clean:
	rm -rf *.o
	rm cli
