
all: libglobal_var

libglobal_var : glob_var.c
	gcc -fPIC -c glob_var.c
	gcc -shared -o libglobal_var.so glob_var.o

