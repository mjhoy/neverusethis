CFLAGS=-Wall -g -lgcrypt

nut: nut.c
	gcc $(CFLAGS) -o nut nut.c

all: nut

clean:
	rm -f nut nut.o
	rm -rf ./*.dSYM
