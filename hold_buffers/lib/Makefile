
all: libglobal_var

libglobal_var : glob_var.c
	gcc -g3 -O0 -fPIC  -c glob_var.c
	gcc -g3 -O0 -shared -o libglobal_var.so glob_var.o

