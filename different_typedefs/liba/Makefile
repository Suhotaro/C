
.PHONY : all liba clean

all : liba

liba : liba.c
	gcc -fPIC -DTEST -c liba.c
	gcc -DTEST -shared liba.o  -o liba.so

clean :
	rm *.o liba.so

