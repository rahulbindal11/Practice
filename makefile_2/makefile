#first makefile

CC=gcc

CFLAGS=-c -wall
all:rahul

# all:rahul
# 	$(CC) -o rahul 1.o -L. -l_calc

lib_calc.so:
	$(CC) *.o -shared -o lib_calc.so

1.o:1.c
	$(CC) $(CFLAGS) 1.c

add.o:add.c
	$(CC) $(CFLAGS) add.c

hello.o:hello.c
	$(CC) $(CFLAGS) hello.c

all:rahul
	$(CC) -o rahul 1.o -L. -l_calc

# lib_calc.so:*.o
# 	$(CC) *.o -shared -o lib_calc.so

clean:
	rm -rf *.o
