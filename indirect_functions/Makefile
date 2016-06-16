
.PHONY = all prog

all : prog

prog : main.o indirect.o
	gcc main.o indirect.o -o prog

main.o : main.c
	gcc -c main.c

indirect.o : indirect.c	
	gcc -c indirect.c

clean :
	rm *.o prog

