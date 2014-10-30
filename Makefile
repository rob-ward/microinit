CC := gcc

DESTDIR :=

all:
	$(CC) -static -Wall -Werror -Wextra init.c -o $(DESTDIR)init

