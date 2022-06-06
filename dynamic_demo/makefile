#make file using a.out

CC=gcc
sources = 1.c add.c hello.c
output = lib_pr.so

.phony:all
all:$(output)

$(output) : $(.o,$(sources))
	$(CC) -shared -fpic $(LDFLAGS) -o $@ $^

