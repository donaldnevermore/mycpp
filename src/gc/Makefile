CFLAGS=-Wall -Wextra -ggdb

all: heap

heap: main.c
	$(CC) $(CFLAGS) -o heap main.c

dynamic: dynamic_arrays.c
	$(CC) $(CFLAGS) -o dynamic dynamic_arrays.c

test: test.c
	$(CC) $(CFLAGS) -o test test.c

clean:
	rm *.txt dynamic test heap
