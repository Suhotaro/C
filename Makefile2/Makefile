src := $(wildcard *.c *.h A/*.c A/*.h)
obj := $(patsubst %.c,%.o, $(filter %.c ,$(src)))
header := $(filter %.h ,$(src))
#all := $(src) $(header)
srt := $(sort $(obj) $(header))

# Plays
dire := $(dir $(srt))

# a b files tests
find_files = $(wildcard $(dir)/*)
d := $(dir)
dirs := a b   
files := $(foreach dir,$(dirs),$(find_files))
files2 := $(wildcard a/* b/*)


.PHONY : test
test : $(srt)
	@echo " src= $(src)"
	@echo " obj= $(obj)"
	@echo " header= $(header)"
	@echo " srt = $(srt)"
	@echo " "
	@echo " dire = $(dire)"
	@echo " "
	@echo " d = $(d)"
	@echo " ff = $(find_files)"
	@echo " dirs = $(dirs)"
	@echo " files = $(files)"
	@echo " files2 = $(files2)"
	@echo " "
	gcc $^ -o $@

clean:
	rm *.o A/*.o
    
