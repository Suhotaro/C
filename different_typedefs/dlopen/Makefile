src := $(wildcard *.c *.h)
obj := $(patsubst %.c, %.o, $(filter %.c, $(src)))

.PHONY : all dlopen clean

all : dlopen

dlopen : $(obj)
	gcc -DTEST $^ -L../liba -la -o $@

clean :
	rm *.o
