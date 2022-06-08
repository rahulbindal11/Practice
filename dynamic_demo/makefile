#first makefile

CC=gcc

CFLAGS=-c -wall
all:bindal

# all:rahul
# 	$(CC) -o rahul 1.o -L. -l_calc

lib_calc.a:add.c hello.c
	ar rcs lib_calc.a add.o hello.o

1.o:1.c
	$(CC) $(CFLAGS) 1.c

add.o:add.c
	$(CC) $(CFLAGS) add.c

hello.o:hello.c
	$(CC) $(CFLAGS) hello.c

all:bindal
	$(CC) -o bindal 1.o -L. lib_calc.a

# lib_calc.so:*.o
# 	$(CC) *.o -shared -o lib_calc.so

clean:
	rm -rf *.o
