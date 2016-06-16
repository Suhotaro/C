#include <stdio.h>
#include <dlfcn.h>

extern void  d();

int main()
{
	void *handle = NULL;

	void (*ptr_b)() = NULL;
	int (*ptr_c)() = NULL;
	int (*ptr_d)() = NULL;

    handle = dlopen("../module/module.so", (RTLD_NOW | RTLD_GLOBAL));
    if (handle == NULL)
    {
    	printf("ERROR: dlopen\n");
    	return 1;
    }

    ptr_b = dlsym(handle, "b");
    (*ptr_b)();

    ptr_c = dlsym(handle, "c");
    printf("c: ret%d\n", (*ptr_c)());

    d();

    return 0;
}
