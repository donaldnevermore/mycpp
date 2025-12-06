CFLAGS=-Wall -Wextra -std=c11 -ggdb

all: a b

a: a.c
	$(CC) $(CFLAGS) -o a a.c

b: b.c
	$(CC) $(CFLAGS) -o b b.c

clean:
	rm a b
