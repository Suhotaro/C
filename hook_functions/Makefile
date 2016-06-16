
all: prg

prg: main.c hooks.c 
	gcc -c hooks.c
	gcc -DHOOK -c main.c
	gcc -DHOOK main.o hooks.o -o prg

clean:
	rm *.o
	rm prg
