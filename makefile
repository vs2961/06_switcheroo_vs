all: switcheroo.o
	gcc -o switcheroo switcheroo.c

run:
	./switcheroo
