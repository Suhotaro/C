
# it's makefile

#src := $(wildcard *.c)
#obj := $(wildcard *.o)

sources := $(wildcard *.c)
objects := $(patsubst %.c,%.o,$(wildcard *.c))

.PHONY: test

test: $(objects)
	@echo "sources:  $(sources)"
	@echo "objects:  $(objects)"
	cc $^ -o $@

.PHONY: clean

clean:
	rm test

print: *.c
	lpr -p $?   
	touch print 


#test: $(obj)
#	@echo "sources: $(src)"
#	@echo "objects: $(obj)"
#	gcc -Wall $^ -o $@

#$(obj):$(src)
#	gcc -c $^


