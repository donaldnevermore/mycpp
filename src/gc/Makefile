CFLAGS=-Wall -Wextra -std=c2x -ggdb

heap: main.c
	$(CC) $(CFLAGS) -o heap main.c

dynamic: dynamic_arrays.c
	$(CC) $(CFLAGS) -o dynamic dynamic_arrays.c

test: test.c
	$(CC) $(CFLAGS) -o test test.c

a: a.c
	$(CC) $(CFLAGS) -o a a.c

b: b.c
	$(CC) $(CFLAGS) -o b b.c

clean:
	rm *.txt a b dynamic test heap
