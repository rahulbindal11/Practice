#first makefile

CC=gcc

CFLAGS=-c -wall
all:final

final:
	$(CC) 1.o add.o hello.o -o final
	

1.o:1.c
	$(CC) $(CFLAGS) 1.c

add.o:add.c
	$(CC) $(CFLAGS) add.c

hello.o:hello.c
	$(CC) $(CFLAGS) hello.c

clean:
	rm -rf *.o
