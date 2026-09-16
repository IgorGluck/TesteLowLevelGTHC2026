CC = gcc
CFLAGS = -Wall -Wextra -std=c11

PROGRAMS = cat echo grep wc

all: $(PROGRAMS)

cat: cat.c
	$(CC) $(CFLAGS) cat.c -o cat

echo: echo.c
	$(CC) $(CFLAGS) echo.c -o echo

grep: grep.c
	$(CC) $(CFLAGS) grep.c -o grep

wc: wc.c
	$(CC) $(CFLAGS) wc.c -o wc

clean:
	rm -f $(PROGRAMS)